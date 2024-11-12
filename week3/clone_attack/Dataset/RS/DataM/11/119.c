int main () {
    int days [(681 - 668)] = {(317 - 317), (390 - 359), 28, 31, (356 - 326), 31, 30, 31, 31, 30, 31, 30, 31};
    int KdcLv1RK;
    int aKfwLsMjWh;
    int jM2nEDcChI;
    int d;
    int XsEOmW;
    scanf ("%d%d%d", &KdcLv1RK, &aKfwLsMjWh, &jM2nEDcChI);
    d = jM2nEDcChI;
    if ((!(0 != KdcLv1RK % 4)) && (!(0 == KdcLv1RK % (1081 - 981))) || (!(0 != KdcLv1RK % 400)))
        days[2]++;
    {
        XsEOmW = 1;
        while (aKfwLsMjWh > XsEOmW) {
            d = d + days[XsEOmW];
            XsEOmW = XsEOmW +1;
        };
    }
    printf ("%d\n", d);
    if ((KdcLv1RK % 4 == 0) && (KdcLv1RK % 100 != 0) || (KdcLv1RK % 400 == 0))
        return 0;
}

