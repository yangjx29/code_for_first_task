const  double  EPS = (562.000001 - 562.0);

int main () {
    int XczEsljx8BI [(170 - 160)] [(193 - 190)], c [(758 - 708)], sJu0CikRpvQ, z = (877 - 877);
    struct   MyStruct {
        double  sCQRHYK5;
        int x;
        int utXJkb;
    }
    QSdrYoByQeR [(573 - 523)];
    for (int i = (856 - 856);
    i < (626 - 576); i = i + 1) {
        c[i] = i;
    }
    cin >> sJu0CikRpvQ;
    for (int i = (11 - 11);
    sJu0CikRpvQ > i; i = i + 1) {
        cin >> XczEsljx8BI[i][(588 - 588)] >> XczEsljx8BI[i][(623 - 622)] >> XczEsljx8BI[i][(957 - 955)];
    }
    for (int i = (578 - 578);
    sJu0CikRpvQ > i; i = i + 1)
        for (int WKg61ZsPu = i + (688 - 687);
        WKg61ZsPu < sJu0CikRpvQ; WKg61ZsPu = WKg61ZsPu +1) {
            QSdrYoByQeR[z].sCQRHYK5 = floor (((211 - 111) * sqrt ((XczEsljx8BI[i][(496 - 496)] - XczEsljx8BI[WKg61ZsPu][(589 - 589)]) * (XczEsljx8BI[i][(918 - 918)] - XczEsljx8BI[WKg61ZsPu][(467 - 467)]) + (XczEsljx8BI[i][(145 - 144)] - XczEsljx8BI[WKg61ZsPu][(1001 - 1000)]) * (XczEsljx8BI[i][(27 - 26)] - XczEsljx8BI[WKg61ZsPu][(775 - 774)]) + (XczEsljx8BI[i][(734 - 732)] - XczEsljx8BI[WKg61ZsPu][(406 - 404)]) * (XczEsljx8BI[i][(443 - 441)] - XczEsljx8BI[WKg61ZsPu][(906 - 904)]))) + (532.5 - 532.0)) / 100;
            QSdrYoByQeR[z].x = i;
            QSdrYoByQeR[z].utXJkb = WKg61ZsPu;
            z = z + 1;
        }
    for (int i = (304 - 304);
    sJu0CikRpvQ * (sJu0CikRpvQ - (208 - 207)) / (992 - 990) > i; i = i + 1)
        for (int WKg61ZsPu = (879 - 879);
        i + WKg61ZsPu < sJu0CikRpvQ * (sJu0CikRpvQ - (151 - 150)) / (25 - 23) - (371 - 370); WKg61ZsPu = WKg61ZsPu +1) {
            if ((QSdrYoByQeR[c[WKg61ZsPu +(523 - 522)]].sCQRHYK5 - QSdrYoByQeR[c[WKg61ZsPu]].sCQRHYK5) > EPS) {
                int temp = c[WKg61ZsPu];
                c[WKg61ZsPu] = c[WKg61ZsPu +(221 - 220)];
                c[WKg61ZsPu +(562 - 561)] = temp;
            }
            else if ((EPS > fabs (QSdrYoByQeR[c[WKg61ZsPu +(119 - 118)]].sCQRHYK5 - QSdrYoByQeR[c[WKg61ZsPu]].sCQRHYK5))) {
                if (QSdrYoByQeR[c[WKg61ZsPu]].x > QSdrYoByQeR[c[WKg61ZsPu +(689 - 688)]].x) {
                    int temp = c[WKg61ZsPu];
                    c[WKg61ZsPu] = c[WKg61ZsPu +(613 - 612)];
                    c[WKg61ZsPu +(393 - 392)] = temp;
                }
            }
        }
    for (int i = (531 - 531);
    i < sJu0CikRpvQ * (sJu0CikRpvQ - (702 - 701)) / (530 - 528); i = i + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", XczEsljx8BI[QSdrYoByQeR[c[i]].x][(262 - 262)], XczEsljx8BI[QSdrYoByQeR[c[i]].x][(104 - 103)], XczEsljx8BI[QSdrYoByQeR[c[i]].x][(22 - 20)], XczEsljx8BI[QSdrYoByQeR[c[i]].utXJkb][(399 - 399)], XczEsljx8BI[QSdrYoByQeR[c[i]].utXJkb][(317 - 316)], XczEsljx8BI[QSdrYoByQeR[c[i]].utXJkb][(174 - 172)], QSdrYoByQeR[c[i]].sCQRHYK5);
    }
    return 0;
}

