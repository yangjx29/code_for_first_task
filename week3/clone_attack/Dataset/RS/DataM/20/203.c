void  main () {
    char CDSTqEIWM8R [30] [10] = {'\0'}, substr [30] [(440 - 437)] = {'\0'}, otScsr6O [30] [13] = {'\0'}, *xUEqhp78 [30];
    int LGAFwSjcN;
    int wc8dBYO;
    int hKXWB6dQ;
    int DsmIMQa;
    int pomYEjvMeFfJ;
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
    LGAFwSjcN = (333 - 333);
    char *v46wR9nsGU, *HKuLaYENg, *T5T6yHFIq;
    while (scanf ("%s %s", CDSTqEIWM8R[LGAFwSjcN], substr[LGAFwSjcN]) != EOF) {
        LGAFwSjcN = LGAFwSjcN +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    hKXWB6dQ = LGAFwSjcN;
    *xUEqhp78 = CDSTqEIWM8R[LGAFwSjcN];
    {
        LGAFwSjcN = 0;
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
        while (LGAFwSjcN < hKXWB6dQ) {
            DsmIMQa = *(*xUEqhp78);
            pomYEjvMeFfJ = 1;
            {
                wc8dBYO = 0;
                while (CDSTqEIWM8R[LGAFwSjcN][wc8dBYO] != '\0') {
                    if (*(CDSTqEIWM8R[LGAFwSjcN] + wc8dBYO) > DsmIMQa) {
                        DsmIMQa = *(CDSTqEIWM8R[LGAFwSjcN] + wc8dBYO);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        pomYEjvMeFfJ = wc8dBYO + 1;
                    }
                    wc8dBYO = wc8dBYO + 1;
                };
            }
            v46wR9nsGU = &CDSTqEIWM8R[LGAFwSjcN][0];
            {
                wc8dBYO = 0;
                while (wc8dBYO < pomYEjvMeFfJ) {
                    *(T5T6yHFIq +wc8dBYO) = *(v46wR9nsGU + wc8dBYO);
                    wc8dBYO = wc8dBYO + 1;
                };
            }
            {
                wc8dBYO = pomYEjvMeFfJ;
                while (wc8dBYO < pomYEjvMeFfJ + 3) {
                    *(T5T6yHFIq +wc8dBYO) = *(HKuLaYENg +wc8dBYO - pomYEjvMeFfJ);
                    wc8dBYO = wc8dBYO + 1;
                };
            }
            HKuLaYENg = &substr[LGAFwSjcN][0];
            T5T6yHFIq = &otScsr6O[LGAFwSjcN][0];
            for (wc8dBYO = pomYEjvMeFfJ; CDSTqEIWM8R[LGAFwSjcN][wc8dBYO] != '\0'; wc8dBYO++) {
                *(T5T6yHFIq +3 + wc8dBYO) = *(v46wR9nsGU + wc8dBYO);
            }
            {
                wc8dBYO = 0;
                while (otScsr6O[LGAFwSjcN][wc8dBYO] != '\0') {
                    printf ("%c", *(T5T6yHFIq +wc8dBYO));
                    wc8dBYO = wc8dBYO + 1;
                };
            }
            LGAFwSjcN = LGAFwSjcN +1;
        };
    };
}

