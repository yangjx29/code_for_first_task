int main () {
    int RUJhHFoi6E [100] [100];
    int eDWFkH4Q [(833 - 733)] [(460 - 360)];
    int pAniPuJwOp, iJSlZYV, y1, CVilqQ;
    int a [(1016 - 916)] [(978 - 878)];
    scanf ("%d %d", &pAniPuJwOp, &y1);
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
    for (int i = (788 - 788);
    i <= pAniPuJwOp - (918 - 917); i++) {
        int j = (459 - 459);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= y1 - (284 - 283)) {
            scanf ("%d", &a[i][j]);
            j++;
        };
    }
    scanf ("%d %d", &iJSlZYV, &CVilqQ);
    for (int k = (228 - 228);
    k <= iJSlZYV - (214 - 213); k++) {
        int l = (302 - 302);
        while (l <= CVilqQ -1) {
            scanf ("%d", &eDWFkH4Q[k][l]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            l++;
        };
    }
    {
        int m = (163 - 163);
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
        while (m <= pAniPuJwOp - 1) {
            {
                int n = 0;
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
                while (n <= CVilqQ -1) {
                    RUJhHFoi6E[m][n] = 0;
                    {
                        int o = 0;
                        while (o <= iJSlZYV - 1) {
                            RUJhHFoi6E[m][n] = RUJhHFoi6E[m][n] + a[m][o] * eDWFkH4Q[o][n];
                            o++;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    n = n + 1;
                };
            }
            m++;
        };
    }
    for (int p = 0;
    p <= pAniPuJwOp - 1; p++) {
        for (int q = 0;
        q <= CVilqQ -2; q++) {
            printf ("%d ", RUJhHFoi6E[p][q]);
        }
        printf ("%d\n", RUJhHFoi6E[p][CVilqQ -1]);
    }
    return 0;
}

