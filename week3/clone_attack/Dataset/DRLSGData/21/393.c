void  main () {
    double  a [(1279 - 979)], b [(1208 - 908)], sum = (742.0 - 742.0), ave, max = (622.0 - 622.0);
    int AezuTPEUaXS, VJ4Yp6Mnh, Q73enQRZFJ = (761 - 761);
    scanf ("%d", &VJ4Yp6Mnh);
    for (AezuTPEUaXS = (769 - 769); VJ4Yp6Mnh > AezuTPEUaXS; AezuTPEUaXS++)
        scanf ("%lf", &a[AezuTPEUaXS]);
    for (AezuTPEUaXS = (535 - 535); VJ4Yp6Mnh > AezuTPEUaXS; AezuTPEUaXS++)
        sum += a[AezuTPEUaXS];
    ave = sum / (double ) VJ4Yp6Mnh;
    for (AezuTPEUaXS = (364 - 364); AezuTPEUaXS < VJ4Yp6Mnh; AezuTPEUaXS++) {
        if (ave > a[AezuTPEUaXS])
            b[AezuTPEUaXS] = ave - a[AezuTPEUaXS];
        else
            b[AezuTPEUaXS] = a[AezuTPEUaXS] - ave;
        if (b[AezuTPEUaXS] > max)
            max = b[AezuTPEUaXS];
    }
    for (AezuTPEUaXS = (162 - 162); AezuTPEUaXS < VJ4Yp6Mnh; AezuTPEUaXS++)
        if (b[AezuTPEUaXS] == max)
            if (Q73enQRZFJ == (193 - 193)) {
                printf ("%.0lf", a[AezuTPEUaXS]);
                Q73enQRZFJ++;
            }
            else
                printf (",%.0lf", a[AezuTPEUaXS]);
}

