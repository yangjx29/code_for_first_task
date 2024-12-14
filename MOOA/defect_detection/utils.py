import sys
import numpy as np
import random
import torch
import torch.nn as nn
import time
import logging

logging.basicConfig(
    format="%(asctime)s - %(levelname)s - %(name)s -   %(message)s",
    datefmt="%m/%d/%Y %H:%M:%S",
    level=logging.INFO,
)
logger = logging.getLogger(__name__)

def get_identifier_posistions_from_code(words_list: list, variable_names: list) -> dict:
    positions = {}
    for name in variable_names:
        for index, token in enumerate(words_list):
            if name == token:
                try:
                    positions[name].append(index)
                except:
                    positions[name] = [index]

    return positions


class Example:
    """A single test example."""

    def __init__(self, idx, source, target):
        self.idx = idx
        self.source = source
        self.target = target


class Individual:
    def __init__(self, tokens, identifiers, pos_dict, orig_label):
        self.tokens_ = tokens[:]
        self.orig_tokens_ = tokens[:]
        self.identifiers = identifiers[:]
        self.orig_identifiers = identifiers[:]
        self.pos_dict = pos_dict
        self.obj_num_ = 3
        self.obj_ = [np.inf] * self.obj_num_

        self.mutation_prob = 1.0
        self.rank = 0
        self.fitness = 0.0
        self.orig_label = orig_label
        self.label = orig_label

    def mutation(self, t5_model, t5_tokenizer):
        # 以mutation_prob几率突变
        if np.random.random() < self.mutation_prob:
            # 随机选择变量
            index = random.choice(range(len(self.identifiers)))
            for i in range(len(self.identifiers)):
                # 如果是选择的变量，则替换为<extra_id_0>
                if i == index:
                    for j in self.pos_dict[i]:
                        self.tokens_[j] = "<extra_id_0>"
                else:
                    for j in self.pos_dict[i]:
                        self.tokens_[j] = self.identifiers[i]

            # token -> id
            source_ids = t5_tokenizer.encode(
                " ".join(self.tokens_),
                max_length=512,
                padding="max_length",
                truncation=True,
            )
            source_ids = torch.tensor([source_ids], dtype=torch.long).to("cuda")
            # not equal to pad token
            source_mask = source_ids.ne(t5_tokenizer.pad_token_id)
            # 生成 40 个候选标识符
            t5startTime = time.time()
            preds = t5_model.generate(
                input_ids=source_ids,
                attention_mask=source_mask,
                max_length=512,
                num_return_sequences=40,
                use_cache=True,
                num_beams=40,
            )
            # logger.info("T5生成标识符时间:{}".format(time.time() - t5startTime))
            # 解码得到标识符
            pred_nls = [
                t5_tokenizer.decode(id, skip_special_tokens=True) for id in preds
            ]

            # 随机选择符合条件的标识符,将index位置的标识符替换为选择的标识符
            cnt = 0
            while cnt < 20:
                i = np.random.randint(0, 40)
                if isUID(pred_nls[i]):
                    self.identifiers[index] = pred_nls[i]
                    break
                cnt += 1

    def function_eval(self, model, tokenizer, t5_emb_model, t5_tokenizer):
        # 得到目前已经变换之后的标识符
        for i in range(len(self.identifiers)):
            for j in self.pos_dict[i]:
                self.tokens_[j] = self.identifiers[i]

        # 计算第一个目标值 对抗性损失 AL（分类目标 f1）
        prob = model.predict(" ".join(self.tokens_))
        self.label_ = np.argmax(prob) # 得到预测的label
        # 分类越偏离原始标签，目标值越高
        self.obj_[0] = 1 - prob[self.orig_label]

        # 找出变换的标识符、位置以及原标识符 将变换后的标识符和原始标识符分别加入 code_input，用于后续语义相似度计算
        modified_pos = []
        code_input = []
        for i in range(len(self.identifiers)):
            if self.identifiers[i] != self.orig_identifiers[i]:
                modified_pos.append(i)
                code_input.append(self.identifiers[i])
                code_input.append(self.orig_identifiers[i])


        # 计算第二个目标值 语义相似性 SS（语义差异目标 f2）
        if len(modified_pos) == 0:
            self.obj_[1] = 0.0
            self.obj_[2] = 0.0
        else:
            # 生成id和嵌入表示output
            input_ids = t5_tokenizer(
                code_input, return_tensors="pt", padding=True
            ).input_ids
            output = t5_emb_model(input_ids.to("cuda")).last_hidden_state
            cos = nn.CosineSimilarity(dim=1, eps=1e-6)

            # 对每个标识计算两者的余弦相似度，用1减相似度的平均值，作为该标识符变换的语义差异
            f2 = 0.0
            for i in range(len(modified_pos)):
                output1 = output[2 * i]
                output2 = output[2 * i + 1]
                f2 += (
                    1
                    - sum(cos(output1, output2).cpu().detach().numpy())
                    / output1.shape[0]
                )
            self.obj_[1] = f2

            # 计算第三个目标值 修改率 MR（变换规模目标 f3）
            modified_size = 0.0
            # 统计所有变换标识符的位置数目
            for i in range(len(modified_pos)):
                modified_size += len(self.pos_dict[i])
            self.obj_[2] = modified_size / len(self.tokens_)

    def copy(self, src):
        self.tokens_ = src.tokens_[:]
        self.identifiers = src.identifiers[:]
        self.obj_ = src.obj_[:]
        self.fitness = src.fitness


