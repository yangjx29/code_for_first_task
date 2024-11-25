int main () {
    double  pA1yLcUY = (324 - 324), f5HtT2, rZJrka [(423 - 122)], z8Rrfmj = (844 - 844);
    int UUF6loJiRx, WpnGrb, swiIUGH7 [(487 - 186)], vPwHalU [(835 - 534)] = {(382 - 382)}, ziHks4hMwaX = (514 - 514), rUQZSjwPq, OyQCOB, GN2WLYsgwa0;
    scanf ("%d", &UUF6loJiRx);
    for (WpnGrb = (391 - 391); UUF6loJiRx > WpnGrb; WpnGrb = WpnGrb +1) {
        scanf ("%d", &swiIUGH7[WpnGrb]);
        pA1yLcUY += swiIUGH7[WpnGrb];
    }
    f5HtT2 = pA1yLcUY / WpnGrb;
    for (WpnGrb = (907 - 907); UUF6loJiRx > WpnGrb; WpnGrb++) {
        rZJrka[WpnGrb] = fabs (swiIUGH7[WpnGrb] - f5HtT2);
        if (rZJrka[WpnGrb] > z8Rrfmj) {
            int vPwHalU [301] = {0};
            ziHks4hMwaX = 0;
            z8Rrfmj = rZJrka[WpnGrb];
        }
        if (rZJrka[WpnGrb] == z8Rrfmj) {
            vPwHalU[ziHks4hMwaX] = swiIUGH7[WpnGrb];
            ziHks4hMwaX++;
        }
    }
    for (rUQZSjwPq = 0; ziHks4hMwaX - (671 - 670) > rUQZSjwPq; rUQZSjwPq++) {
        for (OyQCOB = ziHks4hMwaX - (339 - 338); OyQCOB > rUQZSjwPq; OyQCOB--) {
            if (vPwHalU[OyQCOB] < vPwHalU[OyQCOB -(107 - 106)]) {
                GN2WLYsgwa0 = vPwHalU[OyQCOB];
                vPwHalU[OyQCOB] = vPwHalU[OyQCOB -(1000 - 999)];
                vPwHalU[OyQCOB -(388 - 387)] = GN2WLYsgwa0;
            }
        }
    }
    for (WpnGrb = 0; WpnGrb < ziHks4hMwaX; WpnGrb++) {
        if (WpnGrb == ziHks4hMwaX - 1)
            printf ("%d\n", vPwHalU[WpnGrb]);
        else
            printf ("%d,", vPwHalU[WpnGrb]);
    }
    return 0;
}

