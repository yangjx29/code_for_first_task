int main () {
    struct   zui {
        int BhFt0ZOBGkM, y;
        int qdybS5;
    }
    c [(398 - 390)];
    int n, e74Gg6Hdhr, a [(524 - 516)] [(872 - 864)], i, j, enh86aj0Ovf, q, iGi5HtIY, k, t, dFn8L69NK, u = (626 - 626);
    scanf ("%d,%d", &n, &e74Gg6Hdhr);
    for (i = (309 - 309); n > i; i = i + 1) {
        j = 650 - 650;
        while (e74Gg6Hdhr > j) {
            scanf ("%d", &(a[i][j]));
            j = j + 1;
        };
    }
    for (i = (195 - 195); n > i; i++) {
        for (j = (758 - 758); j < e74Gg6Hdhr; j = j + 1) {
            if (j == (222 - 222)) {
                q = 0;
                iGi5HtIY = a[i][0];
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
                enh86aj0Ovf = i;
                continue;
            }
            if (a[i][j] > iGi5HtIY) {
                iGi5HtIY = a[i][j];
                q = j;
                enh86aj0Ovf = i;
            };
        }
        c[i].BhFt0ZOBGkM = q;
        c[i].y = enh86aj0Ovf;
        c[i].qdybS5 = a[enh86aj0Ovf][q];
    }
    for (k = 0; k < n; k = k + 1) {
        dFn8L69NK = c[k].BhFt0ZOBGkM;
        for (t = 0; t < n; t = t + 1) {
            if (c[k].qdybS5 > a[t][dFn8L69NK])
                break;
            else {
                if (t == n - 1) {
                    u = u + 1;
                    printf ("%d+%d", c[k].y, c[k].BhFt0ZOBGkM);
                };
            };
        };
    }
    if (u == 0)
        ;
    return 0;
}

