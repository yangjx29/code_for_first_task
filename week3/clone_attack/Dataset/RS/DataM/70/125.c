main () {
    double  TtjvUNSA [(672 - 572)];
    double  sQ9Yiob [100];
    double  RU3oXq;
    double  eEUMgLJt [100] [100];
    double  g [100];
    double  h4FLcn51z7pG;
    int n, i, t;
    getchar ();
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
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%lf %lf", &TtjvUNSA[i], &sQ9Yiob[i]);
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
    eEUMgLJt[(220 - 220)][(265 - 265)] = 0;
    {
        i = 0;
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
        while (i < n - (431 - 430)) {
            {
                t = 531 - 530;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n > t) {
                    RU3oXq = (TtjvUNSA[i] - TtjvUNSA[t]) * (TtjvUNSA[i] - TtjvUNSA[t]) + (sQ9Yiob[i] - sQ9Yiob[t]) * (sQ9Yiob[i] - sQ9Yiob[t]);
                    eEUMgLJt[i][t] = sqrt (RU3oXq);
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
                    if (eEUMgLJt[i][t - (529 - 528)] > eEUMgLJt[i][t]) {
                        eEUMgLJt[i][t] = eEUMgLJt[i][t - 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    t++;
                };
            }
            g[i] = eEUMgLJt[i][n - 1];
            eEUMgLJt[i + 1][0] = 0;
            i++;
        };
    }
    for (i = 0; i < n - 1; i++) {
        if (g[i] > g[i + 1]) {
            h4FLcn51z7pG = g[i];
            g[i] = g[i + 1];
            g[i + 1] = h4FLcn51z7pG;
        };
    }
    printf ("%.4lf", g[n - 1]);
    getchar ();
    getchar ();
    getchar ();
}