class Population:
    def __init__(self, pop_num) -> None:
        self.pop_num = (int)(pop_num)
        self.indi = []

    def set_individuals(self, indis):
        assert self.pop_num == len(indis)
        for i in range(len(indis)):
            self.indi[i].copy(indis[i])

    def copy_pop(self, pop_src):
        self.pop_num = pop_src.pop_num
        self.indi = []
        self.set_individuals(pop_src.indi)

    def mutation(self, t5_model, t5_tokenizer):
        for i in range((int)(self.pop_num)):
            self.indi[i].mutation(t5_model, t5_tokenizer)

    def crossover(self, parent_pop):
        pop_num = parent_pop.pop_num
        arr1 = np.arange((int)(self.pop_num))
        arr2 = np.arange((int)(self.pop_num))
        np.random.shuffle(arr1)
        np.random.shuffle(arr2)
        for i in range(int(pop_num / 2)):
            parent1 = TournamentByRank(
                parent_pop.indi[arr1[2 * i]], parent_pop.indi[arr1[2 * i + 1]]
            )
            parent2 = TournamentByRank(
                parent_pop.indi[arr1[2 * i]], parent_pop.indi[arr1[2 * i + 1]]
            )
            self.indi[2 * i], self.indi[2 * i + 1] = SBX(
                parent1, parent2, self.indi[2 * i], self.indi[2 * i + 1]
            )
        self.pop_num = 2 * (int(pop_num / 2))

    def environmental_selection(self, offspring_pop, mixed_pop):

        # 合并父代与子代种群
        mixed_pop.set_individuals(self.indi + offspring_pop.indi)
        # 对混合种群进行非支配排序 会根据个体的目标函数值进行排序，将个体分为不同的等级（rank）。其中 rank=0 表示 Pareto 前沿解，即最优解，rank=1 表示次优解，依此类推
        mixed_pop = NonDominatedSort(mixed_pop, mixed_pop.indi[0].obj_num_)
        mixed_popnum = mixed_pop.pop_num

        # print mixed_pop
        # for i in range(mixed_pop.pop_num):
        #     logger.info("mixed_pop{}: objective function={}, rank={}".format(i, mixed_pop.indi[i].obj_, mixed_pop.indi[i].rank))

        # 根据 rank 选择个体
        current_popnum = 0
        rank_index = 0
        # select individuals by rank
        while True:
            temp_number = 0
            for i in range(mixed_popnum):
                if mixed_pop.indi[i].rank == rank_index:
                    temp_number += 1
            # 如果当前层的个体数量加上已选择的个体数 current_popnum 不超过种群大小 self.pop_num，则将该层的所有个体复制到父代种群中，并更新 current_popnum
            if current_popnum + temp_number <= self.pop_num:
                for i in range(mixed_popnum):
                    if mixed_pop.indi[i].rank == rank_index:
                        self.indi[current_popnum].copy(mixed_pop.indi[i])
                        current_popnum += 1
                rank_index += 1
            else:
                break

        # select individuals by crowding distance
        sort_num = 0

        # 如果通过 rank 层选择后的个体数量 current_popnum 还不满足种群大小 self.pop_num，则通过 拥挤距离（Crowding Distance） 进行进一步选择
        if current_popnum < self.pop_num:
            sort_num, pop_sort = CrowdingDistance(mixed_pop, mixed_popnum, rank_index)
            while True:
                if current_popnum < self.pop_num:
                    self.indi[current_popnum].copy(
                        mixed_pop.indi[pop_sort[sort_num - 1]]
                    )
                    sort_num -= 1
                    current_popnum += 1
                else:
                    break

        # clear crowding distance value 清除历史计算的拥挤距离值，为下一代选择做准备
        for i in range(self.pop_num):
            self.indi[i].fitness = 0

        # print parent pop
        # for i in range(self.pop_num):
        #     logger.info("paprent_pop{}: objective function={}, rank={}".format(i, self.indi[i].obj_, self.indi[i].rank))


