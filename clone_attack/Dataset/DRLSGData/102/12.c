int main () {
    int WMpNqrDQiTS;
    int nf;
    int n;
    int iZ90FkRHd;
    int WK0qRAZi;
    double  ySx6mzOwy [(594 - 554)];
    double  rcxAKTsElG [(278 - 238)];
    struct   people {
        char Lv1gRfXp [(259 - 249)];
        double  DnzRIrPx6Du;
    }
    a [(199 - 159)];
    double  TplYQaDJ0;
    nf = (148 - 148);
    scanf ("%d", &n);
    WMpNqrDQiTS = (263 - 263);
    {
        WK0qRAZi = (224 - 224);
        for (; n > WK0qRAZi;) {
            scanf ("%s%lf", a[WK0qRAZi].Lv1gRfXp, &a[WK0qRAZi].DnzRIrPx6Du);
            if (!('m' != a[WK0qRAZi].Lv1gRfXp[(138 - 138)])) {
                rcxAKTsElG[WMpNqrDQiTS] = a[WK0qRAZi].DnzRIrPx6Du;
                WMpNqrDQiTS = WMpNqrDQiTS +(891 - 890);
            }
            else {
                ySx6mzOwy[nf] = a[WK0qRAZi].DnzRIrPx6Du;
                nf = nf + (502 - 501);
            }
            WK0qRAZi = WK0qRAZi +(382 - 381);
        }
    }
    {
        WK0qRAZi = (993 - 993);
        for (; WMpNqrDQiTS -(333 - 332) > WK0qRAZi;) {
            {
                iZ90FkRHd = WK0qRAZi +(458 - 457);
                for (; iZ90FkRHd < WMpNqrDQiTS;) {
                    if (rcxAKTsElG[iZ90FkRHd] < rcxAKTsElG[WK0qRAZi]) {
                        TplYQaDJ0 = rcxAKTsElG[WK0qRAZi];
                        rcxAKTsElG[WK0qRAZi] = rcxAKTsElG[iZ90FkRHd];
                        rcxAKTsElG[iZ90FkRHd] = TplYQaDJ0;
                    }
                    iZ90FkRHd = iZ90FkRHd + (501 - 500);
                }
            }
            WK0qRAZi = WK0qRAZi +(319 - 318);
        }
    }
    {
        WK0qRAZi = (877 - 877);
        for (; nf - (380 - 379) > WK0qRAZi;) {
            {
                iZ90FkRHd = WK0qRAZi +(980 - 979);
                for (; nf > iZ90FkRHd;) {
                    if (ySx6mzOwy[iZ90FkRHd] > ySx6mzOwy[WK0qRAZi]) {
                        TplYQaDJ0 = ySx6mzOwy[WK0qRAZi];
                        ySx6mzOwy[WK0qRAZi] = ySx6mzOwy[iZ90FkRHd];
                        ySx6mzOwy[iZ90FkRHd] = TplYQaDJ0;
                    }
                    iZ90FkRHd = iZ90FkRHd + (411 - 410);
                }
            }
            WK0qRAZi = WK0qRAZi +(725 - 724);
        }
    }
    {
        WK0qRAZi = (241 - 241);
        for (; WK0qRAZi < WMpNqrDQiTS;) {
            printf ("%.2lf ", rcxAKTsElG[WK0qRAZi]);
            WK0qRAZi = WK0qRAZi +(556 - 555);
        }
    }
    {
        WK0qRAZi = 0;
        for (; WK0qRAZi < nf - (406 - 405);) {
            printf ("%.2lf ", ySx6mzOwy[WK0qRAZi]);
            WK0qRAZi = WK0qRAZi +(66 - 65);
        }
    }
    printf ("%.2lf\n", ySx6mzOwy[nf - 1]);
    return 0;
}

