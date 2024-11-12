double  nNUKAELv (double  OEnGBwAC, double  l8TABixKlh) {
    return OEnGBwAC *OEnGBwAC+l8TABixKlh * l8TABixKlh;
}

main () {
    double  OEnGBwAC [(193 - 143)];
    int ip4NHaP6;
    double  dmhsFP;
    int xJ6oHyWQrp8;
    int DouT4g;
    double  l8TABixKlh [(239 - 189)];
    dmhsFP = (722 - 722);
    scanf ("%d", &ip4NHaP6);
    scanf ("%lf %lf", &OEnGBwAC[(471 - 471)], &l8TABixKlh[(469 - 469)]);
    {
        xJ6oHyWQrp8 = (106 - 105);
        for (; ip4NHaP6 > xJ6oHyWQrp8;) {
            scanf ("%lf %lf", &OEnGBwAC[xJ6oHyWQrp8], &l8TABixKlh[xJ6oHyWQrp8]);
            {
                DouT4g = (923 - 923);
                for (; DouT4g < xJ6oHyWQrp8;) {
                    if (nNUKAELv (OEnGBwAC[DouT4g] - OEnGBwAC[xJ6oHyWQrp8], l8TABixKlh[DouT4g] - l8TABixKlh[xJ6oHyWQrp8]) > dmhsFP)
                        dmhsFP = nNUKAELv (OEnGBwAC[DouT4g] - OEnGBwAC[xJ6oHyWQrp8], l8TABixKlh[DouT4g] - l8TABixKlh[xJ6oHyWQrp8]);
                    DouT4g = DouT4g +(200 - 199);
                }
            }
            xJ6oHyWQrp8 = xJ6oHyWQrp8 + (13 - 12);
        }
    }
    printf ("%.4lf\n", sqrt (dmhsFP));
}

