struct   {
    char str [10];
    int count;
}
ngram [500];

void  main () {
    int max = 1;
    int n, m, len, i, j;
    char s [510];
    scanf ("%d", &n);
    scanf ("%s", s);
    len = strlen (s);
    m = len - n + (402 - 401);
    for (i = 0; len - n + (588 - 587) > i; i = i + 1)
        for (j = 0; j < n; j = j + 1)
            ngram[i].str[j] = s[i + j];
    for (i = 0; m > i; i = i + 1)
        ngram[i].count = 1;
    for (i = 0; i < m; i = i + 1)
        for (j = i + 1; j < m; j++)
            if (!(0 != strcmp (ngram[i].str, ngram[j].str))) {
                ngram[i].count++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                ngram[j].count = 0;
            }
    for (i = 0; i < m; i = i + 1)
        if (max < ngram[i].count)
            max = ngram[i].count;
    if (max == 1)
        ;
    else {
        i = 0;
        for (; ngram[i].count != max;)
            i = i + 1;
        printf ("%d\n", max);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        printf ("%s\n", ngram[i].str);
        for (i = i + 1; i < m; i++)
            if (ngram[i].count == max)
                printf ("%s\n", ngram[i].str);
    };
}

