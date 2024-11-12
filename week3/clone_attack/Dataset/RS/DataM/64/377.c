int main () {
    int ftzYcPqSdEJ, t = 0;
    int n;
    int a [10];
    int b [10];
    int Zw3JKH [10];
    int i;
    double  d [10] [10], e [45];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d%d", &a[i], &b[i], &Zw3JKH[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                ftzYcPqSdEJ = 858 - 857;
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
                while (ftzYcPqSdEJ < n) {
                    d[i][ftzYcPqSdEJ] = sqrt ((a[i] - a[ftzYcPqSdEJ]) * (a[i] - a[ftzYcPqSdEJ]) + (b[i] - b[ftzYcPqSdEJ]) * (b[i] - b[ftzYcPqSdEJ]) + (Zw3JKH[i] - Zw3JKH[ftzYcPqSdEJ]) * (Zw3JKH[i] - Zw3JKH[ftzYcPqSdEJ]));
                    e[t] = d[i][ftzYcPqSdEJ];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    ftzYcPqSdEJ = ftzYcPqSdEJ + 1;
                    t++;
                };
            }
            i = i + 1;
        };
    }
    {
        t = 0;
        while (t < n * (n - 1) / 2 - 1) {
            {
                i = n - 1;
                while (t < i) {
                    if (e[i] > e[i - 1]) {
                        double  m;
                        m = e[i];
                        e[i] = e[i - 1];
                        e[i - 1] = m;
                    }
                    i--;
                };
            }
            t++;
        };
    }
    {
        t = 0;
        while (t < n * (n - 1) / 2) {
            {
                i = 0;
                while (i < n) {
                    {
                        ftzYcPqSdEJ = i + 1;
                        while (ftzYcPqSdEJ < n) {
                            if (d[i][ftzYcPqSdEJ] == e[t]) {
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[i], b[i], Zw3JKH[i], a[ftzYcPqSdEJ], b[ftzYcPqSdEJ], Zw3JKH[ftzYcPqSdEJ], e[t]);
                                d[i][ftzYcPqSdEJ] = 0;
                                ftzYcPqSdEJ = n;
                                i = n;
                            }
                            ftzYcPqSdEJ++;
                        };
                    }
                    i = i + 1;
                };
            }
            t++;
        };
    }
    return 0;
}

