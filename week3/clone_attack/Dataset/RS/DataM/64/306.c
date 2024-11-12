int main () {
    double  b [(832 - 632)], q, e;
    int a [100] [50];
    int c [(313 - 213)];
    int d [100];
    int WV4XEMA;
    int iWBZXAKJ60ey;
    int n;
    int Eq27mdMHUEfD;
    int f;
    WV4XEMA = (538 - 538);
    scanf ("%d", &n);
    for (iWBZXAKJ60ey = (327 - 327); n > iWBZXAKJ60ey; iWBZXAKJ60ey = iWBZXAKJ60ey + 1) {
        scanf ("%d", &a[iWBZXAKJ60ey][(821 - 821)]);
        scanf ("%d", &a[iWBZXAKJ60ey][(843 - 842)]);
        scanf ("%d", &a[iWBZXAKJ60ey][(114 - 112)]);
    }
    for (iWBZXAKJ60ey = (859 - 859); iWBZXAKJ60ey < n; iWBZXAKJ60ey++) {
        for (Eq27mdMHUEfD = iWBZXAKJ60ey + (681 - 680); n > Eq27mdMHUEfD; Eq27mdMHUEfD = Eq27mdMHUEfD +1) {
            q = (a[iWBZXAKJ60ey][(214 - 214)] - a[Eq27mdMHUEfD][(866 - 866)]) * (a[iWBZXAKJ60ey][(161 - 161)] - a[Eq27mdMHUEfD][(624 - 624)]) + (a[iWBZXAKJ60ey][(996 - 995)] - a[Eq27mdMHUEfD][(348 - 347)]) * (a[iWBZXAKJ60ey][(148 - 147)] - a[Eq27mdMHUEfD][(379 - 378)]) + (a[iWBZXAKJ60ey][(671 - 669)] - a[Eq27mdMHUEfD][(220 - 218)]) * (a[iWBZXAKJ60ey][2] - a[Eq27mdMHUEfD][2]);
            b[WV4XEMA] = sqrt (q);
            c[WV4XEMA] = iWBZXAKJ60ey;
            d[WV4XEMA] = Eq27mdMHUEfD;
            WV4XEMA++;
        };
    }
    for (iWBZXAKJ60ey = 1; iWBZXAKJ60ey <= WV4XEMA; iWBZXAKJ60ey++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (Eq27mdMHUEfD = 0; Eq27mdMHUEfD < WV4XEMA -iWBZXAKJ60ey; Eq27mdMHUEfD = Eq27mdMHUEfD +1) {
            if (b[Eq27mdMHUEfD +1] > b[Eq27mdMHUEfD]) {
                f = c[Eq27mdMHUEfD +1];
                e = b[Eq27mdMHUEfD +1];
                b[Eq27mdMHUEfD +1] = b[Eq27mdMHUEfD];
                b[Eq27mdMHUEfD] = e;
                c[Eq27mdMHUEfD +1] = c[Eq27mdMHUEfD];
                c[Eq27mdMHUEfD] = f;
                f = d[Eq27mdMHUEfD +1];
                d[Eq27mdMHUEfD +1] = d[Eq27mdMHUEfD];
                d[Eq27mdMHUEfD] = f;
            };
        };
    }
    for (iWBZXAKJ60ey = 0; iWBZXAKJ60ey < WV4XEMA; iWBZXAKJ60ey++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[c[iWBZXAKJ60ey]][0], a[c[iWBZXAKJ60ey]][1], a[c[iWBZXAKJ60ey]][2], a[d[iWBZXAKJ60ey]][0], a[d[iWBZXAKJ60ey]][1], a[d[iWBZXAKJ60ey]][2], b[iWBZXAKJ60ey]);
    }
    return 0;
}

