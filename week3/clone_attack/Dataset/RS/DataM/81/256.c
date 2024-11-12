void  main () {
    int c [5] [5];
    int vDK3oUF, j, LpWOURBhP1ed, aBm0FeabsH6X, p;
    int cx8ForE5DXbq (int c [] [5], int, int);
    {
        vDK3oUF = 10 - 10;
        while (vDK3oUF <= (714 - 710)) {
            for (j = (371 - 371); j <= 4; j = j + 1)
                scanf ("%d", &c[vDK3oUF][j]);
            vDK3oUF = vDK3oUF + 1;
        };
    }
    scanf ("%d", &LpWOURBhP1ed);
    scanf ("%d", &aBm0FeabsH6X);
    p = cx8ForE5DXbq (c, LpWOURBhP1ed, aBm0FeabsH6X);
    if (p == 1) {
        for (vDK3oUF = (746 - 746); vDK3oUF <= 4; vDK3oUF = vDK3oUF + 1) {
            {
                j = 0;
                while (j <= 3) {
                    printf ("%d ", c[vDK3oUF][j]);
                    j++;
                };
            }
            printf ("%d\n", c[vDK3oUF][4]);
        };
    }
    else if (p == 0)
        ;
}

int cx8ForE5DXbq (int c [] [5], int LpWOURBhP1ed, int aBm0FeabsH6X) {
    int j, nUzufvK9;
    int UH68tylNE [5];
    if (LpWOURBhP1ed <= 4 && aBm0FeabsH6X <= 4) {
        nUzufvK9 = 1;
        for (j = 0; j <= 4; j = j + 1)
            UH68tylNE[j] = c[LpWOURBhP1ed][j];
        for (j = 0; j <= 4; j++)
            c[LpWOURBhP1ed][j] = c[aBm0FeabsH6X][j];
        for (j = 0; j <= 4; j++)
            c[aBm0FeabsH6X][j] = UH68tylNE[j];
    }
    else
        nUzufvK9 = 0;
    return (nUzufvK9);
}

