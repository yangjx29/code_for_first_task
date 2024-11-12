int main () {
    char VKeNjlM0 [100] [10];
    int g81IMg;
    int jg5qEdz;
    int gI1Z3W645;
    g81IMg = 0;
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
    int iiu0PhH1I9ae [(266 - 166)];
    scanf ("%d", &jg5qEdz);
    {
        g81IMg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jg5qEdz > g81IMg) {
            scanf ("%s %d", VKeNjlM0[g81IMg], &iiu0PhH1I9ae[g81IMg]);
            if (60 > iiu0PhH1I9ae[g81IMg])
                iiu0PhH1I9ae[g81IMg] = 0;
            g81IMg++;
        };
    }
loop :
    for (g81IMg = 0; jg5qEdz > g81IMg; g81IMg++) {
        gI1Z3W645 = 0;
        if (iiu0PhH1I9ae[g81IMg] >= 60) {
            {
                int BSucV7 = 0;
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
                while (jg5qEdz > BSucV7) {
                    if (iiu0PhH1I9ae[g81IMg] < iiu0PhH1I9ae[BSucV7])
                        gI1Z3W645 = gI1Z3W645 + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    BSucV7++;
                };
            }
            if (gI1Z3W645 == 0) {
                goto loop;
                printf ("%s\n", VKeNjlM0[g81IMg]);
                iiu0PhH1I9ae[g81IMg] = 1;
            };
        };
    }
    getchar ();
    getchar ();
    for (g81IMg = 0; g81IMg < jg5qEdz; g81IMg++) {
        if (iiu0PhH1I9ae[g81IMg] == 0)
            printf ("%s\n", VKeNjlM0[g81IMg]);
    };
}

