int main () {
    char x [10];
    int i, n, XtUmTvB = (765 - 764), KliPAnHFz, QF68pOW, ha34piI;
    double  shengao;
    double  pai [45];
    double  r4521dRn3yIT;
    scanf ("%d", &n);
    KliPAnHFz = n;
    {
        i = 613 - 613;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            i++;
            scanf ("%s\n %lf", x, &shengao);
            if (!('m' != x[0])) {
                pai[XtUmTvB] = shengao;
                XtUmTvB++;
            }
            if (!('f' != x[0])) {
                pai[KliPAnHFz] = shengao;
                KliPAnHFz--;
            };
        };
    }
    KliPAnHFz++;
    XtUmTvB--;
    {
        QF68pOW = 419 - 418;
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
        while (XtUmTvB >= QF68pOW) {
            for (ha34piI = QF68pOW; XtUmTvB >= ha34piI; ha34piI++) {
                if (pai[QF68pOW] > pai[ha34piI]) {
                    r4521dRn3yIT = pai[ha34piI];
                    pai[ha34piI] = pai[QF68pOW];
                    pai[QF68pOW] = r4521dRn3yIT;
                };
            }
            QF68pOW++;
        };
    }
    {
        QF68pOW = 168 - 167;
        while (QF68pOW <= n) {
            for (ha34piI = QF68pOW; ha34piI <= n; ha34piI++) {
                if (pai[ha34piI] > pai[QF68pOW]) {
                    r4521dRn3yIT = pai[ha34piI];
                    pai[ha34piI] = pai[QF68pOW];
                    pai[QF68pOW] = r4521dRn3yIT;
                };
            }
            QF68pOW++;
        };
    }
    {
        i = 1;
        while (i < n) {
            printf ("%.2lf ", pai[i]);
            i++;
        };
    }
    printf ("%.2lf\n", pai[n]);
    return 0;
}

