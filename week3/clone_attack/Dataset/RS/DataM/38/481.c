void  main () {
    double  t [100] = {0}, u [100] = {0}, PktzGlQ [100] = {0}, Rxup9e [100] = {0};
    int AHQyTzPe, vBFO5V1CHsoE [100] = {0}, i, TsS2fqyo3;
    double  jRsJpbN42y [100] [1000];
    scanf ("%d", &AHQyTzPe);
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
        while (AHQyTzPe > i) {
            scanf ("%d", &vBFO5V1CHsoE[i]);
            for (TsS2fqyo3 = 0; vBFO5V1CHsoE[i] > TsS2fqyo3; TsS2fqyo3++) {
                scanf ("%lf", &jRsJpbN42y[i][TsS2fqyo3]);
            }
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
            i = i + 1;
        };
    }
    for (i = 0; i < AHQyTzPe; i++) {
        {
            TsS2fqyo3 = 0;
            while (vBFO5V1CHsoE[i] > TsS2fqyo3) {
                t[i] += jRsJpbN42y[i][TsS2fqyo3];
                TsS2fqyo3 = TsS2fqyo3 +1;
            };
        }
        PktzGlQ[i] = t[i] / vBFO5V1CHsoE[i];
        {
            TsS2fqyo3 = 0;
            while (vBFO5V1CHsoE[i] > TsS2fqyo3) {
                u[i] = u[i] + pow ((jRsJpbN42y[i][TsS2fqyo3] - PktzGlQ[i]), 2);
                TsS2fqyo3++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Rxup9e[i] = sqrt (u[i] / vBFO5V1CHsoE[i]);
        printf ("%.5lf\n", Rxup9e[i]);
    };
}

