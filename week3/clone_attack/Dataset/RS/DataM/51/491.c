DgUXp5hbnx (int FXPz56qnW, char DEXUCY [], char NUGROlFQCm [], int u1hiJEV) {
    int weGbp7yTWU;
    {
        weGbp7yTWU = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (u1hiJEV > weGbp7yTWU) {
            NUGROlFQCm[weGbp7yTWU] = DEXUCY[FXPz56qnW +weGbp7yTWU];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            weGbp7yTWU = weGbp7yTWU + 1;
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
    NUGROlFQCm[u1hiJEV] = 0;
}

main () {
    int KuPmK0FHEZN;
    int n, BZgdP54uz9 = 1, FKepr76 = 0;
    char qJCjEA [510] [10] = {{0}};
    char DEXUCY [510] = {0};
    char NUGROlFQCm [10] = {0};
    int tShkN75 [510] = {0};
    int FXPz56qnW, weGbp7yTWU;
    gets (DEXUCY);
    KuPmK0FHEZN = strlen (DEXUCY);
    scanf ("%d\n", &n);
    {
        FXPz56qnW = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (FXPz56qnW < KuPmK0FHEZN +1 - n) {
            DgUXp5hbnx (FXPz56qnW, DEXUCY, NUGROlFQCm, n);
            FXPz56qnW = FXPz56qnW +1;
            for (weGbp7yTWU = 0; FKepr76 > weGbp7yTWU; weGbp7yTWU++)
                if (!(0 != strcmp (NUGROlFQCm, qJCjEA[weGbp7yTWU])))
                    tShkN75[weGbp7yTWU]++;
            if (weGbp7yTWU == FKepr76) {
                strcpy (qJCjEA[FKepr76], NUGROlFQCm);
                tShkN75[FKepr76]++;
                FKepr76++;
            };
        };
    }
    {
        FXPz56qnW = 0;
        while (FXPz56qnW < FKepr76) {
            if (tShkN75[FXPz56qnW] > BZgdP54uz9)
                BZgdP54uz9 = tShkN75[FXPz56qnW];
            FXPz56qnW++;
        };
    }
    if (BZgdP54uz9 == 1)
        ;
    else {
        printf ("%d\n", BZgdP54uz9);
        {
            FXPz56qnW = 0;
            while (FXPz56qnW < FKepr76) {
                if (tShkN75[FXPz56qnW] == BZgdP54uz9)
                    printf ("%s\n", qJCjEA[FXPz56qnW]);
                FXPz56qnW++;
            };
        };
    };
}

