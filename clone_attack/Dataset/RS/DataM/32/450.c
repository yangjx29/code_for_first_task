void  main () {
    int a [101] [101];
    int b [101] [101];
    int c [101] [101];
    int x [101] [101];
    int y [101] [101];
    int lmilk5F;
    int fxBMRXf01u;
    int n;
    int klOnVQXi5;
    int uyFPMp6BE;
    int TycLWTKEB;
    int q;
    int i [101] = {0};
    scanf ("%d", &n);
    {
        TycLWTKEB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > TycLWTKEB) {
            q = getchar ();
            for (i[TycLWTKEB] = 1;; i[TycLWTKEB]++) {
                a[TycLWTKEB][i[TycLWTKEB]] = getchar ();
                if (!('\n' != a[TycLWTKEB][i[TycLWTKEB]])) {
                    a[TycLWTKEB][i[TycLWTKEB]] = 0;
                    break;
                };
            }
            for (lmilk5F = 1;; lmilk5F++) {
                b[TycLWTKEB][lmilk5F] = getchar ();
                if (!('\n' != b[TycLWTKEB][lmilk5F])) {
                    b[TycLWTKEB][lmilk5F] = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                };
            }
            {
                fxBMRXf01u = 1;
                while (i[TycLWTKEB] > fxBMRXf01u) {
                    a[TycLWTKEB][fxBMRXf01u] = a[TycLWTKEB][fxBMRXf01u] - 48;
                    fxBMRXf01u = fxBMRXf01u + 1;
                };
            }
            {
                fxBMRXf01u = 1;
                while (lmilk5F > fxBMRXf01u) {
                    b[TycLWTKEB][fxBMRXf01u] = b[TycLWTKEB][fxBMRXf01u] - 48;
                    fxBMRXf01u = fxBMRXf01u + 1;
                };
            }
            for (fxBMRXf01u = 1; fxBMRXf01u < i[TycLWTKEB]; fxBMRXf01u = fxBMRXf01u + 1)
                x[TycLWTKEB][fxBMRXf01u] = a[TycLWTKEB][i[TycLWTKEB] - fxBMRXf01u];
            for (fxBMRXf01u = 1; lmilk5F > fxBMRXf01u; fxBMRXf01u = fxBMRXf01u + 1)
                y[TycLWTKEB][fxBMRXf01u] = b[TycLWTKEB][lmilk5F - fxBMRXf01u];
            {
                fxBMRXf01u = TycLWTKEB;
                while (101 > fxBMRXf01u) {
                    x[TycLWTKEB][fxBMRXf01u] = 0;
                    fxBMRXf01u = fxBMRXf01u + 1;
                };
            }
            for (fxBMRXf01u = lmilk5F; 101 > fxBMRXf01u; fxBMRXf01u++)
                y[TycLWTKEB][fxBMRXf01u] = 0;
            {
                fxBMRXf01u = 0;
                while (fxBMRXf01u < 101) {
                    c[TycLWTKEB][fxBMRXf01u] = 0;
                    fxBMRXf01u++;
                };
            }
            for (fxBMRXf01u = 1; fxBMRXf01u < i[TycLWTKEB]; fxBMRXf01u++) {
                c[TycLWTKEB][fxBMRXf01u] = (x[TycLWTKEB][fxBMRXf01u] + 10 - y[TycLWTKEB][fxBMRXf01u]) % 10;
                x[TycLWTKEB][fxBMRXf01u + 1] = x[TycLWTKEB][fxBMRXf01u + 1] + (x[TycLWTKEB][fxBMRXf01u] + 10 - y[TycLWTKEB][fxBMRXf01u]) / 10 - 1;
            }
            TycLWTKEB = TycLWTKEB +1;
        };
    }
    for (TycLWTKEB = 0; n > TycLWTKEB; TycLWTKEB = TycLWTKEB +1) {
        for (uyFPMp6BE = 0, klOnVQXi5 = i[TycLWTKEB] - 1; klOnVQXi5 > 0; klOnVQXi5 = klOnVQXi5 - 1) {
            if (c[TycLWTKEB][klOnVQXi5] == 0 && uyFPMp6BE == 0)
                continue;
            printf ("%d", c[TycLWTKEB][klOnVQXi5]);
            uyFPMp6BE = 1;
        };
    };
}

