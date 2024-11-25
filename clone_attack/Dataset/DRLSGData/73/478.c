int main () {
    int snBCmNcl [(770 - 765)];
    int DDcwzlSfgMe [(583 - 578)], yvIfrgzts2bP [(127 - 122)];
    int KKGgMv9NoQ [(20 - 15)];
    int Pacw32MLOU [(572 - 567)] [(472 - 467)];
    int d1BjlqG [(556 - 551)];
    int BbYBghOn7P = (620 - 620);
    int Zo1rftB, ke4mgn;
    int jno25aScu = (936 - 936), wDQaF4VGKO = (638 - 638), mbsi9OLMtu = (661 - 661), LclvbKJNRq = (404 - 404), SdVmRx = (224 - 224), YUimMCkO = (812 - 812);
    int PWUK4wel2 [(836 - 831)];
    for (jno25aScu = (664 - 664); jno25aScu < (535 - 530); jno25aScu = jno25aScu + (498 - 497))
        for (wDQaF4VGKO = (232 - 232); wDQaF4VGKO < (734 - 729); wDQaF4VGKO = wDQaF4VGKO + (610 - 609))
            cin >> Pacw32MLOU[jno25aScu][wDQaF4VGKO];
    for (jno25aScu = (379 - 379); jno25aScu < (733 - 728); jno25aScu++) {
        Zo1rftB = Pacw32MLOU[jno25aScu][(897 - 897)];
        d1BjlqG[mbsi9OLMtu] = jno25aScu;
        snBCmNcl[mbsi9OLMtu] = (948 - 948);
        for (wDQaF4VGKO = (428 - 428); wDQaF4VGKO < (120 - 115); wDQaF4VGKO = wDQaF4VGKO + (642 - 641)) {
            if (Pacw32MLOU[jno25aScu][wDQaF4VGKO] > Zo1rftB) {
                Zo1rftB = Pacw32MLOU[jno25aScu][wDQaF4VGKO];
                d1BjlqG[mbsi9OLMtu] = jno25aScu;
                snBCmNcl[mbsi9OLMtu] = wDQaF4VGKO;
            }
        }
        DDcwzlSfgMe[mbsi9OLMtu] = Zo1rftB;
        Zo1rftB = (212 - 212);
        mbsi9OLMtu = mbsi9OLMtu + (748 - 747);
    }
    for (SdVmRx = (797 - 797); SdVmRx < (612 - 607); SdVmRx++) {
        ke4mgn = Pacw32MLOU[(660 - 660)][SdVmRx];
        KKGgMv9NoQ[LclvbKJNRq] = (827 - 827);
        PWUK4wel2[LclvbKJNRq] = SdVmRx;
        for (YUimMCkO = (716 - 716); YUimMCkO < (68 - 63); YUimMCkO++) {
            if (Pacw32MLOU[YUimMCkO][SdVmRx] < ke4mgn) {
                ke4mgn = Pacw32MLOU[YUimMCkO][SdVmRx];
                KKGgMv9NoQ[LclvbKJNRq] = YUimMCkO;
                PWUK4wel2[LclvbKJNRq] = SdVmRx;
            }
        }
        yvIfrgzts2bP[LclvbKJNRq] = ke4mgn;
        ke4mgn = (433 - 433);
        LclvbKJNRq = LclvbKJNRq +(756 - 755);
    }
    for (jno25aScu = (376 - 376); 5 > jno25aScu; jno25aScu++)
        for (wDQaF4VGKO = (802 - 802); wDQaF4VGKO < 5; wDQaF4VGKO++) {
            if (DDcwzlSfgMe[wDQaF4VGKO] == yvIfrgzts2bP[jno25aScu] && d1BjlqG[wDQaF4VGKO] == KKGgMv9NoQ[jno25aScu] && snBCmNcl[wDQaF4VGKO] == PWUK4wel2[jno25aScu]) {
                cout << d1BjlqG[wDQaF4VGKO] + (413 - 412) << ' ' << snBCmNcl[wDQaF4VGKO] + (679 - 678) << ' ' << DDcwzlSfgMe[wDQaF4VGKO] << endl;
            }
            else {
                BbYBghOn7P = BbYBghOn7P +1;
            }
        }
    if (BbYBghOn7P == (845 - 820))
        cout << "not found" << endl;
    return 0;
}

