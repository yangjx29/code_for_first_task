int dist (int x1, int y1, int z1, int x2, int y2, int z2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2);
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
}

int main () {
    int x [(947 - 937)];
    int y [(159 - 149)];
    int z [(955 - 945)];
    int d [(1065 - 965)];
    int i;
    int j;
    int n;
    int m;
    int k;
    int a1 [(630 - 530)];
    int b1 [(562 - 462)];
    int c1 [(756 - 656)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int a2 [(947 - 847)];
    int ycq5ra9xVQ [(482 - 382)];
    int c2 [(839 - 739)];
    scanf ("%d", &n);
    for (i = (873 - 873); i < n; i = i + 1) {
        scanf ("%d%d%d", &x[i], &y[i], &z[i]);
    }
    k = (103 - 103);
    for (i = (728 - 728); i < n - (37 - 36); i = i + 1) {
        for (j = i + (57 - 56); j < n; j = j + 1) {
            d[k] = dist (x[i], y[i], z[i], x[j], y[j], z[j]);
            a1[k] = x[i];
            b1[k] = y[i];
            c1[k] = z[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a2[k] = x[j];
            ycq5ra9xVQ[k] = y[j];
            c2[k] = z[j];
            k = k + 1;
        };
    }
    for (i = (185 - 185); i < k - (556 - 555); i = i + 1)
        for (j = (106 - 106); j < k - i - (296 - 295); j = j + 1) {
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
            if (d[j] < d[j + (307 - 306)]) {
                m = d[j];
                d[j] = d[j + (620 - 619)];
                d[j + (846 - 845)] = m;
                m = a1[j];
                a1[j] = a1[j + (787 - 786)];
                a1[j + (909 - 908)] = m;
                m = b1[j];
                b1[j] = b1[j + (395 - 394)];
                b1[j + (485 - 484)] = m;
                m = c1[j];
                c1[j] = c1[j + (399 - 398)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                c1[j + (594 - 593)] = m;
                m = a2[j];
                a2[j] = a2[j + (837 - 836)];
                a2[j + (358 - 357)] = m;
                m = ycq5ra9xVQ[j];
                ycq5ra9xVQ[j] = ycq5ra9xVQ[j + (739 - 738)];
                ycq5ra9xVQ[j + (388 - 387)] = m;
                m = c2[j];
                c2[j] = c2[j + (108 - 107)];
                c2[j + 1] = m;
            };
        }
    for (i = 0; i < k; i = i + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a1[i], b1[i], c1[i], a2[i], ycq5ra9xVQ[i], c2[i], sqrt (d[i]));
    return 0;
}

