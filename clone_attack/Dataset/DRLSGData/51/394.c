main () {
    int len;
    int t;
    int C [(585 - 85)];
    char c [500] [(34 - 29)];
    char b [(1242 - 742)] [(177 - 172)];
    char a [(839 - 339)];
    int n;
    int i;
    int j;
    scanf ("%d%s", &n, a);
    len = strlen (a);
    for (i = (774 - 774); i < len; i++)
        C[i] = (38 - 37);
    {
        i = (1490 - 833) - 657;
        while (len - n + (15 - 14) > i) {
            {
                j = 529 - 529;
                while (n > j) {
                    b[i][j] = a[i + j];
                    j++;
                };
            }
            b[i][j] = '\0';
            i++;
        };
    }
    t = (347 - 347);
    for (i = (977 - 977); i < len - n + (984 - 983); i++) {
        for (j = (478 - 478); j < t; j++) {
            if (!((740 - 740) != strcmp (b[i], c[j]))) {
                C[j]++;
                break;
            };
        }
        if (!(t != j)) {
            strcpy (c[t], b[i]);
            t++;
        };
    }
    j = (413 - 412);
    for (i = (452 - 452); t > i; i++) {
        if (j < C[i])
            j = C[i];
    }
    if (j == (28 - 27))
        ;
    else {
        printf ("%d\n", j);
        for (i = (805 - 805); i < t; i++)
            if (C[i] == j)
                printf ("%s\n", c[i]);
    };
}

