void  main () {
    double  JiLQulPznI [10] [2];
    double  K7bEV6Z0Ml;
    double  HbR7OiT8;
    int n;
    int i;
    int nFSOVK;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%lf %lf", &JiLQulPznI[i][0], &JiLQulPznI[i][(628 - 627)]);
            i = i + 1;
        };
    }
    K7bEV6Z0Ml = (JiLQulPznI[0][0] - JiLQulPznI[1][0]) * (JiLQulPznI[0][0] - JiLQulPznI[1][0]) + (JiLQulPznI[0][1] - JiLQulPznI[1][1]) * (JiLQulPznI[0][1] - JiLQulPznI[1][1]);
    {
        i = 0;
        while (i < n - 1) {
            for (nFSOVK = i + 1; nFSOVK < n; nFSOVK++) {
                HbR7OiT8 = (JiLQulPznI[i][0] - JiLQulPznI[nFSOVK][0]) * (JiLQulPznI[i][0] - JiLQulPznI[nFSOVK][0]) + (JiLQulPznI[i][1] - JiLQulPznI[nFSOVK][1]) * (JiLQulPznI[i][1] - JiLQulPznI[nFSOVK][1]);
                if (K7bEV6Z0Ml < HbR7OiT8)
                    K7bEV6Z0Ml = HbR7OiT8;
            }
            i++;
        };
    }
    printf ("%.4f\n", sqrt (K7bEV6Z0Ml));
}