def TournamentByRank(ind1, ind2):
    if ind1.rank < ind2.rank:
        return ind1
    elif ind1.rank > ind2.rank:
        return ind2
    else:
        if np.random.random() < 0.5:
            return ind1
        else:
            return ind2


def SBX(parent1, parent2, offspring1, offspring2):
    for i in range(len(parent1.identifiers)):
        if np.random.random() < 0.5:  # exchange indentifier
            offspring1.identifiers[i] = parent2.identifiers[i]
            offspring2.identifiers[i] = parent1.identifiers[i]
        else:
            offspring1.identifiers[i] = parent1.identifiers[i]
            offspring2.identifiers[i] = parent2.identifiers[i]
    return offspring1, offspring2


def NonDominatedSort(pop, obj_num):
    index = 0
    dominate_relation = 0 #记录解之间的支配关系
    current_rank = 0 # 当前的等级（rank），从0开始，rank=0 表示 Pareto 前沿解集
    pop_num = pop.pop_num
    unrank_num = pop_num

    # 存储第i个解的支配点数量
    ni = [0] * pop_num  # store the number of points that dominate i-th solution
    # store the solution index of which i-th solution dominates 
    # 存储第i个解支配的解的索引
    si = [[0] * pop_num for _ in range(pop_num)]
    # 存储支配点数量为0的解
    Q = [0] * pop_num  # store the solution which ni is 0
    # store the number of dominate points of i-th solution
    # 存储每个解支配的解的数量
    dominate_num = [0] * pop_num

    # 对于每一对个体 A 和 B，判断它们的支配关系
    for i in range(pop_num):
        ind_tempA = pop.indi[i]
        index = 0
        for j in range(pop_num):
            if i == j:
                continue

            ind_tempB = pop.indi[j]
            """ check_dominance 函数用于检查解 A 是否支配解 B，或者 B是否支配 A，支配关系的返回值为：
                1 表示 A 支配 B。
                -1 表示 B支配 A。
                0 表示两者不相互支配
                如果 A 支配B，则将 B 的索引存储在 si[i] 中，表示 A 支配 B
                如果 B 支配 A，则增加 ni[i]（即解 A 被支配的个体数量）
            """
            dominate_relation = check_dominance(ind_tempA, ind_tempB, obj_num)
            if dominate_relation == 1:
                si[i][index] = j
                index += 1
            elif dominate_relation == -1:
                ni[i] += 1
        dominate_num[i] = index

    # 非支配排序过程 在每一轮循环中，将支配点数量为 0 的解（即 Pareto 前沿解）选择出来，给它们分配一个新的等级（rank），然后更新其他解的支配关系。
    while unrank_num > 0:
        index = 0
        for i in range(pop_num):
            if ni[i] == 0:
                pop.indi[i].rank = current_rank
                Q[index] = i
                index += 1
                unrank_num -= 1
                ni[i] = -1
        current_rank += 1
        for i in range(index):
            for j in range(dominate_num[Q[i]]):
                ni[si[Q[i]][j]] -= 1
    return pop


