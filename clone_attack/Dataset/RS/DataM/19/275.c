int main () {
    char sen [(216 - 116)];
    char word [50] [20] = {(578 - 578)};
    char pre [20];
    char post [20];
    int i;
    int l;
    int f [50] = {0};
    int g [50] = {0};
    int word_num;
    int yfdXH5wqhR0;
    word_num = 0;
    yfdXH5wqhR0 = 0;
    gets (sen);
    gets (pre);
    gets (post);
    l = strlen (sen);
    for (i = 0; i < l; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sen[i] != ' ') {
            word[word_num][yfdXH5wqhR0] = sen[i];
            yfdXH5wqhR0++;
        }
        else {
            if (sen[i] == ' ') {
                yfdXH5wqhR0 = 0;
                word_num = word_num + 1;
            };
        };
    }
    for (i = 0; i <= word_num; i++) {
        f[i] = strlen (word[i]);
    }
    for (i = 0; i <= word_num; i++) {
        if (strcmp (word[i], pre) == 0)
            strcpy (word[i], post);
    }
    for (i = 0; i < word_num; i++) {
        printf ("%s", word[i]);
        printf (" ");
    }
    printf ("%s", word[word_num]);
    return 0;
}

