int main () {
    char wGzE1ONRJl [1000];
    char yL2vgI34z [(1198 - 198)];
    long  e4eyqA3 [(1409 - 409)];
    char t0hYtoq [(1878 - 878)];
    long  n;
    long  t;
    long  TrSXAU;
    long  b;
    long  BO9LpoCth;
    long  rDO2cPgfkh0;
    n = (463 - 463);
    t = 0;
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
    getchar ();
    getchar ();
    rDO2cPgfkh0 = (938 - 937);
    scanf ("%d %s %d", &TrSXAU, t0hYtoq, &b);
    {
        BO9LpoCth = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == t0hYtoq[BO9LpoCth])) {
            BO9LpoCth++;
            n = n + (210 - 209);
        };
    }
    {
        BO9LpoCth = 0;
        while (n - (18 - 17) >= BO9LpoCth) {
            if (t0hYtoq[BO9LpoCth] >= 'a' && 'z' >= t0hYtoq[BO9LpoCth])
                t0hYtoq[BO9LpoCth] = t0hYtoq[BO9LpoCth] - 'a' + 10;
            if ('0' <= t0hYtoq[BO9LpoCth] && '9' >= t0hYtoq[BO9LpoCth])
                t0hYtoq[BO9LpoCth] = t0hYtoq[BO9LpoCth] - '0';
            if ('A' <= t0hYtoq[BO9LpoCth] && t0hYtoq[BO9LpoCth] <= 'Z')
                t0hYtoq[BO9LpoCth] = t0hYtoq[BO9LpoCth] - 'A' + 10;
            BO9LpoCth++;
        };
    }
    {
        BO9LpoCth = n - 1;
        while (BO9LpoCth >= 0) {
            t = t0hYtoq[BO9LpoCth] * rDO2cPgfkh0 + t;
            BO9LpoCth = BO9LpoCth -1;
            rDO2cPgfkh0 = rDO2cPgfkh0 * TrSXAU;
        };
    }
    n = 0;
    if (t == 0)
        printf ("0");
    e4eyqA3[0] = t;
    for (BO9LpoCth = 0; e4eyqA3[BO9LpoCth] != 0; BO9LpoCth++)
        e4eyqA3[BO9LpoCth +1] = e4eyqA3[BO9LpoCth] / b;
    {
        BO9LpoCth = 0;
        while (e4eyqA3[BO9LpoCth] != 0) {
            yL2vgI34z[BO9LpoCth] = e4eyqA3[BO9LpoCth] % b;
            if (yL2vgI34z[BO9LpoCth] > 9)
                yL2vgI34z[BO9LpoCth] = yL2vgI34z[BO9LpoCth] - 10 + 'A';
            else
                yL2vgI34z[BO9LpoCth] = yL2vgI34z[BO9LpoCth] + '0' - 0;
            BO9LpoCth++;
        };
    }
    yL2vgI34z[BO9LpoCth] = '\0';
    {
        BO9LpoCth = 0;
        while (yL2vgI34z[BO9LpoCth] != '\0') {
            BO9LpoCth++;
            n = n + 1;
        };
    }
    {
        BO9LpoCth = 0;
        while (BO9LpoCth <= n - 1) {
            wGzE1ONRJl[BO9LpoCth] = yL2vgI34z[n - BO9LpoCth -1];
            BO9LpoCth++;
        };
    }
    wGzE1ONRJl[n] = '\0';
    printf ("%s", wGzE1ONRJl);
}

