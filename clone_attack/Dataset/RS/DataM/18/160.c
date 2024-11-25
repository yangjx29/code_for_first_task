main () {
    int p;
    int KX9ZE43;
    int min;
    int kGFt3s [101] [101];
    int MYtDrAGeqH;
    MYtDrAGeqH = (765 - 765);
    int yIYfzsCuiSVG;
    int GMXB1NSK;
    int k;
    int n;
    int QHQtwf6bJ;
    scanf ("%d", &n);
    {
        QHQtwf6bJ = 364 - 363;
        while (QHQtwf6bJ <= n) {
            KX9ZE43 = n;
            for (GMXB1NSK = (77 - 77); GMXB1NSK < n; GMXB1NSK = GMXB1NSK +1) {
                k = 0;
                while (k < n) {
                    scanf ("%d", &kGFt3s[GMXB1NSK][k]);
                    k = k + 1;
                };
            }
            MYtDrAGeqH = (858 - 858);
            for (p = (1001 - 1000); p < n; p = p + 1) {
                {
                    yIYfzsCuiSVG = 0;
                    while (KX9ZE43 > yIYfzsCuiSVG) {
                        for (GMXB1NSK = (860 - 859); GMXB1NSK < KX9ZE43; GMXB1NSK = GMXB1NSK +1) {
                            if (kGFt3s[yIYfzsCuiSVG][GMXB1NSK] == 0)
                                break;
                        }
                        min = kGFt3s[yIYfzsCuiSVG][0];
                        for (GMXB1NSK = 1; GMXB1NSK < KX9ZE43; GMXB1NSK = GMXB1NSK +1) {
                            if (min > kGFt3s[yIYfzsCuiSVG][GMXB1NSK])
                                min = kGFt3s[yIYfzsCuiSVG][GMXB1NSK];
                        }
                        for (GMXB1NSK = 0; GMXB1NSK < KX9ZE43; GMXB1NSK = GMXB1NSK +1) {
                            kGFt3s[yIYfzsCuiSVG][GMXB1NSK] = kGFt3s[yIYfzsCuiSVG][GMXB1NSK] - min;
                        }
                        yIYfzsCuiSVG = yIYfzsCuiSVG + 1;
                    };
                }
                for (yIYfzsCuiSVG = 0; yIYfzsCuiSVG < KX9ZE43; yIYfzsCuiSVG = yIYfzsCuiSVG + 1) {
                    for (GMXB1NSK = 1; GMXB1NSK < KX9ZE43; GMXB1NSK = GMXB1NSK +1) {
                        if (kGFt3s[GMXB1NSK][yIYfzsCuiSVG] == 0)
                            break;
                    }
                    min = kGFt3s[0][yIYfzsCuiSVG];
                    for (GMXB1NSK = 1; GMXB1NSK < KX9ZE43; GMXB1NSK = GMXB1NSK +1) {
                        if (min > kGFt3s[GMXB1NSK][yIYfzsCuiSVG])
                            min = kGFt3s[GMXB1NSK][yIYfzsCuiSVG];
                    }
                    {
                        GMXB1NSK = 0;
                        while (GMXB1NSK < KX9ZE43) {
                            kGFt3s[GMXB1NSK][yIYfzsCuiSVG] = kGFt3s[GMXB1NSK][yIYfzsCuiSVG] - min;
                            GMXB1NSK = GMXB1NSK +1;
                        };
                    };
                }
                if (KX9ZE43 == 2)
                    break;
                KX9ZE43 = KX9ZE43 -1;
                MYtDrAGeqH = MYtDrAGeqH +kGFt3s[1][1];
                for (yIYfzsCuiSVG = 1; yIYfzsCuiSVG < KX9ZE43 -1; yIYfzsCuiSVG = yIYfzsCuiSVG + 1) {
                    kGFt3s[0][yIYfzsCuiSVG] = kGFt3s[0][yIYfzsCuiSVG + 1];
                    kGFt3s[yIYfzsCuiSVG][0] = kGFt3s[yIYfzsCuiSVG + 1][0];
                    for (GMXB1NSK = 1; GMXB1NSK < KX9ZE43 -1; GMXB1NSK++) {
                        kGFt3s[yIYfzsCuiSVG][GMXB1NSK] = kGFt3s[yIYfzsCuiSVG + 1][GMXB1NSK +1];
                    };
                };
            }
            printf ("%d\n", MYtDrAGeqH);
            QHQtwf6bJ = QHQtwf6bJ +1;
        };
    };
}

