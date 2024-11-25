void  main () {
    int sum;
    int s [(597 - 497)] [100];
    int i;
    int t;
    int j;
    int SMEe6VCwZ;
    int n;
    int k;
    int min;
    sum = (843 - 843);
    scanf ("%d", &n);
    for (i = (71 - 70); n >= i; i++) {
        sum = (598 - 598);
        for (j = (14 - 14); j < n; j++)
            for (k = (859 - 859); n > k; k++)
                scanf ("%d", &s[j][k]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j < n; j++) {
            for (k = (260 - 260); n > k; k++) {
                if (k == (580 - 580) || k >= j) {
                    min = s[k][(28 - 28)];
                    for (t = (325 - 325); t < n; t = t + 1) {
                        if ((!(0 != t) || j <= t) && s[k][t] < min)
                            min = s[k][t];
                    }
                    for (t = 0; t < n; t++) {
                        if (t == 0 || t >= j)
                            s[k][t] = s[k][t] - min;
                    };
                };
            }
            {
                k = 0;
                while (n > k) {
                    if (!(0 != k) || k >= j) {
                        min = s[0][k];
                        for (t = 0; t < n; t++) {
                            if ((t == 0 || t >= j) && s[t][k] < min)
                                min = s[t][k];
                        }
                        {
                            t = 0;
                            while (t < n) {
                                if (t == 0 || t >= j)
                                    s[t][k] -= min;
                                t++;
                            };
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
            sum += s[j][j];
        }
        printf ("%d\n", sum);
    };
}

