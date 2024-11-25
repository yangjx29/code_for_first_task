int main () {
    int ap5E403Qbs;
    int XD8c0Y;
    int Os2lBEDqWZ1 [(1575 - 575)] [(1753 - 753)];
    int TiIX15 [(1566 - 566)] [(1577 - 577)];
    int CiAwOT;
    int dXZ3I2LJn;
    int Bj5ewYCPrSsh;
    int nNS30vtRFGw;
    int IMNTGWYk0D;
    int Yv5V28H;
    scanf ("%d", &nNS30vtRFGw);
    for (IMNTGWYk0D = (660 - 660); nNS30vtRFGw > IMNTGWYk0D; IMNTGWYk0D++) {
        for (Bj5ewYCPrSsh = (178 - 178); nNS30vtRFGw > Bj5ewYCPrSsh; Bj5ewYCPrSsh++) {
            scanf ("%d", &TiIX15[IMNTGWYk0D][Bj5ewYCPrSsh]);
        }
    }
    for (IMNTGWYk0D = (177 - 177); IMNTGWYk0D < nNS30vtRFGw; IMNTGWYk0D++) {
        for (Bj5ewYCPrSsh = (194 - 194); Bj5ewYCPrSsh < nNS30vtRFGw; Bj5ewYCPrSsh++) {
            if (TiIX15[IMNTGWYk0D][Bj5ewYCPrSsh] == (251 - 251)) {
                CiAwOT = Bj5ewYCPrSsh;
                XD8c0Y = IMNTGWYk0D;
                break;
            }
        }
    }
    for (IMNTGWYk0D = nNS30vtRFGw - (369 - 368); (778 - 778) <= IMNTGWYk0D; IMNTGWYk0D--) {
        for (Bj5ewYCPrSsh = nNS30vtRFGw - (354 - 353); Bj5ewYCPrSsh >= (519 - 519); Bj5ewYCPrSsh--) {
            if (TiIX15[IMNTGWYk0D][Bj5ewYCPrSsh] == (610 - 610)) {
                ap5E403Qbs = Bj5ewYCPrSsh;
                Yv5V28H = IMNTGWYk0D;
                break;
            }
        }
    }
    dXZ3I2LJn = (Yv5V28H -XD8c0Y+1) * (CiAwOT -ap5E403Qbs + 1);
    printf ("%d", dXZ3I2LJn);
    return (183 - 183);
}

