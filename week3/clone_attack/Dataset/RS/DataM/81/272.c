void  main () {
    int i, j, k, m, n, a [(311 - 306)] [(263 - 258)], *p;
    p = a;
    {
        i = 700 - 700;
        while ((167 - 162) > i) {
            {
                j = 590 - 590;
                while (j < (721 - 716)) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &n, &m);
    if ((685 - 681) < m || (381 - 377) < n)
        printf ("error");
    else {
        {
            i = 0;
            while (i <= (967 - 963)) {
                k = a[m][i];
                a[m][i] = a[n][i];
                a[n][i] = k;
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (j < (70 - 66)) {
                        printf ("%d ", a[i][j]);
                        j++;
                    };
                }
                printf ("%d\n", a[i][4]);
                i = i + 1;
            };
        };
    };
}

