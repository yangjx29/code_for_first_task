int main () {
    int v5Trtvb0EY [(1047 - 947)] [100] = {(414 - 414)};
    int S0FZEBCSH [100] [100] = {(98 - 98)};
    int c [100] [100] = {(524 - 524)};
    int PBHAiKW6ag8b;
    int eKT6X0q5sbU;
    int sxsqFmhTk;
    int SBbNgMFCD05O;
    int lv8dC3Mr;
    int xVyU4D;
    int q0ih5twps;
    getchar ();
    getchar ();
    scanf ("%d%d", &PBHAiKW6ag8b, &sxsqFmhTk);
    for (lv8dC3Mr = 0; lv8dC3Mr < PBHAiKW6ag8b; lv8dC3Mr++)
        for (xVyU4D = 0; xVyU4D < sxsqFmhTk; xVyU4D++)
            scanf ("%d", &v5Trtvb0EY[lv8dC3Mr][xVyU4D]);
    scanf ("%d%d", &eKT6X0q5sbU, &SBbNgMFCD05O);
    {
        lv8dC3Mr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lv8dC3Mr < eKT6X0q5sbU) {
            for (xVyU4D = 0; SBbNgMFCD05O > xVyU4D; xVyU4D++)
                scanf ("%d", &S0FZEBCSH[lv8dC3Mr][xVyU4D]);
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
            lv8dC3Mr++;
        };
    }
    if (sxsqFmhTk == eKT6X0q5sbU) {
        for (lv8dC3Mr = 0; lv8dC3Mr < PBHAiKW6ag8b; lv8dC3Mr++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (xVyU4D = 0; xVyU4D < SBbNgMFCD05O; xVyU4D++) {
                {
                    q0ih5twps = 0;
                    while (q0ih5twps < sxsqFmhTk) {
                        c[lv8dC3Mr][xVyU4D] += v5Trtvb0EY[lv8dC3Mr][q0ih5twps] * S0FZEBCSH[q0ih5twps][xVyU4D];
                        q0ih5twps++;
                    };
                }
                if (xVyU4D < 1)
                    printf ("%d", c[lv8dC3Mr][xVyU4D]);
                else
                    printf (" %d", c[lv8dC3Mr][xVyU4D]);
            };
        };
    }
    else
        printf ("?????\n");
    getchar ();
}

