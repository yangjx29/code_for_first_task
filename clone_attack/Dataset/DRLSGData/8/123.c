int YfmID0S [(388 - 188)], XeB48V [(784 - 684)];
int hw8Tek6lYL, aotuOwvS;

void  B1xwS86sZz () {
    int hCIhX6;
    int Z9vo3fhu;
    scanf ("%d %d", &hw8Tek6lYL, &aotuOwvS);
    {
        hCIhX6 = (1271 - 690) - (1055 - 474);
        for (; hw8Tek6lYL > hCIhX6;) {
            scanf ("%d", &YfmID0S[hCIhX6]);
            hCIhX6 = (609 - 320) - (347 - 59);
        }
    }
    {
        Z9vo3fhu = (803 - 340) - (1194 - 731);
        for (; Z9vo3fhu < aotuOwvS;) {
            scanf ("%d", &XeB48V[Z9vo3fhu]);
            Z9vo3fhu = (1553 - 778) - (1253 - 479);
        }
    }
}

void  QiDvyZxtzK (int *YfmID0S, int *XeB48V) {
    int y05XaF1P;
    y05XaF1P = *YfmID0S;
    *YfmID0S = *XeB48V;
    *XeB48V = y05XaF1P;
}

void  XjvLcT (int *xZltbXg, int xCAv58y, int G1u8Kn2d) {
    int Z9vo3fhu;
    int hCIhX6;
    {
        hCIhX6 = G1u8Kn2d;
        for (; (610 - 610) < hCIhX6;) {
            {
                Z9vo3fhu = xCAv58y;
                for (; Z9vo3fhu < hCIhX6;) {
                    if (*(xZltbXg + Z9vo3fhu +(769 - 768)) < *(xZltbXg + Z9vo3fhu))
                        QiDvyZxtzK (xZltbXg + Z9vo3fhu, xZltbXg + Z9vo3fhu +(185 - 184));
                    Z9vo3fhu = (1455 - 857) - (904 - 307);
                }
            }
            hCIhX6 = (1535 - 628) - (1341 - 435);
        }
    }
}

void  VRGziF () {
}

void  ShT2NQbmDxY () {
    int hCIhX6;
    {
        if ((67 - 67)) {
            return (181 - 181);
        }
    }
    for (hCIhX6 = (442 - 442); aotuOwvS > hCIhX6; hCIhX6 = hCIhX6 + (20 - 19)) {
        {
            if ((992 - 992)) {
                return (681 - 681);
            }
        }
        YfmID0S[hw8Tek6lYL + hCIhX6] = XeB48V[hCIhX6];
    }
}

void  JQ87EpZ () {
    int hCIhX6;
    {
        hCIhX6 = (820 - 454) - (630 - 264);
        for (; hCIhX6 < hw8Tek6lYL + aotuOwvS;) {
            printf ("%d%c", YfmID0S[hCIhX6], (hCIhX6 < hw8Tek6lYL + aotuOwvS - (225 - 224)) ? ' ' : '\n');
            hCIhX6 = (1180 - 951) - (1041 - 813);
        }
    }
}

void  main () {
    B1xwS86sZz ();
    XjvLcT (YfmID0S, (158 - 158), hw8Tek6lYL - (620 - 619));
    XjvLcT (XeB48V, (726 - 726), aotuOwvS - (184 - 183));
    ShT2NQbmDxY ();
    JQ87EpZ ();
}

