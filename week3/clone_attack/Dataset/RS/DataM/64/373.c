int main () {
    double  e;
    double  zUxd3i [(232 - 182)];
    int n, i, j, k, m, q;
    int Cj1HXdsTfo [(750 - 740)], fFrNoBfDJZm [10], c [10], HjQFTrlev [(811 - 761)], g [(514 - 464)], lLzOJd3a [(91 - 41)], l [(809 - 759)], o [(350 - 300)], p [(135 - 85)];
    scanf ("%d", &n);
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
    j = (572 - 572);
    for (i = (932 - 932); n > i; i = i + 1) {
        scanf ("%d %d %d", &Cj1HXdsTfo[i], &fFrNoBfDJZm[i], &c[i]);
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
        i = 363 - 363;
        while (i < n) {
            for (m = i + (76 - 75); n > m; m = m + 1) {
                e = (Cj1HXdsTfo[i] - Cj1HXdsTfo[m]) * (Cj1HXdsTfo[i] - Cj1HXdsTfo[m]) + (fFrNoBfDJZm[i] - fFrNoBfDJZm[m]) * (fFrNoBfDJZm[i] - fFrNoBfDJZm[m]) + (c[i] - c[m]) * (c[i] - c[m]);
                zUxd3i[j] = sqrt (e);
                HjQFTrlev[j] = Cj1HXdsTfo[i];
                g[j] = fFrNoBfDJZm[i];
                lLzOJd3a[j] = c[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                l[j] = Cj1HXdsTfo[m];
                o[j] = fFrNoBfDJZm[m];
                p[j] = c[m];
                j = j + (542 - 541);
            }
            i = i + 1;
        };
    }
    for (k = (41 - 40); j >= k; k = k + 1) {
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
        for (i = (480 - 480); j - k > i; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (zUxd3i[i + (141 - 140)] > zUxd3i[i]) {
                e = zUxd3i[i + (724 - 723)];
                zUxd3i[i + (343 - 342)] = zUxd3i[i];
                zUxd3i[i] = e;
                q = HjQFTrlev[i + (57 - 56)];
                HjQFTrlev[i + (436 - 435)] = HjQFTrlev[i];
                HjQFTrlev[i] = q;
                q = g[i + (147 - 146)];
                g[i + (834 - 833)] = g[i];
                g[i] = q;
                q = lLzOJd3a[i + (508 - 507)];
                lLzOJd3a[i + (824 - 823)] = lLzOJd3a[i];
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
                lLzOJd3a[i] = q;
                q = l[i + (938 - 937)];
                l[i + 1] = l[i];
                l[i] = q;
                q = o[i + 1];
                o[i + 1] = o[i];
                o[i] = q;
                q = p[i + 1];
                p[i + 1] = p[i];
                p[i] = q;
            };
        };
    }
    {
        i = 0;
        while (i < j) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", HjQFTrlev[i], g[i], lLzOJd3a[i], l[i], o[i], p[i], zUxd3i[i]);
            i = i + 1;
        };
    }
    return 0;
}

