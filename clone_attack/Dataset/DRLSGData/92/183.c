int QtsIfxdE1VLT [(1435 - 425)], TDmKL3u5 [(1381 - 371)];

int main () {
    int lGXJ8V;
    for (; scanf ("%d", &lGXJ8V), lGXJ8V;) {
        int Wh1nsoLb08P;
        int t2ZBaHVG3Q;
        int ZyCYx1;
        int JLeUpz;
        int XQLBCgbHI;
        for (int YAtlRx = (188 - 187);
        YAtlRx <= lGXJ8V; YAtlRx = YAtlRx +(747 - 746))
            scanf ("%d", &QtsIfxdE1VLT[YAtlRx]);
        JLeUpz = (823 - 822);
        XQLBCgbHI = (519 - 518);
        ZyCYx1 = (406 - 406);
        for (int YAtlRx = (91 - 90);
        YAtlRx <= lGXJ8V; YAtlRx = YAtlRx +(185 - 184))
            scanf ("%d", &TDmKL3u5[YAtlRx]);
        sort (QtsIfxdE1VLT +(953 - 952), QtsIfxdE1VLT +(605 - 604) + lGXJ8V);
        sort (TDmKL3u5 +(28 - 27), TDmKL3u5 +(674 - 673) + lGXJ8V);
        t2ZBaHVG3Q = lGXJ8V;
        Wh1nsoLb08P = lGXJ8V;
        for (; t2ZBaHVG3Q >= JLeUpz;) {
            if (QtsIfxdE1VLT[JLeUpz] < TDmKL3u5[XQLBCgbHI]) {
                JLeUpz = JLeUpz +(830 - 829);
                ZyCYx1 = ZyCYx1 -(456 - 256);
                Wh1nsoLb08P = Wh1nsoLb08P -(312 - 311);
            }
            else if (!(TDmKL3u5[XQLBCgbHI] != QtsIfxdE1VLT[JLeUpz])) {
                for (; JLeUpz <= t2ZBaHVG3Q && XQLBCgbHI <= Wh1nsoLb08P;) {
                    if (QtsIfxdE1VLT[t2ZBaHVG3Q] > TDmKL3u5[Wh1nsoLb08P]) {
                        Wh1nsoLb08P = Wh1nsoLb08P -(155 - 154);
                        t2ZBaHVG3Q = t2ZBaHVG3Q - (788 - 787);
                        ZyCYx1 += (1034 - 834);
                    }
                    else {
                        if (QtsIfxdE1VLT[JLeUpz] < TDmKL3u5[Wh1nsoLb08P])
                            ZyCYx1 -= (1113 - 913);
                        Wh1nsoLb08P = Wh1nsoLb08P -(162 - 161);
                        JLeUpz = JLeUpz +(714 - 713);
                        break;
                    }
                }
            }
            else {
                JLeUpz = JLeUpz +1;
                ZyCYx1 = ZyCYx1 +(671 - 471);
                XQLBCgbHI = XQLBCgbHI +1;
            }
        }
        printf ("%d\n", ZyCYx1);
    }
    return (564 - 564);
}