def check_dominance(ind1, ind2, obj_num):
    if ind1.obj_[0] > 0.5 or ind2.obj_[0] > 0.5:
        if ind1.obj_[0] < ind2.obj_[0]:
            return 1
        elif ind1.obj_[0] > ind2.obj_[0]:
            return -1
        else:
            return 0
    else:
        flag1 = 0
        flag2 = 0
        for i in range(obj_num):
            if ind1.obj_[i] < ind2.obj_[i]:
                flag1 = 1
            elif ind1.obj_[i] > ind2.obj_[i]:
                flag2 = 1
        if flag1 == 1 and flag2 == 0:
            return 1  # ind1 dominate ind2
        elif flag1 == 0 and flag2 == 1:
            return -1  # ind1 is dominated by ind2
        else:
            return 0  # can not judge


def CrowdingDistance(mixed_pop, pop_num, rank_index):
    num_in_rank = 0
    sort_arr = []
    distanceinfo_vec = []

    # find all the individuals with rank rank_index
    for i in range(pop_num):
        mixed_pop.indi[i].fitness = 0
        if mixed_pop.indi[i].rank == rank_index:
            distanceinfo_vec.append(DistanceInfo(i, 0.0))
            sort_arr.append(i)
            num_in_rank += 1

    for i in range(mixed_pop.indi[0].obj_num_):
        # sort the population with i-th obj
        sort_arr[:num_in_rank] = sorted(
            sort_arr[:num_in_rank], key=lambda x: mixed_pop.indi[x].obj_[i]
        )

        # set the first and last individual with INF fitness (crowding distance)
        mixed_pop.indi[sort_arr[0]].fitness_ = np.inf
        SetDistanceInfo(distanceinfo_vec, sort_arr[0], np.inf)
        mixed_pop.indi[sort_arr[num_in_rank - 1]].fitness = np.inf
        SetDistanceInfo(distanceinfo_vec, sort_arr[num_in_rank - 1], np.inf)

        # calculate each solution's crowding distance
        for j in range(1, num_in_rank - 1):
            if mixed_pop.indi[j].fitness == np.inf:
                if (
                    mixed_pop.indi[sort_arr[num_in_rank - 1]].obj_[i]
                    == mixed_pop.indi[sort_arr[0]].obj_[i]
                ):
                    mixed_pop.indi[j].fitness += 0
                else:
                    distance = (
                        mixed_pop.indi[sort_arr[j + 1]].obj_[i]
                        - mixed_pop.indi[sort_arr[j - 1]].obj_[i]
                    ) / (
                        mixed_pop.indi[sort_arr[num_in_rank - 1]].obj_[i]
                        - mixed_pop.indi[sort_arr[0]].obj_[i]
                    )
                    mixed_pop.indi[sort_arr[j]].fitness += distance
                    SetDistanceInfo(distanceinfo_vec, sort_arr[j], distance)
    distanceinfo_vec.sort(key=lambda x: x.distance)
    pop_sort = [0] * pop_num
    for i in range(num_in_rank):
        pop_sort[i] = distanceinfo_vec[i].index
    return num_in_rank, pop_sort


