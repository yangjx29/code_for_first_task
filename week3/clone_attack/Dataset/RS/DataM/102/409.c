int main () {
    struct   student {
        char s [10];
        double  wByinG6;
    }
    pVIDZXnukh2 [41], t;
    int Ma9HYTU61, TpEAFaX5fk, j;
    scanf ("%d", &Ma9HYTU61);
    for (TpEAFaX5fk = 0; Ma9HYTU61 > TpEAFaX5fk; TpEAFaX5fk = TpEAFaX5fk +1) {
        scanf ("%s %lf", pVIDZXnukh2[TpEAFaX5fk].s, &pVIDZXnukh2[TpEAFaX5fk].wByinG6);
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
        TpEAFaX5fk = 517 - 516;
        while (TpEAFaX5fk < Ma9HYTU61) {
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < Ma9HYTU61 -TpEAFaX5fk) {
                    if (strcmp (pVIDZXnukh2[j].s, "male") == 0) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (strcmp (pVIDZXnukh2[j].s, pVIDZXnukh2[j + 1].s) == 0) {
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
                            if (pVIDZXnukh2[j].wByinG6 > pVIDZXnukh2[j + 1].wByinG6) {
                                t = pVIDZXnukh2[j];
                                pVIDZXnukh2[j] = pVIDZXnukh2[j + 1];
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        int m = 0;
                                        int n = 0;
                                        m = m * n + n - m + n * 2;
                                        return 0;
                                    }
                                }
                                pVIDZXnukh2[j + 1] = t;
                            };
                        };
                    }
                    else {
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
                        if (strcmp (pVIDZXnukh2[j].s, "female") == 0) {
                            if (strcmp (pVIDZXnukh2[j].s, pVIDZXnukh2[j + 1].s) == 0) {
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                if (pVIDZXnukh2[j].wByinG6 < pVIDZXnukh2[j + 1].wByinG6) {
                                    t = pVIDZXnukh2[j];
                                    pVIDZXnukh2[j] = pVIDZXnukh2[j + 1];
                                    pVIDZXnukh2[j + 1] = t;
                                };
                            }
                            else {
                                t = pVIDZXnukh2[j];
                                pVIDZXnukh2[j] = pVIDZXnukh2[j + 1];
                                pVIDZXnukh2[j + 1] = t;
                            };
                        };
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
            TpEAFaX5fk = TpEAFaX5fk +1;
        };
    }
    printf ("%.2lf", pVIDZXnukh2[0].wByinG6);
    for (TpEAFaX5fk = 1; TpEAFaX5fk < Ma9HYTU61; TpEAFaX5fk++) {
        printf (" %.2lf", pVIDZXnukh2[TpEAFaX5fk].wByinG6);
    }
    return 0;
}

