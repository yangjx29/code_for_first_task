int main () {
    int D9ilDQyVSb;
    int KA0l7FxMTs8;
    int a;
    int FBQJVkwChnG;
    int Qbv1dwZg;
    int r2OKQxB46YP [100] = {0};
    int y [100] = {0};
    int k;
    int m;
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
    int WdQuolwfO5;
    D9ilDQyVSb = 0;
    scanf ("%d", &KA0l7FxMTs8);
    {
        Qbv1dwZg = 0;
        while (KA0l7FxMTs8 > Qbv1dwZg) {
            scanf ("%d%d", &a, &FBQJVkwChnG);
            if ((90 <= a && 140 >= a) && (90 >= FBQJVkwChnG &&60 <= FBQJVkwChnG)) {
                r2OKQxB46YP[Qbv1dwZg] = 1;
            }
            Qbv1dwZg = Qbv1dwZg +1;
        };
    }
    {
        Qbv1dwZg = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (KA0l7FxMTs8 > Qbv1dwZg) {
            if (r2OKQxB46YP[Qbv1dwZg] == 1) {
                while (r2OKQxB46YP[Qbv1dwZg] == 1) {
                    y[D9ilDQyVSb] = y[D9ilDQyVSb] + 1;
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
                    Qbv1dwZg++;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                D9ilDQyVSb = D9ilDQyVSb +1;
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
            Qbv1dwZg++;
        };
    }
    {
        k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k <= D9ilDQyVSb) {
            {
                m = 0;
                while (m < D9ilDQyVSb -k + 1) {
                    if (y[m] < y[m + 1]) {
                        WdQuolwfO5 = y[m];
                        y[m] = y[m + 1];
                        y[m + 1] = WdQuolwfO5;
                    }
                    m++;
                };
            }
            k++;
        };
    }
    printf ("%d", y[0]);
    return 0;
}

