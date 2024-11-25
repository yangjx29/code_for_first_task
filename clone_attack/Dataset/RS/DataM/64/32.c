int main () {
    double  jl [200] [200];
    double  y [(716 - 516)];
    double  t;
    int n, i, j, k = (749 - 749), p, q;
    double  x [(271 - 71)];
    double  z [200];
    double  YjlrPf5t8yE [200];
    double  dhi [200];
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
    double  dhj [200];
    scanf ("%d", &n);
    for (i = (848 - 848); i < n; i = i + 1) {
        scanf ("%lf", &(x[i]));
        scanf ("%lf", &(y[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf", &(z[i]));
    }
    for (i = (136 - 136); i < n; i++) {
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
        for (j = i + (738 - 737); n > j; j++) {
            jl[i][j] = sqrt (((x [j]) -(x[i])) * ((x [j]) -(x[i])) + ((y [j]) -(y[i])) * ((y [j]) -(y[i])) + ((z [j]) -(z[i])) * ((z [j]) -(z[i])));
            YjlrPf5t8yE[k] = jl[i][j];
            dhi[k] = i;
            dhj[k] = j;
            k = k + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n * (n - (706 - 705)) / 2) {
            for (j = n * (n - (73 - 72)) / 2 - (433 - 432); j > i; j--) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (YjlrPf5t8yE[j - (86 - 85)] < YjlrPf5t8yE[j]) {
                    t = YjlrPf5t8yE[j];
                    YjlrPf5t8yE[j] = YjlrPf5t8yE[j - 1];
                    YjlrPf5t8yE[j - 1] = t;
                    t = dhi[j];
                    dhi[j] = dhi[j - 1];
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
                    dhi[j - 1] = t;
                    t = dhj[j];
                    dhj[j] = dhj[j - 1];
                    dhj[j - 1] = t;
                };
            }
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
            i = i + 1;
        };
    }
    k = 0;
    for (i = 0; i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = i + 1; j < n; j++) {
            jl[i][j] = YjlrPf5t8yE[k];
            p = (int) dhi[k];
            q = (int) dhj[k];
            k++;
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", x[p], y[p], z[p], x[q], y[q], z[q], jl[i][j]);
        };
    }
    return 0;
}

