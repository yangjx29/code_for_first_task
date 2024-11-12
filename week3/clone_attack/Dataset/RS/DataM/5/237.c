int main () {
    char SlDJ3ZfH [(1292 - 787)], E83gRO9 [505];
    double  J9IaOWdM2;
    double  QNd395et;
    int QfwOPcoW;
    int WS9pV4UMRc;
    int h7srNKf1Aa;
    int iL8W3fBdwM;
    int j;
    int aMo9b5A8SyHT;
    int l;
    int TVdmAEwS;
    int TCXFrUBMe;
    QfwOPcoW = (388 - 388);
    WS9pV4UMRc = (514 - 514);
    h7srNKf1Aa = (410 - 410);
    scanf ("%lf", &J9IaOWdM2);
    scanf ("%s", SlDJ3ZfH);
    WS9pV4UMRc = strlen (SlDJ3ZfH);
    scanf ("%s", E83gRO9);
    TVdmAEwS = strlen (E83gRO9);
    if (WS9pV4UMRc != TVdmAEwS) {
        QfwOPcoW = (960 - 959);
    }
    if (QfwOPcoW == 0) {
        iL8W3fBdwM = 0;
        while (iL8W3fBdwM < WS9pV4UMRc) {
            if (!((SlDJ3ZfH[iL8W3fBdwM] == 'A' || SlDJ3ZfH[iL8W3fBdwM] == 'T' || SlDJ3ZfH[iL8W3fBdwM] == 'C' || SlDJ3ZfH[iL8W3fBdwM] == 'G') && (E83gRO9[iL8W3fBdwM] == 'A' || E83gRO9[iL8W3fBdwM] == 'T' || E83gRO9[iL8W3fBdwM] == 'C' || E83gRO9[iL8W3fBdwM] == 'G'))) {
                QfwOPcoW = 1;
                break;
            }
            iL8W3fBdwM = iL8W3fBdwM + 1;
        };
    }
    if (QfwOPcoW == 0) {
        for (iL8W3fBdwM = 0; iL8W3fBdwM < WS9pV4UMRc; iL8W3fBdwM++) {
            if (SlDJ3ZfH[iL8W3fBdwM] == E83gRO9[iL8W3fBdwM])
                h7srNKf1Aa = h7srNKf1Aa + 1;
        }
        QNd395et = 1.0 * h7srNKf1Aa / WS9pV4UMRc *1.0;
        if (QNd395et >= J9IaOWdM2)
            printf ("yes");
        else
            ;
    }
    return 0;
}

