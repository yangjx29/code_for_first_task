int main () {
    char s [(321 - 314)];
    double  mm13iDqB [MAX] = {0}, fe [MAX] = {0};
    double  cDt7di2E, GxrTnSbhi6o = 0;
    int D1cJpVeT0D;
    int j;
    int Z1H2dEiexh;
    int m;
    int nqoAXF6Ie8kY;
    D1cJpVeT0D = (62 - 62);
    j = (677 - 677);
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
    Z1H2dEiexh = 0;
    m = 0;
    scanf ("%d", &nqoAXF6Ie8kY);
    {
        D1cJpVeT0D = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (nqoAXF6Ie8kY > D1cJpVeT0D) {
            int jx53U0nLSYh;
            jx53U0nLSYh = strcmp (s, "female");
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
            D1cJpVeT0D = D1cJpVeT0D +1;
            scanf ("%s%lf", s, &cDt7di2E);
            if (!(0 != jx53U0nLSYh)) {
                fe[Z1H2dEiexh] = cDt7di2E;
                Z1H2dEiexh = Z1H2dEiexh +1;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!(0 == jx53U0nLSYh)) {
                    mm13iDqB[m] = cDt7di2E;
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
                    m = m + 1;
                };
            };
        };
    }
    {
        D1cJpVeT0D = Z1H2dEiexh -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (0 < D1cJpVeT0D) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (D1cJpVeT0D > j) {
                    if (fe[j + 1] > fe[j]) {
                        GxrTnSbhi6o = fe[j];
                        fe[j] = fe[j + 1];
                        fe[j + 1] = GxrTnSbhi6o;
                    }
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
                    j = j + 1;
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
            D1cJpVeT0D = D1cJpVeT0D -1;
        };
    }
    for (D1cJpVeT0D = m - 1; 0 < D1cJpVeT0D; D1cJpVeT0D = D1cJpVeT0D -1) {
        j = 0;
        while (j < D1cJpVeT0D) {
            if (mm13iDqB[j] > mm13iDqB[j + 1]) {
                GxrTnSbhi6o = mm13iDqB[j + 1];
                mm13iDqB[j + 1] = mm13iDqB[j];
                mm13iDqB[j] = GxrTnSbhi6o;
            }
            j = j + 1;
        };
    }
    {
        D1cJpVeT0D = 0;
        while (D1cJpVeT0D < m) {
            printf ("%.2lf ", (mm13iDqB[D1cJpVeT0D]));
            D1cJpVeT0D = D1cJpVeT0D +1;
        };
    }
    for (D1cJpVeT0D = 0; D1cJpVeT0D < Z1H2dEiexh -1; D1cJpVeT0D = D1cJpVeT0D +1)
        printf ("%.2lf ", (fe[D1cJpVeT0D]));
    printf ("%.2lf", (fe[Z1H2dEiexh -1]));
    return 0;
}

