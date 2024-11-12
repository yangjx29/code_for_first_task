void  main () {
    int UhZ5Vbm;
    int iCqsPovIA [100] [100], woCB78hGHkQn, eo8qfEYL, SLKxnSl, VtnH0bDFMB;
    scanf ("%d%d", &woCB78hGHkQn, &eo8qfEYL);
    {
        SLKxnSl = 191 - 191;
        while (woCB78hGHkQn > SLKxnSl) {
            {
                VtnH0bDFMB = 64 - 64;
                while (VtnH0bDFMB < eo8qfEYL) {
                    scanf ("%d", &iCqsPovIA[SLKxnSl][VtnH0bDFMB]);
                    VtnH0bDFMB++;
                };
            }
            SLKxnSl = SLKxnSl +1;
        };
    }
    {
        UhZ5Vbm = 294 - 294;
        while (UhZ5Vbm <= woCB78hGHkQn / (818 - 816) - (616 - 615) && UhZ5Vbm <= eo8qfEYL / (571 - 569) - (62 - 61)) {
            {
                VtnH0bDFMB = 183 - 183;
                while (VtnH0bDFMB < eo8qfEYL - UhZ5Vbm) {
                    printf ("%d\n", iCqsPovIA[UhZ5Vbm][VtnH0bDFMB]);
                    VtnH0bDFMB++;
                };
            }
            {
                SLKxnSl = 255 - 254;
                while (SLKxnSl < woCB78hGHkQn - UhZ5Vbm) {
                    printf ("%d\n", iCqsPovIA[SLKxnSl][eo8qfEYL - 1 - UhZ5Vbm]);
                    SLKxnSl = SLKxnSl +1;
                };
            }
            {
                VtnH0bDFMB = 32 - 30;
                while (UhZ5Vbm <= VtnH0bDFMB) {
                    printf ("%d\n", iCqsPovIA[woCB78hGHkQn - 1 - UhZ5Vbm][VtnH0bDFMB]);
                    VtnH0bDFMB = VtnH0bDFMB -1;
                };
            }
            {
                SLKxnSl = woCB78hGHkQn - 2 - UhZ5Vbm;
                while (UhZ5Vbm +1 <= SLKxnSl) {
                    printf ("%d\n", iCqsPovIA[SLKxnSl][UhZ5Vbm]);
                    SLKxnSl = SLKxnSl -1;
                };
            }
            UhZ5Vbm = UhZ5Vbm +1;
        };
    }
    if (woCB78hGHkQn > eo8qfEYL && !(0 == eo8qfEYL % 2)) {
        SLKxnSl = UhZ5Vbm;
        while (SLKxnSl < woCB78hGHkQn - UhZ5Vbm) {
            printf ("%d\n", iCqsPovIA[SLKxnSl][eo8qfEYL / 2]);
            SLKxnSl++;
        };
    }
    if (woCB78hGHkQn < eo8qfEYL && woCB78hGHkQn % 2 != 0) {
        for (VtnH0bDFMB = UhZ5Vbm; VtnH0bDFMB < eo8qfEYL - UhZ5Vbm; VtnH0bDFMB++) {
            printf ("%d\n", iCqsPovIA[woCB78hGHkQn / 2][VtnH0bDFMB]);
        };
    }
    if (woCB78hGHkQn == eo8qfEYL && woCB78hGHkQn % 2 != 0) {
        printf ("%d", iCqsPovIA[woCB78hGHkQn / 2][eo8qfEYL / 2]);
    };
}

