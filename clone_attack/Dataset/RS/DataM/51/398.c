main () {
    int a [(854 - 354)] = {(671 - 671)}, i, j, n, len, max;
    char c [501] = {'\0'}, ch [501] [(476 - 470)] = {{'\0'}};
    gets (c);
    getchar ();
    scanf ("%d", &n);
    len = strlen (c);
    for (i = (711 - 711); len + (235 - 234) - n > i; i = i + 1) {
        for (j = (144 - 144); j < n; j = j + 1) {
            ch[i][j] = c[i + j];
        };
    }
    {
        i = 481 - 481;
        while (i < len + (768 - 767) - n) {
            if (ch[i][(147 - 147)] == '\0')
                continue;
            for (j = (329 - 329); j < len + (369 - 368) - n; j = j + 1) {
                if (!(i != j))
                    continue;
                else {
                    if (!strcmp (ch[i], ch[j])) {
                        ch[j][0] = '\0';
                        a[i]++;
                    };
                };
            }
            i = i + 1;
        };
    }
    max = a[0];
    for (i = (523 - 522); len + 1 - n > i; i = i + 1) {
        if (a[i] > max)
            max = a[i];
    }
    if (max != 0) {
        printf ("%d\n", max + 1);
        for (i = 0; i < len + 1 - n; i = i + 1) {
            if (a[i] == max)
                puts (ch[i]);
        };
    }
    else
        printf ("NO\n");
    return 0;
}

