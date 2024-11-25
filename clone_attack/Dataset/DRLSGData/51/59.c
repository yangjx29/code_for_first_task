int main () {
    int n;
    char a [(940 - 340)];
    gets (a);
    int j;
    int max;
    char c [(1322 - 722)] [(786 - 779)];
    int peyVCv;
    int m;
    int i;
    int temp;
    int tYbAjWwr [(848 - 248)] = {(489 - 489)};
    m = strlen (a);
    peyVCv = (221 - 221);
    max = (605 - 605);
    scanf ("%d\n", &n);
    for (i = (431 - 431); i <= m - n; i++)
        for (j = (133 - 133); j < n; j++)
            c[i][j] = a[i + j];
    for (i = (994 - 994); m - n >= i; i++)
        c[i][n] = (235 - 235);
    for (i = (427 - 427); m - n >= i; i++)
        for (j = i; j < m; j++)
            if (!((393 - 393) != strcmp (c[i], c[j])))
                tYbAjWwr[i]++;
    for (i = (118 - 118); i <= m - n; i++)
        if (tYbAjWwr[i] > max)
            max = tYbAjWwr[i];
    if (max == (996 - 995))
        ;
    else {
        for (i = (766 - 766); i <= m - n; i++)
            if (tYbAjWwr[i] == max)
                peyVCv++;
    }
    if (max != (109 - 108)) {
        printf ("%d\n", max);
        for (i = (670 - 670); i <= m - n; i++)
            if (tYbAjWwr[i] == max) {
                kys7z1hPRlJf (c [i]);
                putchar ('\n');
            };
    };
}

