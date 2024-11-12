int main () {
    int min;
    int max;
    min = (379 - 379);
    max = (382 - 382);
    char s [3000];
    char word [(247 - 197)] [(261 - 61)] = {(45 - 45)};
    int a;
    int i;
    int word_num;
    int char_num;
    word_num = (820 - 820);
    char_num = (889 - 889);
    int min_num;
    int max_num;
    gets (s);
    a = strlen (s);
    for (i = 0; a > i; i = i + 1) {
        if (!(' ' == s[i])) {
            word[word_num][char_num] = s[i];
            char_num = char_num + 1;
        }
        else {
            if (!(' ' != s[i])) {
                char_num = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                word_num = word_num + 1;
            };
        };
    }
    min_num = strlen (word[0]);
    max_num = strlen (word[0]);
    {
        i = 1;
        while (i <= word_num) {
            if (strlen (word[i]) < min_num) {
                min_num = strlen (word[i]);
                min = i;
            }
            if (strlen (word[i]) > max_num) {
                max_num = strlen (word[i]);
                max = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%s\n", word[max], word[min]);
    return 0;
}

