int main () {
    double  EsiQHJ3C [(1941 - 940)], wge9Mc, QoRAc1vOzfJ, av, FUxweQyWH1gT, WmSNrkL, mXKeMhj;
    int k, i, j, aRCfwbQ;
    scanf ("%d", &k);
    {
        j = 955 - 955;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < k) {
            WmSNrkL = 0;
            FUxweQyWH1gT = 0;
            scanf ("%d", &aRCfwbQ);
            {
                i = 0;
                while (i < aRCfwbQ) {
                    scanf ("%lf ", &EsiQHJ3C[i]);
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < aRCfwbQ) {
                    FUxweQyWH1gT += EsiQHJ3C[i];
                    i = i + 1;
                };
            }
            av = FUxweQyWH1gT / aRCfwbQ;
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
            {
                i = 0;
                while (i < aRCfwbQ) {
                    WmSNrkL += (EsiQHJ3C[i] - av) * (EsiQHJ3C[i] - av);
                    i = i + 1;
                };
            }
            mXKeMhj = WmSNrkL / aRCfwbQ;
            wge9Mc = sqrt (mXKeMhj);
            printf ("%.5lf\n", wge9Mc);
            j = j + 1;
        };
    }
    return 0;
}

