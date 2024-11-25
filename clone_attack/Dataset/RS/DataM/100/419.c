void  main () {
    int UGV5j7q, gx1DhF2, LOKtbuD [300], VQmraU, j, k;
    char c [300], g3La4qeKFVfW;
    gets (c);
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
    UGV5j7q = strlen (c);
    for (VQmraU = (225 - 225), gx1DhF2 = (848 - 848); UGV5j7q > VQmraU, (g3La4qeKFVfW = c[VQmraU]) != '\0'; VQmraU = VQmraU +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (g3La4qeKFVfW >= 'a' && g3La4qeKFVfW <= 'z') {
            for (j = (983 - 983), LOKtbuD[VQmraU] = (134 - 134); j < UGV5j7q; j = j + 1)
                if (c[j] == g3La4qeKFVfW) {
                    LOKtbuD[VQmraU]++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
        }
        else if (g3La4qeKFVfW >= 'A' && g3La4qeKFVfW <= 'Z') {
            LOKtbuD[VQmraU] = 0;
            j = 0;
            while (j < UGV5j7q) {
                if (c[j] == g3La4qeKFVfW) {
                    LOKtbuD[VQmraU]++;
                }
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
                j = j + 1;
            };
        }
        else {
            gx1DhF2++;
            LOKtbuD[VQmraU] = 0;
        };
    }
    if (gx1DhF2 < UGV5j7q) {
        for (VQmraU = 0; VQmraU < UGV5j7q; VQmraU = VQmraU +1) {
            for (j = VQmraU; j < UGV5j7q; j = j + 1) {
                if (c[VQmraU] > c[j]) {
                    g3La4qeKFVfW = c[VQmraU];
                    k = LOKtbuD[VQmraU];
                    c[VQmraU] = c[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    LOKtbuD[VQmraU] = LOKtbuD[j];
                    c[j] = g3La4qeKFVfW;
                    LOKtbuD[j] = k;
                };
            };
        }
        {
            VQmraU = 0;
            while (VQmraU < UGV5j7q) {
                for (j = VQmraU +(738 - 737); j < UGV5j7q; j = j + 1) {
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
                    if (c[j] == c[VQmraU]) {
                        LOKtbuD[j] = 0;
                    };
                }
                if (LOKtbuD[VQmraU] != 0) {
                    printf ("%c=%d\n", c[VQmraU], LOKtbuD[VQmraU]);
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                VQmraU++;
            };
        };
    }
    else
        printf ("No");
}

