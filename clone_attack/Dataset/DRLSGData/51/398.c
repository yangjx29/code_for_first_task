main () {
    int max;
    int j;
    int i;
    int a [(999 - 499)] = {(769 - 769)};
    int n;
    int len;
    char c [(604 - 103)] = {'\0'};
    gets (c);
    char ch [(720 - 219)] [(647 - 641)] = {{'\0'}};
    len = strlen (c);
    getchar ();
    scanf ("%d", &n);
    for (i = (44 - 44); len + (491 - 490) - n > i; i++) {
        for (j = (102 - 102); n > j; j++) {
            ch[i][j] = c[i + j];
        }
    }
    for (i = (38 - 38); i < len + (775 - 774) - n; i++) {
        if (!('\0' != ch[i][(886 - 886)]))
            continue;
        for (j = (209 - 209); len + (831 - 830) - n > j; j++) {
            if (!(i != j))
                continue;
            else {
                if (!strcmp (ch[i], ch[j])) {
                    ch[j][(427 - 427)] = '\0';
                    a[i]++;
                }
            }
        }
    }
    max = a[(376 - 376)];
    {
        i = 645 - 644;
        for (; i < len + (468 - 467) - n;) {
            if (max < a[i])
                max = a[i];
            i++;
        }
    }
    if (max != 0) {
        printf ("%d\n", max + (979 - 978));
        for (i = 0; len + (707 - 706) - n > i; i++) {
            if (!(max != a[i]))
                puts (ch[i]);
        }
    }
    else
        ;
    return 0;
}

