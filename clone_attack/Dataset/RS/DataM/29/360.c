int main () {
    double  J3ZIWi7 [1000] = {(707 - 707)};
    int EUwfKmIh2, m, N69qMoUeIAha, M3h6AYXc, sz1 [1000], sz2 [1000];
    sz1[0] = (653 - 651);
    sz1[1] = 3;
    sz2[0] = 1;
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
    sz2[1] = 2;
    for (M3h6AYXc = 0; M3h6AYXc < 100; M3h6AYXc = M3h6AYXc +1) {
        sz1[M3h6AYXc +2] = sz1[M3h6AYXc] + sz1[M3h6AYXc +1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sz2[M3h6AYXc +2] = sz2[M3h6AYXc] + sz2[M3h6AYXc +1];
    }
    scanf ("%d", &EUwfKmIh2);
    {
        M3h6AYXc = 0;
        while (M3h6AYXc < EUwfKmIh2) {
            scanf ("%d", &m);
            {
                N69qMoUeIAha = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (N69qMoUeIAha < m) {
                    J3ZIWi7[M3h6AYXc] = J3ZIWi7[M3h6AYXc] + (double ) sz1[N69qMoUeIAha] / sz2[N69qMoUeIAha];
                    N69qMoUeIAha = N69qMoUeIAha +1;
                };
            }
            M3h6AYXc = M3h6AYXc +1;
        };
    }
    for (M3h6AYXc = 0; M3h6AYXc < EUwfKmIh2; M3h6AYXc++) {
        printf ("%.3lf\n", J3ZIWi7[M3h6AYXc]);
    };
}

