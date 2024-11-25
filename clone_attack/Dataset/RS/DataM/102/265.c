int main () {
    int EX8y4m, woivR1PE, IYf9ZehNmC = (273 - 273), jX8M1t = (522 - 522), QUckmlF0MHL3, jRoYKg7WyB;
    char bho2Rsl1VI [10] = "male";
    char XMZ7btj9kiN8 [10] = "female";
    struct   pPgKDN {
        char qpEkFer [10];
        double  hei;
    }
    pPgKDN [40];
    double  mCOeuitc [40];
    double  gRuBtv3jSrZC [40];
    double  smpbGxHJyD2;
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
    scanf ("%d\n", &EX8y4m);
    {
        woivR1PE = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (EX8y4m > woivR1PE) {
            scanf ("%s%lf", pPgKDN[woivR1PE].qpEkFer, &pPgKDN[woivR1PE].hei);
            if (!(0 != strcmp (pPgKDN[woivR1PE].qpEkFer, bho2Rsl1VI))) {
                mCOeuitc[IYf9ZehNmC] = pPgKDN[woivR1PE].hei;
                IYf9ZehNmC = IYf9ZehNmC +(432 - 431);
            }
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
            if (!(0 != strcmp (pPgKDN[woivR1PE].qpEkFer, XMZ7btj9kiN8))) {
                gRuBtv3jSrZC[jX8M1t] = pPgKDN[woivR1PE].hei;
                jX8M1t = jX8M1t + (148 - 147);
            }
            woivR1PE++;
        };
    }
    {
        QUckmlF0MHL3 = 773 - 772;
        while (IYf9ZehNmC +1 > QUckmlF0MHL3) {
            {
                jRoYKg7WyB = 0;
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
                while (IYf9ZehNmC +1 - QUckmlF0MHL3 > jRoYKg7WyB) {
                    if (mCOeuitc[jRoYKg7WyB + 1] < mCOeuitc[jRoYKg7WyB]) {
                        smpbGxHJyD2 = mCOeuitc[jRoYKg7WyB + 1];
                        mCOeuitc[jRoYKg7WyB + 1] = mCOeuitc[jRoYKg7WyB];
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
                        mCOeuitc[jRoYKg7WyB] = smpbGxHJyD2;
                    }
                    jRoYKg7WyB = jRoYKg7WyB + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            QUckmlF0MHL3++;
        };
    }
    {
        QUckmlF0MHL3 = 1;
        while (jX8M1t + 1 > QUckmlF0MHL3) {
            {
                jRoYKg7WyB = 0;
                while (jRoYKg7WyB < jX8M1t + 1 - QUckmlF0MHL3) {
                    if (gRuBtv3jSrZC[jRoYKg7WyB] < gRuBtv3jSrZC[jRoYKg7WyB + 1]) {
                        smpbGxHJyD2 = gRuBtv3jSrZC[jRoYKg7WyB + 1];
                        gRuBtv3jSrZC[jRoYKg7WyB + 1] = gRuBtv3jSrZC[jRoYKg7WyB];
                        gRuBtv3jSrZC[jRoYKg7WyB] = smpbGxHJyD2;
                    }
                    jRoYKg7WyB++;
                };
            }
            QUckmlF0MHL3++;
        };
    }
    {
        jRoYKg7WyB = 1;
        while (jRoYKg7WyB < IYf9ZehNmC +1) {
            printf ("%.2lf ", mCOeuitc[jRoYKg7WyB]);
            jRoYKg7WyB++;
        };
    }
    {
        jRoYKg7WyB = 0;
        while (jRoYKg7WyB < jX8M1t - 1) {
            printf ("%.2lf ", gRuBtv3jSrZC[jRoYKg7WyB]);
            jRoYKg7WyB++;
        };
    }
    printf ("%.2lf", gRuBtv3jSrZC[jX8M1t - 1]);
    return 0;
}

