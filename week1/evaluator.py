import os
import json
import pickle
from sklearn.metrics.pairwise import cosine_similarity
# 禁用并行化，避免多线程冲突
os.environ["TOKENIZERS_PARALLELISM"] = "false"
from transformers import AutoTokenizer, AutoModel
import torch
import openai
from rouge_score import rouge_scorer
from sentence_transformers import SentenceTransformer
from openai import OpenAI

class Evaluator:
    def __init__(self, embedding_model_name="sentence-transformers/all-MiniLM-L6-v2", gpt_model_name="gpt-3.5-turbo"):
        self.embedding_model_name = embedding_model_name
        self.gpt_model_name = gpt_model_name
        self.model = SentenceTransformer(self.embedding_model_name, device="cuda")
        self.client = OpenAI(
            base_url='https://api.openai-proxy.org/v1',
            api_key=os.environ.get("OPENAI_API_KEY"),
        )

    # 计算ROUGE分数
    def rouge(self, reason, ground_truth):
        # 使用n-gram的F1分数计算ROUGE
        scorer = rouge_scorer.RougeScorer(['rouge1', 'rouge2', 'rougeL'], use_stemmer=True)
        # 计算 ROUGE-1, ROUGE-2 和 ROUGE-L
        scores = scorer.score(reason, ground_truth)
        rouge_result = {
            # 强转成float,否则json序列化会报错
            'rouge1': float(scores['rouge1'].fmeasure),
            'rouge2': float(scores['rouge2'].fmeasure),
            'rougeL': float(scores['rougeL'].fmeasure)
        }
        return rouge_result

    # 计算余弦相似度
    def cos_similarity(self, reason_emb, ground_truth_emb):
        if reason_emb is None or ground_truth_emb is None:
            return None
        cos_sim = cosine_similarity([reason_emb], [ground_truth_emb])
        return cos_sim[0][0]

    # 基于 GPT 的评估
    def gpt_eval(self, reason, ground_truth):
        messages = [
            {"role": "system", "content": "你是一位计算机领域专家评估员,精通各种语言。请评估以下生成的文本与参考文本的相似性和质量，并给出1到10的评分。"},
            {"role": "user", "content": f"生成的文本：{reason}\n\n参考文本:{ground_truth}"}
        ]

        try:
            
            gpt_response = self.client.chat.completions.create(
                model=self.gpt_model_name,
                messages=messages,
                max_tokens=1000,
                temperature=0.5,
            )
            # assistant_reply = gpt_response['choices'][0]['message']['content'].strip()
            assistant_reply = gpt_response.choices[0].message.content
            # 从回复中提取评分,同样进行强转
            score = str(''.join(filter(str.isdigit, assistant_reply.split()[0])))
            return score
        except Exception as e:
            print(f"GPT 评估时出错：{e}")
            return None

    # 获取文本的嵌入
    def get_embeddings(self, text):
        embeddings = self.model.encode(text, convert_to_numpy=True, clean_up_tokenization_spaces=True)
        return embeddings

    def evaluate(self, **kwargs):
        result_dir = kwargs['result_dir']
        groundtruth_path = kwargs['groundtruth_dir']
        # 遍历result中的所有文件
        for model_name in os.listdir(result_dir):
            result_path = os.path.join(result_dir, model_name)

            for file in os.listdir(result_path):
                result_file_path = os.path.join(result_path, file)
                groundtruth_file_path = os.path.join(groundtruth_path, file)

                # 加载模型生成文件
                try:
                    with open(result_file_path, "r", encoding='utf-8') as result_file:
                        result_text = result_file.read()
                except Exception as e:
                    print(f"加载结果文件 {result_file_path} 时出错：{e}")
                    continue

                # 加载groundtruth文件
                try:
                    with open(groundtruth_file_path, "r", encoding='utf-8') as gt_file:
                        ground_truth = gt_file.read()
                except Exception as e:
                    print(f"加载参考文件 {groundtruth_file_path} 时出错：{e}")
                    continue

                # 存储评估结果
                evaluation_results = {}

                try:
                    # 计算ROUGE分数
                    rouge_score = self.rouge(reason=result_text, ground_truth=ground_truth)
                    evaluation_results["rouge"] = rouge_score
                    print(f"ROUGE分数：{rouge_score}")

                    # 计算余弦相似度
                    # 使用embedding量化两者在高纬语义空间中的相似度
                    gt_emb = self.get_embeddings(ground_truth)
                    result_emb = self.get_embeddings(result_text)
                    if result_emb is None:
                        print("embedding{result_emb}时出现问题，文件为空")
                        continue
                    if gt_emb is None:
                        print("embedding{result_emb}时出现问题，文件为空")
                        continue

                    cos_sim = self.cos_similarity(reason_emb=result_emb, ground_truth_emb=gt_emb)
                    # 强转成float,否则json序列化会报错
                    evaluation_results["cos_sim"] = float(cos_sim) if cos_sim is not None else None
                    print(f"余弦相似度：{cos_sim}")

                    # 计算 GPT 评估分数
                    gpt_eval_score = self.gpt_eval(reason=result_text, ground_truth=ground_truth)
                    if gpt_eval_score is not None:
                        evaluation_results["gpt_eval"] = gpt_eval_score
                        print(f"GPT 评估分数：{gpt_eval_score}")

                except Exception as e:
                    print(f"处理文件 {file} 时出错：{e}")
                    continue

                try:
                    # 保存结果
                #     eval_file_name = os.path.splitext(file)[0] + "_evaluation.json"
                #     eval_file_path = os.path.join(result_path, 'evaluation')
                #     if not os.path.exists(eval_file_path):
                #         os.makedirs(eval_file_path)
                #     final_eval_file_path = os.path.join(eval_file_path, eval_file_name)
                #     with open(final_eval_file_path, "w", encoding='utf-8') as eval_file:
                #         json.dump(evaluation_results, eval_file, indent=4, ensure_ascii=False)
                #     print(f"完成文件 {file} 的评估，结果已保存到 {eval_file_name}。")
                # except Exception as e:
                #     print(f"保存评估结果时出错：{e}")
                
                # 提取文件名（不包含路径）
                    base_name = os.path.basename(file)
                    eval_file_name = os.path.splitext(base_name)[0] + "_evaluation.json"

                    # 构建保存评估结果的目录
                    eval_dir_path = os.path.join(result_path, 'evaluation')
                    if not os.path.exists(eval_dir_path):
                        os.makedirs(eval_dir_path)

                    # 构建最终的评估结果文件路径
                    final_eval_file_path = os.path.join(eval_dir_path, eval_file_name)

                    # 将评估结果保存为 JSON 文件
                    with open(final_eval_file_path, "w", encoding='utf-8') as eval_file:
                        json.dump(evaluation_results, eval_file, indent=4, ensure_ascii=False)
                    print(f"完成文件 {file} 的评估，结果已保存到 {final_eval_file_path}。")
                except Exception as e:
                    print(f"保存评估结果时出错：{e}")
                    continue


if __name__ == "__main__":
    evaluator = Evaluator(
        embedding_model_name="sentence-transformers/all-MiniLM-L6-v2",  # 随便选的一个比较小的模型，可以考虑更换做对比实验
        gpt_model_name="gpt-3.5-turbo"
    )
    tasks = {
        "analysis": {
            "groundtruth_dir": "/data/yjx/code_for_first_task/week1/groundtruth/analysis", 
            "result_dir": "/data/yjx/code_for_first_task/week1/result/analysis"
            },
        "repair": {
            "groundtruth_dir": "/data/yjx/code_for_first_task/week1/groundtruth/repair", 
            "result_dir": "/data/yjx/code_for_first_task/week1/result/repair"
            },
    }
    for task_type, paths in tasks.items():
        print(f"正在评估任务: {task_type}")
        evaluator.evaluate(groundtruth_dir=paths['groundtruth_dir'], result_dir=paths['result_dir'], task=task_type)