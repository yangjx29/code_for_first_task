int main () {
    int fhTCk1L = (191 - 191);
    int m, g1yiLCl;
    int a [m] [g1yiLCl];
    int nLHjg3ahcFTv, j;
    int nDBeAsik [m], P0yuN93 [g1yiLCl];
    scanf ("%d,%d", &m, &g1yiLCl);
    for (nLHjg3ahcFTv = (203 - 203); m > nLHjg3ahcFTv; nLHjg3ahcFTv = nLHjg3ahcFTv + 1) {
        for (j = (826 - 826); g1yiLCl > j; j = j + 1) {
            scanf ("%d", &a[nLHjg3ahcFTv][j]);
        };
    }
    {
        nLHjg3ahcFTv = 426 - 426;
        while (nLHjg3ahcFTv < m) {
            nDBeAsik[nLHjg3ahcFTv] = a[nLHjg3ahcFTv][0];
            {
                j = 928 - 927;
                while (g1yiLCl > j) {
                    if (nDBeAsik[nLHjg3ahcFTv] < a[nLHjg3ahcFTv][j]) {
                        nDBeAsik[nLHjg3ahcFTv] = a[nLHjg3ahcFTv][j];
                    }
                    j = j + 1;
                };
            }
            nLHjg3ahcFTv++;
        };
    }
    for (j = 0; g1yiLCl > j; j++) {
        P0yuN93[j] = a[0][j];
        {
            nLHjg3ahcFTv = 574 - 573;
            while (nLHjg3ahcFTv < m) {
                if (a[nLHjg3ahcFTv][j] < P0yuN93[j]) {
                    P0yuN93[j] = a[nLHjg3ahcFTv][j];
                }
                nLHjg3ahcFTv++;
            };
        };
    }
    for (nLHjg3ahcFTv = 0; nLHjg3ahcFTv < m; nLHjg3ahcFTv = nLHjg3ahcFTv + 1) {
        j = 0;
        while (j < g1yiLCl) {
            if (!(nDBeAsik[nLHjg3ahcFTv] != a[nLHjg3ahcFTv][j]) && a[nLHjg3ahcFTv][j] == P0yuN93[j]) {
                fhTCk1L += 1;
                printf ("%d+%d", nLHjg3ahcFTv, j);
            }
            j = j + 1;
        };
    }
    if (fhTCk1L == 0) {
        printf ("No");
    }
    return 0;
}

