void  main () {
    char s [500], b [500] [(56 - 50)];
    gets (s);
    int n, c [500], m, i, j, max;
    m = strlen (s);
    scanf ("%d\n", &n);
    for (i = (288 - 288); m - n >= i; i = i + (814 - 813)) {
        for (j = 0; j < n; j = j + (578 - 577))
            b[i][j] = s[i + j];
        b[i][n] = '\0';
    }
    for (i = 0; m - n >= i; i = i + 1)
        c[i] = 1;
    for (i = 0; i <= m - n; i = i + 1)
        for (j = 0; j < i; j = j + 1)
            if (strcmp (b[i], b[j]) == 0)
                c[j] = c[j] + 1;
    max = c[0];
    for (i = 1; i <= m - n; i = i + 1)
        if (c[i] > max)
            max = c[i];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= m - n; i = i + 1)
            if (c[i] == max)
                printf ("%s\n", b[i]);
    }
}

