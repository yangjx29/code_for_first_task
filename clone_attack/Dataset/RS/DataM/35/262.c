void  main () {
    int GEnLpqzSmafo, j, Xclnux6G3, kPCTyeA, d2t4YKko, TyABehzv5 [8] [8], JnQH40oJ = (675 - 675), QghQIx7 [8] = {0}, qfHY5Ep4 = 0;
    scanf ("%d,%d", &kPCTyeA, &d2t4YKko);
    {
        GEnLpqzSmafo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kPCTyeA > GEnLpqzSmafo) {
            {
                j = 0;
                while (d2t4YKko > j) {
                    scanf ("%d", &TyABehzv5[GEnLpqzSmafo][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            GEnLpqzSmafo = GEnLpqzSmafo +1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        GEnLpqzSmafo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (kPCTyeA > GEnLpqzSmafo) {
            for (j = 1; d2t4YKko > j; j = j + 1) {
                if (TyABehzv5[GEnLpqzSmafo][j - 1] < TyABehzv5[GEnLpqzSmafo][j])
                    JnQH40oJ = j;
                else
                    JnQH40oJ = 0;
            }
            {
                Xclnux6G3 = 1;
                while (Xclnux6G3 < kPCTyeA) {
                    if (TyABehzv5[Xclnux6G3][JnQH40oJ] < TyABehzv5[Xclnux6G3 -1][JnQH40oJ])
                        QghQIx7[GEnLpqzSmafo] = Xclnux6G3;
                    Xclnux6G3 = Xclnux6G3 +1;
                };
            }
            if (QghQIx7[GEnLpqzSmafo] == GEnLpqzSmafo) {
                qfHY5Ep4 = qfHY5Ep4 + 1;
                printf ("%d+%d\n", JnQH40oJ, GEnLpqzSmafo);
            }
            GEnLpqzSmafo = GEnLpqzSmafo +1;
        };
    }
    if (qfHY5Ep4 == 0)
        printf ("No\n");
}

