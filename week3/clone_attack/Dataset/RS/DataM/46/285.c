void  main () {
    int m, n, ejEIgP, m2, n1, YGcEsLm5Rza;
    int i;
    int j;
    int yoQbXIvGC [(591 - 491)] [(274 - 174)];
    YGcEsLm5Rza = 0;
    scanf ("%d%d", &m, &n);
    {
        i = 254 - 254;
        while (i < m) {
            for (j = 0; j < n; j++)
                scanf ("%d", &yoQbXIvGC[i][j]);
            i++;
        };
    }
    ejEIgP = m - 1;
    n1 = n - 1;
    m2 = 0;
    while (ejEIgP > m2 && n1 > YGcEsLm5Rza) {
        {
            j = YGcEsLm5Rza;
            i = m2;
            while (j < n1) {
                printf ("%d\n", yoQbXIvGC[i][j]);
                j = j + 1;
            };
        }
        {
            j = n1;
            i = m2;
            while (i < ejEIgP) {
                printf ("%d\n", yoQbXIvGC[i][j]);
                i++;
            };
        }
        {
            j = n1;
            i = ejEIgP;
            while (j > YGcEsLm5Rza) {
                printf ("%d\n", yoQbXIvGC[i][j]);
                j--;
            };
        }
        n1--;
        {
            j = YGcEsLm5Rza;
            i = ejEIgP;
            while (i > m2) {
                printf ("%d\n", yoQbXIvGC[i][j]);
                i = i - 1;
            };
        }
        ejEIgP--;
        m2 = m2 + 1;
        YGcEsLm5Rza++;
    }
    if (ejEIgP == m2 && n1 == YGcEsLm5Rza)
        printf ("%d\n", yoQbXIvGC[ejEIgP][n1]);
    else {
        if (ejEIgP == m2) {
            j = YGcEsLm5Rza;
            while (j <= n1) {
                printf ("%d\n", yoQbXIvGC[ejEIgP][j]);
                j++;
            };
        }
        else
            for (i = m2; i <= ejEIgP; i++)
                printf ("%d\n", yoQbXIvGC[i][n1]);
    };
}