def SetDistanceInfo(distance_vec, target_index, distance):
    for i in range(len(distance_vec)):
        if distance_vec[i].get_index == target_index:
            distance_vec[i].add_distance(distance)


class DistanceInfo:
    def __init__(self, index, distance) -> None:
        self.index = index
        self.distance = distance

    def get_index(self):
        return self.index

    def add_distance(self, distance):
        self.distance += distance


python_keywords = [
    "import",
    "",
    "[",
    "]",
    ":",
    ",",
    ".",
    "(",
    ")",
    "{",
    "}",
    "not",
    "is",
    "=",
    "+=",
    "-=",
    "<",
    ">",
    "+",
    "-",
    "*",
    "/",
    "False",
    "None",
    "True",
    "and",
    "as",
    "assert",
    "async",
    "await",
    "break",
    "class",
    "continue",
    "def",
    "del",
    "elif",
    "else",
    "except",
    "finally",
    "for",
    "from",
    "global",
    "if",
    "import",
    "in",
    "is",
    "lambda",
    "nonlocal",
    "not",
    "or",
    "pass",
    "raise",
    "return",
    "try",
    "while",
    "with",
    "yield",
]
java_keywords = [
    "abstract",
    "assert",
    "boolean",
    "break",
    "byte",
    "case",
    "catch",
    "do",
    "double",
    "else",
    "enum",
    "extends",
    "final",
    "finally",
    "float",
    "for",
    "goto",
    "if",
    "implements",
    "import",
    "instanceof",
    "int",
    "interface",
    "long",
    "native",
    "new",
    "package",
    "private",
    "protected",
    "public",
    "return",
    "short",
    "static",
    "strictfp",
    "super",
    "switch",
    "throws",
    "transient",
    "try",
    "void",
    "volatile",
    "while",
]
java_special_ids = [
    "main",
    "args",
    "Math",
    "System",
    "Random",
    "Byte",
    "Short",
    "Integer",
    "Long",
    "Float",
    "Double",
    "Character",
    "Boolean",
    "Data",
    "ParseException",
    "SimpleDateFormat",
    "Calendar",
    "Object",
    "String",
    "StringBuffer",
    "StringBuilder",
    "DateFormat",
    "Collection",
    "List",
    "Map",
    "Set",
    "Queue",
    "ArrayList",
    "HashSet",
    "HashMap",
]
c_keywords = [
    "auto",
    "break",
    "case",
    "char",
    "const",
    "continue",
    "default",
    "do",
    "double",
    "else",
    "enum",
    "extern",
    "float",
    "for",
    "goto",
    "if",
    "inline",
    "int",
    "long",
    "register",
    "restrict",
    "return",
    "short",
    "signed",
    "sizeof",
    "static",
    "struct",
    "switch",
    "typedef",
    "union",
    "unsigned",
    "void",
    "volatile",
    "while",
    "_Alignas",
    "_Alignof",
    "_Atomic",
    "_Bool",
    "_Complex",
    "_Generic",
    "_Imaginary",
    "_Noreturn",
    "_Static_assert",
    "_Thread_local",
    "__func__",
]

