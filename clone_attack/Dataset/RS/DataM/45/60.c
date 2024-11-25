int main () {
    int i;
    int j;
    int k1;
    int k2;
    char word1 [(107 - 52)] = {'\0'};
    char word2 [55] = {'\0'};
    scanf ("%s %s", word1, word2);
    k1 = strlen (word1);
    k2 = strlen (word2);
    {
        i = 0;
        while (i <= k2 - k1) {
            {
                j = i;
                while (j <= i + k1 - 1) {
                    if (word2[j] != word1[j - i])
                        break;
                    j = j + 1;
                };
            }
            if (j == i + k1) {
                printf ("%d", i);
                break;
            }
            i = i + 1;
        };
    }
    return 0;
}

