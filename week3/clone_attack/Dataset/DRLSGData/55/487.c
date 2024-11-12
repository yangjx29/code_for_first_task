int main () {
    int lrc9SRkM;
    int XhS2Vw8lDsQ;
    int ZmFLh08K;
    char IfxFhE3t62o5 [(211 - 111)];
    char aSeYs1 [(581 - 481)];
    int e0Jm95U4wBN;
    int f8F45iSN;
    int syWlwZX1kP5;
    int C2vhLk3noX9p;
    cin >> e0Jm95U4wBN;
    cin >> aSeYs1;
    ZmFLh08K = (787 - 787);
    cin >> f8F45iSN;
    lrc9SRkM = strlen (aSeYs1);
    C2vhLk3noX9p = (650 - 649);
    for (syWlwZX1kP5 = (482 - 482); syWlwZX1kP5 < lrc9SRkM; syWlwZX1kP5++) {
        if (aSeYs1[syWlwZX1kP5] >= '0' && '9' >= aSeYs1[syWlwZX1kP5])
            aSeYs1[syWlwZX1kP5] -= '0';
        if ('a' <= aSeYs1[syWlwZX1kP5] && 'z' >= aSeYs1[syWlwZX1kP5])
            aSeYs1[syWlwZX1kP5] -= ('a' - (258 - 248));
        if ('A' <= aSeYs1[syWlwZX1kP5] && aSeYs1[syWlwZX1kP5] <= 'Z')
            aSeYs1[syWlwZX1kP5] -= ('A' - (959 - 949));
    }
    for (XhS2Vw8lDsQ = lrc9SRkM - (612 - 611); XhS2Vw8lDsQ >= (909 - 909); XhS2Vw8lDsQ--) {
        ZmFLh08K += aSeYs1[XhS2Vw8lDsQ] * C2vhLk3noX9p;
        C2vhLk3noX9p *= e0Jm95U4wBN;
    }
    C2vhLk3noX9p = (94 - 94);
    while (ZmFLh08K) {
        IfxFhE3t62o5[C2vhLk3noX9p] = ZmFLh08K % f8F45iSN;
        ZmFLh08K = ZmFLh08K / f8F45iSN;
        C2vhLk3noX9p++;
    }
    for (XhS2Vw8lDsQ = (601 - 601); XhS2Vw8lDsQ < C2vhLk3noX9p; XhS2Vw8lDsQ++) {
        if (IfxFhE3t62o5[XhS2Vw8lDsQ] >= (19 - 19) && IfxFhE3t62o5[XhS2Vw8lDsQ] <= (745 - 736))
            IfxFhE3t62o5[XhS2Vw8lDsQ] += '0';
        else if (IfxFhE3t62o5[XhS2Vw8lDsQ] >= (725 - 715))
            IfxFhE3t62o5[XhS2Vw8lDsQ] += ('A' - (761 - 751));
    }
    for (XhS2Vw8lDsQ = C2vhLk3noX9p -(762 - 761); XhS2Vw8lDsQ >= (576 - 576); XhS2Vw8lDsQ--)
        cout << IfxFhE3t62o5[XhS2Vw8lDsQ];
    if (C2vhLk3noX9p == (533 - 533))
        cout << (144 - 144);
}

