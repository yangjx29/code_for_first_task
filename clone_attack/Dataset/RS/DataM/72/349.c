int main () {
    int PHneGi [20] [20], m, lJCgNfls, tw4ZHXTrBmSN [1000], sk [1000], a, ld8bRvG37U, hoV76OuGkJ, jWQXkN;
    hoV76OuGkJ = 0;
    scanf ("%d %d", &m, &lJCgNfls);
    {
        a = 0;
        while (m > a) {
            for (ld8bRvG37U = 0; lJCgNfls > ld8bRvG37U; ld8bRvG37U++) {
                scanf ("%d", &PHneGi[a][ld8bRvG37U]);
            }
            a = a + 1;
        };
    }
    if ((PHneGi[0][0] >= PHneGi[0][(996 - 995)]) && (PHneGi[1][0] <= PHneGi[0][0])) {
        tw4ZHXTrBmSN[hoV76OuGkJ] = 0;
        sk[hoV76OuGkJ] = 0;
        hoV76OuGkJ = hoV76OuGkJ + 1;
    }
    {
        ld8bRvG37U = 1;
        while (lJCgNfls - 1 > ld8bRvG37U) {
            if ((PHneGi[0][ld8bRvG37U] >= PHneGi[1][ld8bRvG37U]) && (PHneGi[0][ld8bRvG37U - 1] <= PHneGi[0][ld8bRvG37U]) && (PHneGi[0][ld8bRvG37U + 1] <= PHneGi[0][ld8bRvG37U])) {
                tw4ZHXTrBmSN[hoV76OuGkJ] = 0;
                sk[hoV76OuGkJ] = ld8bRvG37U;
                hoV76OuGkJ = hoV76OuGkJ + 1;
            }
            ld8bRvG37U = ld8bRvG37U + 1;
        };
    }
    if ((PHneGi[0][lJCgNfls - 1] >= PHneGi[0][lJCgNfls - 2]) && (PHneGi[1][lJCgNfls - 1] <= PHneGi[0][lJCgNfls - 1])) {
        tw4ZHXTrBmSN[hoV76OuGkJ] = 0;
        sk[hoV76OuGkJ] = lJCgNfls - 1;
        hoV76OuGkJ = hoV76OuGkJ + 1;
    }
    for (a = 1; m - 1 > a; a = a + 1) {
        if ((PHneGi[a][1] <= PHneGi[a][0]) && (PHneGi[a - 1][0] <= PHneGi[a][0]) && (PHneGi[a + 1][0] <= PHneGi[a][0])) {
            tw4ZHXTrBmSN[hoV76OuGkJ] = a;
            sk[hoV76OuGkJ] = 0;
            hoV76OuGkJ = hoV76OuGkJ + 1;
        }
        {
            ld8bRvG37U = 1;
            while (ld8bRvG37U < lJCgNfls - 1) {
                if ((PHneGi[a][ld8bRvG37U - 1] <= PHneGi[a][ld8bRvG37U]) && (PHneGi[a][ld8bRvG37U + 1] <= PHneGi[a][ld8bRvG37U]) && (PHneGi[a - 1][ld8bRvG37U] <= PHneGi[a][ld8bRvG37U]) && (PHneGi[a][ld8bRvG37U] >= PHneGi[a + 1][ld8bRvG37U])) {
                    tw4ZHXTrBmSN[hoV76OuGkJ] = a;
                    sk[hoV76OuGkJ] = ld8bRvG37U;
                    hoV76OuGkJ = hoV76OuGkJ + 1;
                }
                ld8bRvG37U = ld8bRvG37U + 1;
            };
        }
        if ((PHneGi[a][lJCgNfls - 1] >= PHneGi[a][lJCgNfls - 2]) && (PHneGi[a][lJCgNfls - 1] >= PHneGi[a - 1][lJCgNfls - 1]) && (PHneGi[a][lJCgNfls - 1] >= PHneGi[a + 1][lJCgNfls - 1])) {
            tw4ZHXTrBmSN[hoV76OuGkJ] = a;
            sk[hoV76OuGkJ] = lJCgNfls - 1;
            hoV76OuGkJ = hoV76OuGkJ + 1;
        };
    }
    if ((PHneGi[m - 1][0] >= PHneGi[m - 2][0]) && (PHneGi[m - 1][0] >= PHneGi[m - 1][1])) {
        tw4ZHXTrBmSN[hoV76OuGkJ] = m - 1;
        sk[hoV76OuGkJ] = 0;
        hoV76OuGkJ = hoV76OuGkJ + 1;
    }
    {
        ld8bRvG37U = 1;
        while (ld8bRvG37U < lJCgNfls - 1) {
            if ((PHneGi[m - 1][ld8bRvG37U] >= PHneGi[m - 2][ld8bRvG37U]) && (PHneGi[m - 1][ld8bRvG37U] >= PHneGi[m - 1][ld8bRvG37U - 1]) && (PHneGi[m - 1][ld8bRvG37U] >= PHneGi[m - 1][ld8bRvG37U + 1])) {
                tw4ZHXTrBmSN[hoV76OuGkJ] = m - 1;
                sk[hoV76OuGkJ] = ld8bRvG37U;
                hoV76OuGkJ = hoV76OuGkJ + 1;
            }
            ld8bRvG37U++;
        };
    }
    if ((PHneGi[m - 1][lJCgNfls - 1] >= PHneGi[m - 1][lJCgNfls - 2]) && (PHneGi[m - 1][lJCgNfls - 1] >= PHneGi[m - 2][lJCgNfls - 1])) {
        tw4ZHXTrBmSN[hoV76OuGkJ] = m - 1;
        sk[hoV76OuGkJ] = lJCgNfls - 1;
        hoV76OuGkJ = hoV76OuGkJ + 1;
    }
    jWQXkN = hoV76OuGkJ;
    {
        hoV76OuGkJ = 0;
        while (hoV76OuGkJ < jWQXkN) {
            printf ("%d %d\n", tw4ZHXTrBmSN[hoV76OuGkJ], sk[hoV76OuGkJ]);
            hoV76OuGkJ++;
        };
    }
    return 0;
}