c_macros = [
    "NULL",
    "_IOFBF",
    "_IOLBF",
    "BUFSIZ",
    "EOF",
    "FOPEN_MAX",
    "TMP_MAX",  # <stdio.h> macro
    "FILENAME_MAX",
    "L_tmpnam",
    "SEEK_CUR",
    "SEEK_END",
    "SEEK_SET",
    "NULL",
    "EXIT_FAILURE",
    "EXIT_SUCCESS",
    "RAND_MAX",
    "MB_CUR_MAX",
]  # <stdlib.h> macro
c_special_ids = [
    "main",  # main function
    # <stdio.h> & <cstdio>
    "stdio",
    "cstdio",
    "stdio.h",
    # <stdio.h> types & streams
    "size_t",
    "FILE",
    "fpos_t",
    "stdin",
    "stdout",
    "stderr",
    "remove",
    "rename",
    "tmpfile",
    "tmpnam",
    "fclose",
    "fflush",  # <stdio.h> functions
    "fopen",
    "freopen",
    "setbuf",
    "setvbuf",
    "fprintf",
    "fscanf",
    "printf",
    "scanf",
    "snprintf",
    "sprintf",
    "sscanf",
    "vprintf",
    "vscanf",
    "vsnprintf",
    "vsprintf",
    "vsscanf",
    "fgetc",
    "fgets",
    "fputc",
    "getc",
    "getchar",
    "putc",
    "putchar",
    "puts",
    "ungetc",
    "fread",
    "fwrite",
    "fgetpos",
    "fseek",
    "fsetpos",
    "ftell",
    "rewind",
    "clearerr",
    "feof",
    "ferror",
    "perror",
    "getline"
    # <stdlib.h> & <cstdlib>
    "stdlib",
    "cstdlib",
    "stdlib.h",
    "size_t",
    "div_t",
    "ldiv_t",
    "lldiv_t",  # <stdlib.h> types
    "atof",
    "atoi",
    "atol",
    "atoll",
    "strtod",
    "strtof",
    "strtold",  # <stdlib.h> functions
    "strtol",
    "strtoll",
    "strtoul",
    "strtoull",
    "rand",
    "srand",
    "aligned_alloc",
    "calloc",
    "malloc",
    "realloc",
    "free",
    "abort",
    "atexit",
    "exit",
    "at_quick_exit",
    "_Exit",
    "getenv",
    "quick_exit",
    "system",
    "bsearch",
    "qsort",
    "abs",
    "labs",
    "llabs",
    "div",
    "ldiv",
    "lldiv",
    "mblen",
    "mbtowc",
    "wctomb",
    "mbstowcs",
    "wcstombs",
    # <string.h> & <cstring>
    "string",
    "cstring",
    "string.h",
    "memcpy",
    "memmove",
    "memchr",
    "memcmp",
    "memset",
    "strcat",  # <string.h> functions
    "strncat",
    "strchr",
    "strrchr",
    "strcmp",
    "strncmp",
    "strcoll",
    "strcpy",
    "strncpy",
    "strerror",
    "strlen",
    "strspn",
    "strcspn",
    "strpbrk",
    "strstr",
    "strtok",
    "strxfrm",
    # <string.h> extension functions
    "memccpy",
    "mempcpy",
    "strcat_s",
    "strcpy_s",
    "strdup",
    "strerror_r",
    "strlcat",
    "strlcpy",
    "strsignal",
    "strtok_r",
    "iostream",
    "istream",
    "ostream",
    "fstream",
    "sstream",  # <iostream> family
    "iomanip",
    "iosfwd",
    "ios",
    "wios",
    "streamoff",
    "streampos",
    "wstreampos",  # <iostream> types
    "streamsize",
    "cout",
    "cerr",
    "clog",
    "cin",
    # <iostream> manipulators
    "boolalpha",
    "noboolalpha",
    "skipws",
    "noskipws",
    "showbase",
    "noshowbase",
    "showpoint",
    "noshowpoint",
    "showpos",
    "noshowpos",
    "unitbuf",
    "nounitbuf",
    "uppercase",
    "nouppercase",
    "left",
    "right",
    "internal",
    "dec",
    "oct",
    "hex",
    "fixed",
    "scientific",
    "hexfloat",
    "defaultfloat",
    "width",
    "fill",
    "precision",
    "endl",
    "ends",
    "flush",
    "ws",
    "showpoint",
    "sin",
    "cos",
    "tan",
    "asin",
    "acos",
    "atan",
    "atan2",
    "sinh",  # <math.h> functions
    "cosh",
    "tanh",
    "exp",
    "sqrt",
    "log",
    "log10",
    "pow",
    "powf",
    "ceil",
    "floor",
    "abs",
    "fabs",
    "cabs",
    "frexp",
    "ldexp",
    "modf",
    "fmod",
    "hypot",
    "ldexp",
    "poly",
    "matherr",
]

