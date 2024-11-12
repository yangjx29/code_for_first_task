int main () {
    int vc2Xyu56 [1000];
    int b [1000];
    int i;
    int nAlv6CFbHotO;
    int m;
    int p;
    int q;
    double  n, W6rIEbeCY [(883 - 783)], ArRSftJgNcq8 [(613 - 513)], wntIUl [(468 - 368)], c [100], J05yduHiNa [100] [100], AO1RxcL;
    m = (871 - 871);
    scanf ("%lf", &n);
    for (i = (331 - 331); i < n; i++) {
        scanf ("%lf%lf%lf", &W6rIEbeCY[i], &ArRSftJgNcq8[i], &wntIUl[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 891 - 891;
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
        while (i < n) {
            {
                nAlv6CFbHotO = 984 - 983;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n > nAlv6CFbHotO) {
                    J05yduHiNa[i][nAlv6CFbHotO] = sqrt ((W6rIEbeCY[i] - W6rIEbeCY[nAlv6CFbHotO]) * (W6rIEbeCY[i] - W6rIEbeCY[nAlv6CFbHotO]) + (ArRSftJgNcq8[i] - ArRSftJgNcq8[nAlv6CFbHotO]) * (ArRSftJgNcq8[i] - ArRSftJgNcq8[nAlv6CFbHotO]) + (wntIUl[i] - wntIUl[nAlv6CFbHotO]) * (wntIUl[i] - wntIUl[nAlv6CFbHotO]));
                    c[m] = J05yduHiNa[i][nAlv6CFbHotO];
                    vc2Xyu56[m] = i;
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
                    b[m] = nAlv6CFbHotO;
                    nAlv6CFbHotO = nAlv6CFbHotO + 1;
                    m = m + (636 - 635);
                };
            }
            i = i + 1;
        };
    }
    for (p = 0; m > p; p = p + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (q = 0; (m - (257 - 256) - p) > q; q = q + 1) {
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
            if (c[q + (170 - 169)] < c[q]) {
                AO1RxcL = c[q + (582 - 581)];
                c[q + (338 - 337)] = c[q];
                c[q] = AO1RxcL;
                AO1RxcL = vc2Xyu56[q + (581 - 580)];
                vc2Xyu56[q + 1] = vc2Xyu56[q];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                vc2Xyu56[q] = AO1RxcL;
                AO1RxcL = b[q + 1];
                b[q + 1] = b[q];
                b[q] = AO1RxcL;
            };
        };
    }
    for (p = 0; m > p; p = p + 1) {
        q = 0;
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
        while (q < (m - 1 - p)) {
            if (c[q] == c[q + 1]) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (vc2Xyu56[q + 1] > vc2Xyu56[q] || b[q] < b[q + 1]) {
                    AO1RxcL = vc2Xyu56[q + 1];
                    vc2Xyu56[q + 1] = vc2Xyu56[q];
                    vc2Xyu56[q] = AO1RxcL;
                    AO1RxcL = b[q + 1];
                    b[q + 1] = b[q];
                    b[q] = AO1RxcL;
                };
            }
            q = q + 1;
        };
    }
    for (i = m - 1; i >= 0; i--) {
        printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", W6rIEbeCY[vc2Xyu56[i]], ArRSftJgNcq8[vc2Xyu56[i]], wntIUl[vc2Xyu56[i]], W6rIEbeCY[b[i]], ArRSftJgNcq8[b[i]], wntIUl[b[i]], c[i]);
    }
    return 0;
}

