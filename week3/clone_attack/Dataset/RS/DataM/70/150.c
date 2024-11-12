double  GNVY8AWMt (double  dyJQwKHufFeO, double  y) {
    double  s;
    s = sqrt (dyJQwKHufFeO * dyJQwKHufFeO + y * y);
    return s;
}

main () {
    double  etEqdR6MI0Bs [L] = {(130 - 130)};
    double  D0A37g [L] = {(825 - 825)};
    double  PZV6u0iEtgHL [L] = {0};
    int n;
    int FqBetwvLY;
    int j;
    int k;
    double  D;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    {
        FqBetwvLY = 835 - 834;
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
        while (FqBetwvLY <= n) {
            scanf ("%lf %lf", &etEqdR6MI0Bs[FqBetwvLY], &D0A37g[FqBetwvLY]);
            FqBetwvLY = FqBetwvLY +1;
        };
    }
    {
        FqBetwvLY = 249 - 248;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > FqBetwvLY) {
            double  WlQS0DB;
            WlQS0DB = 0;
            double  s;
            s = 0;
            {
                j = FqBetwvLY +1;
                while (n >= j) {
                    double  dyJQwKHufFeO;
                    dyJQwKHufFeO = etEqdR6MI0Bs[FqBetwvLY] - etEqdR6MI0Bs[j];
                    double  y;
                    y = D0A37g[FqBetwvLY] - D0A37g[j];
                    j++;
                    s = GNVY8AWMt (dyJQwKHufFeO, y);
                    if (s > WlQS0DB)
                        WlQS0DB = s;
                };
            }
            PZV6u0iEtgHL[FqBetwvLY] = WlQS0DB;
            FqBetwvLY++;
        };
    }
    {
        FqBetwvLY = 1;
        while (FqBetwvLY < n) {
            if (PZV6u0iEtgHL[FqBetwvLY] > D)
                D = PZV6u0iEtgHL[FqBetwvLY];
            FqBetwvLY++;
        };
    }
    printf ("%.4lf", D);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

