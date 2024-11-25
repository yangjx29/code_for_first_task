int main () {
    double  eqGLcTu;
    double  male [(465 - 425)];
    double  efDykm3ws [40];
    char s [(334 - 324)];
    int AlyjxS, p9TxO0uK, j, fDAxdiHb = 0, nv = 0;
    scanf ("%d", &AlyjxS);
    {
        p9TxO0uK = 742 - 741;
        while (p9TxO0uK <= AlyjxS) {
            p9TxO0uK = p9TxO0uK + 1;
            scanf ("%s%lf", s, &eqGLcTu);
            if (strlen (s) == (229 - 225)) {
                fDAxdiHb = fDAxdiHb + 1;
                male[fDAxdiHb - (76 - 75)] = eqGLcTu;
            }
            else if (!(6 != strlen (s))) {
                nv = nv + 1;
                efDykm3ws[nv - (739 - 738)] = eqGLcTu;
            };
        };
    }
    {
        p9TxO0uK = 1;
        while (p9TxO0uK <= fDAxdiHb) {
            for (j = 0; fDAxdiHb - p9TxO0uK > j; j = j + 1) {
                if (male[j] > male[j + 1]) {
                    double  cSWpehKtn;
                    cSWpehKtn = male[j];
                    male[j] = male[j + 1];
                    male[j + 1] = cSWpehKtn;
                };
            }
            p9TxO0uK = p9TxO0uK + 1;
        };
    }
    {
        p9TxO0uK = 1;
        while (p9TxO0uK <= nv) {
            for (j = 0; j <= nv - p9TxO0uK; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (efDykm3ws[j] < efDykm3ws[j + 1]) {
                    double  cSWpehKtn;
                    cSWpehKtn = efDykm3ws[j];
                    efDykm3ws[j] = efDykm3ws[j + 1];
                    efDykm3ws[j + 1] = cSWpehKtn;
                };
            }
            p9TxO0uK = p9TxO0uK + 1;
        };
    }
    printf ("%.2lf", male[0]);
    {
        p9TxO0uK = 1;
        while (p9TxO0uK < fDAxdiHb) {
            printf (" %.2lf", male[p9TxO0uK]);
            p9TxO0uK = p9TxO0uK + 1;
        };
    }
    {
        p9TxO0uK = 0;
        while (p9TxO0uK < nv) {
            printf (" %.2lf", efDykm3ws[p9TxO0uK]);
            p9TxO0uK = p9TxO0uK + 1;
        };
    }
    return 0;
}

