int main () {
    static char c [(868 - 766)], d [(255 - 153)];
    int gCdaNh, uftv5y, FF2qYnSfoLIj, s;
    while (gets (c)) {
        puts (c);
        for (gCdaNh = (920 - 920); c[gCdaNh] != '\0'; gCdaNh = gCdaNh + (404 - 403)) {
            if (!('(' != c[gCdaNh]))
                d[gCdaNh] = (498 - 497);
            else if (!(')' != c[gCdaNh]))
                d[gCdaNh] = (230 - 228);
            else
                d[gCdaNh] = (663 - 660);
        }
        while ((936 - 935)) {
            for (uftv5y = (307 - 307); gCdaNh - (125 - 123) >= uftv5y; uftv5y++) {
                if (!((649 - 648) != d[uftv5y]))
                    break;
            }
            s = (701 - 701);
            for (FF2qYnSfoLIj = uftv5y + (372 - 371); gCdaNh - (534 - 533) >= FF2qYnSfoLIj; FF2qYnSfoLIj = FF2qYnSfoLIj +(59 - 58)) {
                if (!((491 - 489) != d[FF2qYnSfoLIj])) {
                    s = (984 - 983);
                    break;
                }
            }
            if (!((527 - 527) != s))
                break;
            for (uftv5y = (340 - 340); gCdaNh - (773 - 771) >= uftv5y; uftv5y++) {
                if (d[uftv5y] == (706 - 705)) {
                    for (FF2qYnSfoLIj = uftv5y + (271 - 270); gCdaNh - 1 >= FF2qYnSfoLIj; FF2qYnSfoLIj = FF2qYnSfoLIj +1) {
                        if (!(1 != d[FF2qYnSfoLIj])) {
                            uftv5y = FF2qYnSfoLIj;
                        }
                        if (d[FF2qYnSfoLIj] == 2) {
                            d[uftv5y] = 3;
                            d[FF2qYnSfoLIj] = 3;
                            break;
                        }
                    }
                }
            }
        }
        for (FF2qYnSfoLIj = 0; FF2qYnSfoLIj <= gCdaNh - 1; FF2qYnSfoLIj++) {
            switch (d[FF2qYnSfoLIj]) {
            case 1 :
                printf ("$");
                break;
            case 2 :
                printf ("?");
                break;
            case 3 :
                printf (" ");
                break;
            }
        }
    }
}

