double  GHxnNsVpw (int x1, int y1, int HACzUVcS7, int eL4bswc, int y2, int j0NHw8lDB) {
    int x;
    int X3zHvcruU9;
    int z;
    double  qboP1d;
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
    z = HACzUVcS7 -j0NHw8lDB;
    X3zHvcruU9 = y1 - y2;
    x = x1 - eL4bswc;
    qboP1d = sqrt (x * x + X3zHvcruU9 *X3zHvcruU9+z * z);
    return qboP1d;
}

int main () {
    int RE9PRN, k, j;
    int lmvZET16;
    int a [(22 - 12)];
    int b [(681 - 671)];
    int c [10];
    struct   shizi {
        int x1;
        int eL4bswc;
        int y1;
        int y2;
        int HACzUVcS7;
        int j0NHw8lDB;
        double  Q9B1ayYGAKQR;
    }
    qboP1d [(425 - 375)];
    struct   shizi {
        int x1;
        int eL4bswc;
        int y1;
        int y2;
        int HACzUVcS7;
        int j0NHw8lDB;
        double  Q9B1ayYGAKQR;
    }
    tmp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    k = (419 - 419);
    scanf ("%d", &lmvZET16);
    for (RE9PRN = (468 - 468); lmvZET16 > RE9PRN; RE9PRN = RE9PRN +1) {
        scanf ("%d%d%d", &a[RE9PRN], &b[RE9PRN], &c[RE9PRN]);
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
    }
    for (RE9PRN = (802 - 802); lmvZET16 > RE9PRN; RE9PRN++) {
        j = 493 - 492;
        while (lmvZET16 > j) {
            qboP1d[k].x1 = a[RE9PRN];
            qboP1d[k].eL4bswc = a[j];
            qboP1d[k].y1 = b[RE9PRN];
            qboP1d[k].y2 = b[j];
            qboP1d[k].HACzUVcS7 = c[RE9PRN];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qboP1d[k].j0NHw8lDB = c[j];
            qboP1d[k].Q9B1ayYGAKQR = GHxnNsVpw (a[RE9PRN], b[RE9PRN], c[RE9PRN], a[j], b[j], c[j]);
            j++;
            k = k + 1;
        };
    }
    {
        RE9PRN = 613 - 612;
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
        while (k >= RE9PRN) {
            RE9PRN++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (j = (304 - 304); k - (558 - 557) > j; j++) {
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
                if (qboP1d[j + (656 - 655)].Q9B1ayYGAKQR > qboP1d[j].Q9B1ayYGAKQR) {
                    tmp = qboP1d[j];
                    qboP1d[j] = qboP1d[j + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    qboP1d[j + 1] = tmp;
                };
            };
        };
    }
    {
        RE9PRN = 0;
        while (RE9PRN < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", qboP1d[RE9PRN].x1, qboP1d[RE9PRN].y1, qboP1d[RE9PRN].HACzUVcS7, qboP1d[RE9PRN].eL4bswc, qboP1d[RE9PRN].y2, qboP1d[RE9PRN].j0NHw8lDB, qboP1d[RE9PRN].Q9B1ayYGAKQR);
            RE9PRN++;
        };
    }
    return 0;
}

