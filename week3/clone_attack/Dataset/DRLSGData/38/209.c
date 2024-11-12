int main () {
    int Ofo0SMC3, oLp4yx [(1022 - 922)], bVYCiZsr, SDwxgsbiMa;
    double  y6HLlr9ItyeB [(727 - 627)] [(714 - 614)], hPAhsgyDlB, x6UckY1H, XKzHnWbl4tx;
    getchar ();
    scanf ("%d", &Ofo0SMC3);
    {
        bVYCiZsr = (117 - 117);
        for (; bVYCiZsr < Ofo0SMC3;) {
            scanf ("%d", &oLp4yx[bVYCiZsr]);
            {
                SDwxgsbiMa = (855 - 855);
                for (; SDwxgsbiMa < oLp4yx[bVYCiZsr];) {
                    scanf ("%lf", &y6HLlr9ItyeB[bVYCiZsr][SDwxgsbiMa]);
                    SDwxgsbiMa = SDwxgsbiMa +1;
                }
            }
            bVYCiZsr = bVYCiZsr + 1;
        }
    }
    {
        bVYCiZsr = (765 - 765);
        while (bVYCiZsr < Ofo0SMC3) {
            XKzHnWbl4tx = (393 - 393);
            hPAhsgyDlB = 0;
            {
                SDwxgsbiMa = 0;
                for (; SDwxgsbiMa < oLp4yx[bVYCiZsr];) {
                    hPAhsgyDlB += y6HLlr9ItyeB[bVYCiZsr][SDwxgsbiMa];
                    SDwxgsbiMa++;
                }
            }
            x6UckY1H = hPAhsgyDlB / oLp4yx[bVYCiZsr];
            {
                SDwxgsbiMa = 0;
                for (; SDwxgsbiMa < oLp4yx[bVYCiZsr];) {
                    XKzHnWbl4tx = XKzHnWbl4tx +(y6HLlr9ItyeB[bVYCiZsr][SDwxgsbiMa] - x6UckY1H) * (y6HLlr9ItyeB[bVYCiZsr][SDwxgsbiMa] - x6UckY1H);
                    SDwxgsbiMa++;
                }
            }
            XKzHnWbl4tx = sqrt (XKzHnWbl4tx / oLp4yx[bVYCiZsr]);
            bVYCiZsr++;
            printf ("%.5lf\n", XKzHnWbl4tx);
        }
    }
    getchar ();
    return 0;
}

