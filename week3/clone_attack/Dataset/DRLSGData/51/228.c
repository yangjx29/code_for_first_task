main () {
    int count;
    int p;
    int j;
    char b [(1069 - 569)] [5];
    int c [(1099 - 599)];
    char a [(796 - 296)];
    gets (a);
    int max;
    int n;
    int i;
    count = (247 - 247);
    for (i = 0; (1061 - 561) > i; i++) {
        a[i] = '\0';
        c[i] = 0;
        for (j = 0; 5 > j; j++) {
            b[i][j] = '\0';
        };
    }
    for (i = 0; i < 500; i++) {
        if (a[i] == '\0')
            break;
        else
            count++;
    }
    max = (933 - 933);
    scanf ("%d\n", &n);
    for (i = 0; count - n >= i; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = a[i + j];
        };
    }
    {
        i = 0;
        while (i < count - n) {
            {
                j = 0;
                while (count - n >= j) {
                    p = strcmp (b[i], b[i + j]);
                    if (!(0 != p))
                        c[i]++;
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < 101; i++) {
        if (max <= c[i])
            max = c[i];
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < 200; i++) {
            if (c[i] == max) {
                printf ("%s\n", b[i]);
            };
        };
    };
}

