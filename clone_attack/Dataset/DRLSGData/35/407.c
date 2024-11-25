int main () {
    int bZm4fOo;
    int X2o3Cpld4W;
    int XUfsvJ7YncrW;
    int g5d9Gfot;
    int eRkxrIK;
    int mQHOdz [(79 - 71)] [(589 - 581)];
    int SplBKPa7v;
    int NQaUcZno;
    int ntp8YgWZQ9r [(251 - 243)];
    int UvJwT1Yb [(155 - 147)];
    X2o3Cpld4W = (90 - 89);
    XUfsvJ7YncrW = (908 - 908);
    scanf ("%d,%d", &g5d9Gfot, &eRkxrIK);
    for (SplBKPa7v = (971 - 971); SplBKPa7v < g5d9Gfot; SplBKPa7v = SplBKPa7v +(454 - 453)) {
        for (NQaUcZno = (860 - 860); NQaUcZno < eRkxrIK; NQaUcZno = NQaUcZno +1) {
            scanf ("%d", &mQHOdz[SplBKPa7v][NQaUcZno]);
        }
    }
    for (SplBKPa7v = (881 - 881); SplBKPa7v < g5d9Gfot; SplBKPa7v = SplBKPa7v +1) {
        for (NQaUcZno = (239 - 239); NQaUcZno < eRkxrIK; NQaUcZno = NQaUcZno +1) {
            if (NQaUcZno == (75 - 75)) {
                ntp8YgWZQ9r[X2o3Cpld4W] = NQaUcZno;
                UvJwT1Yb[X2o3Cpld4W] = SplBKPa7v;
            }
            if (mQHOdz[SplBKPa7v][NQaUcZno -(820 - 819)] < mQHOdz[SplBKPa7v][NQaUcZno]) {
                ntp8YgWZQ9r[X2o3Cpld4W] = NQaUcZno;
                UvJwT1Yb[X2o3Cpld4W] = SplBKPa7v;
            }
        }
        X2o3Cpld4W = X2o3Cpld4W +(603 - 602);
    }
    for (X2o3Cpld4W = (715 - 714); X2o3Cpld4W <= g5d9Gfot; X2o3Cpld4W = X2o3Cpld4W +(611 - 610)) {
        bZm4fOo = mQHOdz[UvJwT1Yb[X2o3Cpld4W]][ntp8YgWZQ9r[X2o3Cpld4W]];
        for (SplBKPa7v = (722 - 722); SplBKPa7v < g5d9Gfot; SplBKPa7v++) {
            if (mQHOdz[SplBKPa7v][ntp8YgWZQ9r[X2o3Cpld4W]] < mQHOdz[UvJwT1Yb[X2o3Cpld4W]][ntp8YgWZQ9r[X2o3Cpld4W]]) {
                bZm4fOo = mQHOdz[SplBKPa7v][ntp8YgWZQ9r[X2o3Cpld4W]];
            }
        }
        if (bZm4fOo == mQHOdz[UvJwT1Yb[X2o3Cpld4W]][ntp8YgWZQ9r[X2o3Cpld4W]]) {
            printf ("%d+%d", UvJwT1Yb[X2o3Cpld4W], ntp8YgWZQ9r[X2o3Cpld4W]);
            XUfsvJ7YncrW = XUfsvJ7YncrW +(788 - 787);
        }
    }
    if (XUfsvJ7YncrW == (529 - 529)) {
        printf ("No");
    }
    return (944 - 944);
}

