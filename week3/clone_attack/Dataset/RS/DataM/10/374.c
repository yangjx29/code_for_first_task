int P4EsqiP (int *xmlw9Vr3U, int p9KlIbNO);

void  main () {
    int xZS3y0gjFr;
    int p9KlIbNO;
    int xmlw9Vr3U [MAX];
    int xYVqHAk;
    int LGRhSmIJ7wn;
    scanf ("%d", &xZS3y0gjFr);
    {
        p9KlIbNO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p9KlIbNO < xZS3y0gjFr) {
            scanf ("%d", xmlw9Vr3U + p9KlIbNO);
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
            p9KlIbNO = p9KlIbNO + 1;
        };
    }
    for (p9KlIbNO = xZS3y0gjFr - 1; 0 <= p9KlIbNO; p9KlIbNO = p9KlIbNO - 1) {
        xYVqHAk = P4EsqiP (xmlw9Vr3U, p9KlIbNO);
        if (!(xZS3y0gjFr - 1 != p9KlIbNO))
            LGRhSmIJ7wn = xYVqHAk;
        else if (xYVqHAk > LGRhSmIJ7wn)
            LGRhSmIJ7wn = xYVqHAk;
    }
    printf ("%d\n", LGRhSmIJ7wn);
}

int P4EsqiP (int *xmlw9Vr3U, int p9KlIbNO) {
    int ItmINv, flag = 0, xYVqHAk, LGRhSmIJ7wn;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (!(0 != p9KlIbNO))
        return 1;
    else {
        for (ItmINv = p9KlIbNO - 1; ItmINv >= 0; ItmINv = ItmINv -1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (*(xmlw9Vr3U + ItmINv) >= *(xmlw9Vr3U + p9KlIbNO)) {
                xYVqHAk = P4EsqiP (xmlw9Vr3U, ItmINv) + 1;
                if (flag == 0) {
                    LGRhSmIJ7wn = xYVqHAk;
                    flag = 1;
                }
                else {
                    if (xYVqHAk > LGRhSmIJ7wn)
                        LGRhSmIJ7wn = xYVqHAk;
                };
            };
        }
        if (flag == 0)
            return 1;
        else
            return LGRhSmIJ7wn;
    };
}

