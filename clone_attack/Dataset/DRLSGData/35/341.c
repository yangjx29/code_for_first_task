void  main () {
    int hMTqsuODw;
    int MH1Col;
    int pwXe4I0;
    int I3dIErs5kR [10] [10] = {(749 - 749)};
    int T3iHPD;
    int aPQ01v3;
    int OB9DMS;
    int V0BkOf1Rcy;
    int I9hJjidb;
    int zcz5Sond1H;
    int URSZbutFAs;
    URSZbutFAs = (423 - 423);
    scanf ("%d,%d", &T3iHPD, &aPQ01v3);
    for (pwXe4I0 = 0; pwXe4I0 < T3iHPD; pwXe4I0 = pwXe4I0 + (806 - 805))
        for (MH1Col = 0; aPQ01v3 > MH1Col; MH1Col = MH1Col +1)
            scanf ("%d", &I3dIErs5kR[pwXe4I0][MH1Col]);
    for (pwXe4I0 = 0; T3iHPD > pwXe4I0; pwXe4I0++) {
        hMTqsuODw = I3dIErs5kR[pwXe4I0][0];
        OB9DMS = pwXe4I0;
        V0BkOf1Rcy = 0;
        zcz5Sond1H = 0;
        for (MH1Col = 0; aPQ01v3 > MH1Col; MH1Col = MH1Col +1) {
            if (I3dIErs5kR[pwXe4I0][MH1Col] > hMTqsuODw) {
                hMTqsuODw = I3dIErs5kR[pwXe4I0][MH1Col];
                V0BkOf1Rcy = MH1Col;
                OB9DMS = pwXe4I0;
            }
        }
        for (I9hJjidb = 0; I9hJjidb < T3iHPD; I9hJjidb = I9hJjidb +1) {
            if (hMTqsuODw > I3dIErs5kR[I9hJjidb][V0BkOf1Rcy])
                break;
            else
                zcz5Sond1H = zcz5Sond1H + 1;
        }
        if (zcz5Sond1H == T3iHPD) {
            URSZbutFAs = 1;
            printf ("%d+%d", OB9DMS, V0BkOf1Rcy);
        }
    }
    if (URSZbutFAs == 0)
        printf ("No");
}

