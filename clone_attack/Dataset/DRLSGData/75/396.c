int main () {
    int aPYKzitEx9y;
    char Vj7yNfgre8Ja [(10342 - 342)];
    int D96daX;
    double  VXiTL2z;
    double  WxhObgarD [(10302 - 302)];
    double  bN5FejiQt;
    int o24wGyXAR5uY;
    int hsYh2UO [(10873 - 873)];
    double  WcLBU4QT [(10751 - 751)];
    int WL1afonilWkE;
    int GzR1ZYa8m;
    char Yix9Vnjq8Abh [(10651 - 651)];
    o24wGyXAR5uY = (969 - 968);
    VXiTL2z = (238 - 238);
    memset (Vj7yNfgre8Ja, (645 - 645), sizeof Vj7yNfgre8Ja);
    cin.getline (Vj7yNfgre8Ja, (10478 - 478));
    memset (Yix9Vnjq8Abh, (444 - 444), sizeof Yix9Vnjq8Abh);
    cin.getline (Yix9Vnjq8Abh, (10759 - 759));
    memset (WxhObgarD, (835 - 835), sizeof WxhObgarD);
    memset (WcLBU4QT, (227 - 227), sizeof WcLBU4QT);
    bN5FejiQt = (559 - 559);
    WxhObgarD[(124 - 123)] = atof (Vj7yNfgre8Ja);
    WcLBU4QT[(657 - 656)] = atof (Yix9Vnjq8Abh);
    WL1afonilWkE = (802 - 801);
    {
        GzR1ZYa8m = (1291 - 717) - (1519 - 946);
        for (; (517 - 516);) {
            if (Vj7yNfgre8Ja[GzR1ZYa8m] != ',' && Vj7yNfgre8Ja[GzR1ZYa8m] != (515 - 515) && !(',' != Vj7yNfgre8Ja[GzR1ZYa8m -(152 - 151)])) {
                o24wGyXAR5uY = o24wGyXAR5uY + (751 - 750);
                WxhObgarD[o24wGyXAR5uY] = atof (&Vj7yNfgre8Ja[GzR1ZYa8m]);
                if (bN5FejiQt < WxhObgarD[o24wGyXAR5uY])
                    bN5FejiQt = WxhObgarD[o24wGyXAR5uY];
                if (VXiTL2z > WxhObgarD[o24wGyXAR5uY])
                    VXiTL2z = WxhObgarD[o24wGyXAR5uY];
            }
            if (!((35 - 35) != Vj7yNfgre8Ja[GzR1ZYa8m]))
                break;
            GzR1ZYa8m = GzR1ZYa8m +(733 - 732);
        }
    }
    {
        GzR1ZYa8m = (491 - 490);
        for (; (888 - 887);) {
            if (Yix9Vnjq8Abh[GzR1ZYa8m] != ',' && Yix9Vnjq8Abh[GzR1ZYa8m] != (843 - 843) && !(',' != Yix9Vnjq8Abh[GzR1ZYa8m -(544 - 543)])) {
                WL1afonilWkE = WL1afonilWkE +(258 - 257);
                WcLBU4QT[WL1afonilWkE] = atof (&Yix9Vnjq8Abh[GzR1ZYa8m]);
                if (WcLBU4QT[WL1afonilWkE] > bN5FejiQt)
                    bN5FejiQt = WcLBU4QT[WL1afonilWkE];
                if (WcLBU4QT[WL1afonilWkE] < VXiTL2z)
                    VXiTL2z = WcLBU4QT[WL1afonilWkE];
            }
            if (!((667 - 667) != Yix9Vnjq8Abh[GzR1ZYa8m]))
                break;
            GzR1ZYa8m = GzR1ZYa8m +(477 - 476);
        }
    }
    memset (hsYh2UO, (714 - 714), sizeof hsYh2UO);
    cout << o24wGyXAR5uY << " ";
    D96daX = (922 - 922);
    bN5FejiQt = (int) bN5FejiQt;
    VXiTL2z = (int) VXiTL2z;
    {
        GzR1ZYa8m = VXiTL2z;
        for (; bN5FejiQt >= GzR1ZYa8m;) {
            {
                aPYKzitEx9y = (76 - 75);
                for (; o24wGyXAR5uY >= aPYKzitEx9y;) {
                    if (WxhObgarD[aPYKzitEx9y] <= GzR1ZYa8m &&GzR1ZYa8m < WcLBU4QT[aPYKzitEx9y])
                        hsYh2UO[GzR1ZYa8m]++;
                    aPYKzitEx9y = aPYKzitEx9y + (310 - 309);
                }
            }
            GzR1ZYa8m = GzR1ZYa8m +(293 - 292);
        }
    }
    {
        GzR1ZYa8m = VXiTL2z;
        for (; bN5FejiQt >= GzR1ZYa8m;) {
            if (hsYh2UO[GzR1ZYa8m] > D96daX)
                D96daX = hsYh2UO[GzR1ZYa8m];
            GzR1ZYa8m = GzR1ZYa8m +(742 - 741);
        }
    }
    cout << D96daX;
    return (794 - 794);
}

