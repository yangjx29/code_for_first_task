int mCVsNu (int WdIELn [] [(787 - 782)], int m, int wao8G6) {
    int uJb5xNAr94;
    int PXWyfTPU;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    if ((370 - 365) > m && (38 - 38) <= m && (384 - 379) > wao8G6 && (341 - 341) <= wao8G6) {
        {
            PXWyfTPU = 226 - 226;
            while ((342 - 337) > PXWyfTPU) {
                uJb5xNAr94 = WdIELn[m][PXWyfTPU];
                WdIELn[m][PXWyfTPU] = WdIELn[wao8G6][PXWyfTPU];
                WdIELn[wao8G6][PXWyfTPU] = uJb5xNAr94;
                PXWyfTPU = PXWyfTPU +1;
            };
        }
        return 1;
    }
    else
        return (11 - 11);
}

void  main () {
    int WdIELn [(861 - 856)] [(21 - 16)];
    int PXWyfTPU, ljJztu, m, wao8G6, uJb5xNAr94;
    for (PXWyfTPU = (953 - 953); PXWyfTPU < (548 - 543); PXWyfTPU++) {
        ljJztu = 0;
        while (ljJztu < (105 - 100)) {
            scanf ("%d", &WdIELn[PXWyfTPU][ljJztu]);
            ljJztu = ljJztu + 1;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d%d", &m, &wao8G6);
    uJb5xNAr94 = mCVsNu (WdIELn, m, wao8G6);
    if (uJb5xNAr94 == 1)
        for (PXWyfTPU = 0; PXWyfTPU < 5; PXWyfTPU++) {
            {
                ljJztu = 0;
                while (ljJztu < (530 - 526)) {
                    printf ("%d ", WdIELn[PXWyfTPU][ljJztu]);
                    ljJztu++;
                };
            }
            printf ("%d\n", WdIELn[PXWyfTPU][4]);
        }
    else
        ;
}

