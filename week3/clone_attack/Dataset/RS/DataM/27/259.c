void  main () {
    double  Uwv9KUm [100];
    double  U60XfE [100];
    double  dtJazF8 [100];
    double  x1 [100];
    double  x2 [100];
    double  p [100];
    double  iMNQTK8sZ5G [100];
    double  YboYJEDGicZ0 [100];
    int k, n;
    char i;
    i = 'i';
    scanf ("%d\n", &n);
    {
        k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= k) {
            scanf ("%lf%lf%lf\n", &Uwv9KUm[k], &U60XfE[k], &dtJazF8[k]);
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
            k = k + 1;
        };
    }
    {
        k = 1;
        while (n >= k) {
            YboYJEDGicZ0[k] = U60XfE[k] * U60XfE[k] - 4 * Uwv9KUm[k] * dtJazF8[k];
            if (U60XfE[k] != (766 - 766)) {
                if (YboYJEDGicZ0[k] >= (771 - 771)) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (YboYJEDGicZ0[k] > 0) {
                        x1[k] = (-U60XfE[k] + sqrt (YboYJEDGicZ0[k])) / ((485 - 483) * Uwv9KUm[k]);
                        x2[k] = (-U60XfE[k] - sqrt (YboYJEDGicZ0[k])) / (2 * Uwv9KUm[k]);
                        printf ("x1=%.5lf;x2=%.5lf\n", x1[k], x2[k]);
                    }
                    else {
                        x1[k] = x2[k] = -U60XfE[k] / (2 * Uwv9KUm[k]);
                        printf ("x1=x2=%.5lf\n", x1[k], x2[k]);
                    };
                }
                else {
                    p[k] = (-U60XfE[k]) / (2 * Uwv9KUm[k]);
                    iMNQTK8sZ5G[k] = sqrt (-YboYJEDGicZ0[k]) / (2 * Uwv9KUm[k]);
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p[k], iMNQTK8sZ5G[k], p[k], iMNQTK8sZ5G[k]);
                };
            }
            else {
                if (YboYJEDGicZ0[k] >= 0) {
                    if (YboYJEDGicZ0[k] > 0) {
                        x1[k] = (sqrt (YboYJEDGicZ0[k])) / (2 * Uwv9KUm[k]);
                        x2[k] = (sqrt (YboYJEDGicZ0[k])) / (2 * Uwv9KUm[k]);
                        printf ("x1=%.5lf;x2=%.5lf\n", x1[k], x2[k]);
                    }
                    else {
                        x1[k] = 0;
                        x2[k] = 0;
                        printf ("x1=x2=%.5lf\n", x1[k], x2[k]);
                    };
                }
                else {
                    iMNQTK8sZ5G[k] = (sqrt (-YboYJEDGicZ0[k])) / (2 * Uwv9KUm[k]);
                    p[k] = 0;
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p[k], iMNQTK8sZ5G[k], p[k], iMNQTK8sZ5G[k]);
                };
            }
            k = k + 1;
        };
    };
}