special_char = [
    "[",
    "]",
    ":",
    ",",
    ".",
    "(",
    ")",
    "{",
    "}",
    "not",
    "is",
    "=",
    "+=",
    "-=",
    "<",
    ">",
    "+",
    "-",
    "*",
    "/",
    "|",
]

__key_words__ = [
    "auto",
    "break",
    "case",
    "char",
    "const",
    "continue",
    "default",
    "do",
    "double",
    "else",
    "enum",
    "extern",
    "float",
    "for",
    "goto",
    "if",
    "inline",
    "int",
    "long",
    "register",
    "restrict",
    "return",
    "short",
    "signed",
    "sizeof",
    "static",
    "struct",
    "switch",
    "typedef",
    "union",
    "unsigned",
    "void",
    "volatile",
    "while",
    "_Alignas",
    "_Alignof",
    "_Atomic",
    "_Bool",
    "_Complex",
    "_Generic",
    "_Imaginary",
    "_Noreturn",
    "_Static_assert",
    "_Thread_local",
    "__func__",
]
__ops__ = [
    "...",
    ">>=",
    "<<=",
    "+=",
    "-=",
    "*=",
    "/=",
    "%=",
    "&=",
    "^=",
    "|=",
    ">>",
    "<<",
    "++",
    "--",
    "->",
    "&&",
    "||",
    "<=",
    ">=",
    "==",
    "!=",
    ";",
    "{",
    "<%",
    "}",
    "%>",
    ",",
    ":",
    "=",
    "(",
    ")",
    "[",
    "<:",
    "]",
    ":>",
    ".",
    "&",
    "!",
    "~",
    "-",
    "+",
    "*",
    "/",
    "%",
    "<",
    ">",
    "^",
    "|",
    "?",
]
__macros__ = [
    "NULL",
    "_IOFBF",
    "_IOLBF",
    "BUFSIZ",
    "EOF",
    "FOPEN_MAX",
    "TMP_MAX",  # <stdio.h> macro
    "FILENAME_MAX",
    "L_tmpnam",
    "SEEK_CUR",
    "SEEK_END",
    "SEEK_SET",
    "NULL",
    "EXIT_FAILURE",
    "EXIT_SUCCESS",
    "RAND_MAX",
    "MB_CUR_MAX",
]  # <stdlib.h> macro
__special_ids__ = [
    "main",  # main function
    # <stdio.h> & <cstdio>
    "stdio",
    "cstdio",
    "stdio.h",
    # <stdio.h> types & streams
    "size_t",
    "FILE",
    "fpos_t",
    "stdin",
    "stdout",
    "stderr",
    "remove",
    "rename",
    "tmpfile",
    "tmpnam",
    "fclose",
    "fflush",  # <stdio.h> functions
    "fopen",
    "freopen",
    "setbuf",
    "setvbuf",
    "fprintf",
    "fscanf",
    "printf",
    "scanf",
    "snprintf",
    "sprintf",
    "sscanf",
    "vprintf",
    "vscanf",
    "vsnprintf",
    "vsprintf",
    "vsscanf",
    "fgetc",
    "fgets",
    "fputc",
    "getc",
    "getchar",
    "putc",
    "putchar",
    "puts",
    "ungetc",
    "fread",
    "fwrite",
    "fgetpos",
    "fseek",
    "fsetpos",
    "ftell",
    "rewind",
    "clearerr",
    "feof",
    "ferror",
    "perror",
    "getline"
    # <stdlib.h> & <cstdlib>
    "stdlib",
    "cstdlib",
    "stdlib.h",
    "size_t",
    "div_t",
    "ldiv_t",
    "lldiv_t",  # <stdlib.h> types
    "atof",
    "atoi",
    "atol",
    "atoll",
    "strtod",
    "strtof",
    "strtold",  # <stdlib.h> functions
    "strtol",
    "strtoll",
    "strtoul",
    "strtoull",
    "rand",
    "srand",
    "aligned_alloc",
    "calloc",
    "malloc",
    "realloc",
    "free",
    "abort",
    "atexit",
    "exit",
    "at_quick_exit",
    "_Exit",
    "getenv",
    "quick_exit",
    "system",
    "bsearch",
    "qsort",
    "abs",
    "labs",
    "llabs",
    "div",
    "ldiv",
    "lldiv",
    "mblen",
    "mbtowc",
    "wctomb",
    "mbstowcs",
    "wcstombs",
    # <string.h> & <cstring>
    "string",
    "cstring",
    "string.h",
    "memcpy",
    "memmove",
    "memchr",
    "memcmp",
    "memset",
    "strcat",  # <string.h> functions
    "strncat",
    "strchr",
    "strrchr",
    "strcmp",
    "strncmp",
    "strcoll",
    "strcpy",
    "strncpy",
    "strerror",
    "strlen",
    "strspn",
    "strcspn",
    "strpbrk",
    "strstr",
    "strtok",
    "strxfrm",
    # <string.h> extension functions
    "memccpy",
    "mempcpy",
    "strcat_s",
    "strcpy_s",
    "strdup",
    "strerror_r",
    "strlcat",
    "strlcpy",
    "strsignal",
    "strtok_r",
    "iostream",
    "istream",
    "ostream",
    "fstream",
    "sstream",  # <iostream> family
    "iomanip",
    "iosfwd",
    "ios",
    "wios",
    "streamoff",
    "streampos",
    "wstreampos",  # <iostream> types
    "streamsize",
    "cout",
    "cerr",
    "clog",
    "cin",
    # <iostream> manipulators
    "boolalpha",
    "noboolalpha",
    "skipws",
    "noskipws",
    "showbase",
    "noshowbase",
    "showpoint",
    "noshowpoint",
    "showpos",
    "noshowpos",
    "unitbuf",
    "nounitbuf",
    "uppercase",
    "nouppercase",
    "left",
    "right",
    "internal",
    "dec",
    "oct",
    "hex",
    "fixed",
    "scientific",
    "hexfloat",
    "defaultfloat",
    "width",
    "fill",
    "precision",
    "endl",
    "ends",
    "flush",
    "ws",
    "showpoint",
    "sin",
    "cos",
    "tan",
    "asin",
    "acos",
    "atan",
    "atan2",
    "sinh",  # <math.h> functions
    "cosh",
    "tanh",
    "exp",
    "sqrt",
    "log",
    "log10",
    "pow",
    "powf",
    "ceil",
    "floor",
    "abs",
    "fabs",
    "cabs",
    "frexp",
    "ldexp",
    "modf",
    "fmod",
    "hypot",
    "ldexp",
    "poly",
    "matherr",
]


def isUID(_text=""):
    """
    Return if a token is a UID.
    """

    _text = _text.strip()
    if _text == "":
        return False

    if " " in _text or "\n" in _text or "\r" in _text:
        return False
    elif _text in __key_words__:
        return False
    elif _text in __ops__:
        return False
    elif _text in __macros__:
        return False
    elif _text in __special_ids__:
        return False
    elif _text[0].lower() in "0123456789":
        return False
    elif "'" in _text or '"' in _text:
        return False
    elif _text[0].lower() in "abcdefghijklmnopqrstuvwxyz_":
        for _c in _text[1:-1]:
            if _c.lower() not in "0123456789abcdefghijklmnopqrstuvwxyz_":
                return False
    else:
        return False
    return True
