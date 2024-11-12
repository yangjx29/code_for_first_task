void  main () {
    int OiXfFLgV;
    int Pv5sT2k;
    void  juzhen ();
    scanf ("%d", &Pv5sT2k);
    {
        OiXfFLgV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Pv5sT2k > OiXfFLgV) {
            OiXfFLgV = OiXfFLgV +1;
            juzhen ();
        };
    };
}

void  juzhen () {
    int IDVChL4tyfn [100] [100];
    int m, n, OiXfFLgV = 0, j = 0, f = 0;
    scanf ("%d %d", &m, &n);
    {
        OiXfFLgV = 0;
        while (m > OiXfFLgV) {
            for (j = 0; n > j; j = j + 1) {
                scanf ("%d", &IDVChL4tyfn[OiXfFLgV][j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            OiXfFLgV = OiXfFLgV +1;
        };
    }
    {
        j = 0;
        while (j < n) {
            f = f + IDVChL4tyfn[0][j] + IDVChL4tyfn[m - 1][j];
            j = j + 1;
        };
    }
    {
        OiXfFLgV = 1;
        while (m - 1 > OiXfFLgV) {
            f = f + IDVChL4tyfn[OiXfFLgV][0] + IDVChL4tyfn[OiXfFLgV][n - 1];
            OiXfFLgV++;
        };
    }
    printf ("%d\n", f);
}

