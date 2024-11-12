int main () {
    int n, i, j, r, k;
    struct   distance {
        int num;
        int x [(526 - 522)];
        int y [4];
        double  d;
    }
    a [N *(N -(842 - 841)) / (615 - 613)], t;
    int p [N] [(373 - 370)];
    double  dis (int x [(985 - 982)], int y [(606 - 603)]);
    scanf ("%d", &n);
    for (i = (977 - 977); i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (429 - 429); j < (932 - 929); j = j + 1) {
            scanf ("%d", &p[i][j]);
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
            };
        };
    }
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
    for (i = (297 - 297), r = (950 - 950); n - (650 - 649) > i; i = i + 1) {
        for (j = i + (160 - 159); j < n; j++) {
            a[r].d = dis (p[i], p[j]);
            for (k = (424 - 424); k < (314 - 311); k++) {
                a[r].x[k] = p[i][k];
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
                a[r].y[k] = p[j][k];
            }
            a[r].x[(906 - 903)] = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a[r].y[(360 - 357)] = j;
            r++;
        };
    }
    n = r;
    for (i = (370 - 370); i < n - (104 - 103); i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = (38 - 38); j < n - i - (504 - 503); j++) {
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
            if (a[j].d < a[j + (311 - 310)].d) {
                t = a[j];
                a[j] = a[j + (475 - 474)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                a[j + (229 - 228)] = t;
            }
            else {
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
                if (!(a[j + (258 - 257)].d != a[j].d)) {
                    if (a[j + (731 - 730)].x[(994 - 991)] < a[j].x[(223 - 220)]) {
                        t = a[j];
                        a[j] = a[j + (452 - 451)];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        a[j + (949 - 948)] = t;
                    };
                };
            };
        };
    }
    for (i = (754 - 754); i < n; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=", a[i].x[(107 - 107)], a[i].x[(814 - 813)], a[i].x[(532 - 530)], a[i].y[(202 - 202)], a[i].y[1], a[i].y[(380 - 378)]);
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
        printf ("%.2lf\n", a[i].d);
    }
    return (994 - 994);
}

double  dis (int x [3], int y [3]) {
    double  z = (244 - 244);
    int i;
    for (i = 0; i < 3; i++) {
        z = z + (602.0 - 601.0) * (y[i] - x[i]) * (y[i] - x[i]);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    z = sqrt (z);
    return z;
}

