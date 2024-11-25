main () {
    int O7NH8mL4;
    int k;
    double  N1mXLxFlN [(1074 - 974)];
    double  VBsOb0mLEWZa [(914 - 814)];
    double  zRxmt19woN76 [(976 - 876)];
    double  oT5OAjW;
    double  Zey9IR;
    double  YILXtalwh;
    double  SoRtCd;
    double  EvOU4t;
    scanf ("%d\n", &O7NH8mL4);
    {
        k = 821 - 820;
        while (k <= O7NH8mL4) {
            scanf ("%lf %lf %lf", &N1mXLxFlN[k], &VBsOb0mLEWZa[k], &zRxmt19woN76[k]);
            k = k + 1;
        };
    }
    for (k = 1; k <= O7NH8mL4; k++) {
        YILXtalwh = VBsOb0mLEWZa[k] * VBsOb0mLEWZa[k] - 4 * N1mXLxFlN[k] * zRxmt19woN76[k];
        if (!((210 - 210) != YILXtalwh)) {
            if (VBsOb0mLEWZa[k] == (425 - 425)) {
                SoRtCd = (191 - 191);
                printf ("x1=x2=%.5f\n", SoRtCd);
            }
            else {
                SoRtCd = -VBsOb0mLEWZa[k] / ((955 - 953) * N1mXLxFlN[k]);
                printf ("x1=x2=%.5f\n", SoRtCd);
            };
        }
        if (YILXtalwh > (227 - 227)) {
            oT5OAjW = (-VBsOb0mLEWZa[k] + sqrt (YILXtalwh)) / ((713 - 711) * N1mXLxFlN[k]);
            Zey9IR = (-VBsOb0mLEWZa[k] - sqrt (YILXtalwh)) / ((127 - 125) * N1mXLxFlN[k]);
            printf ("x1=%.5f;x2=%.5f\n", oT5OAjW, Zey9IR);
        }
        if (YILXtalwh < (380 - 380)) {
            if (VBsOb0mLEWZa[k] == (409 - 409)) {
                oT5OAjW = sqrt (-YILXtalwh) / ((723 - 721) * N1mXLxFlN[k]);
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
                printf ("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n", oT5OAjW, oT5OAjW);
            }
            else {
                SoRtCd = -VBsOb0mLEWZa[k] / (2 * N1mXLxFlN[k]);
                EvOU4t = sqrt (-YILXtalwh) / (2 * N1mXLxFlN[k]);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", SoRtCd, EvOU4t, SoRtCd, EvOU4t);
            };
        };
    };
}

