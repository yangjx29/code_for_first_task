int main () {
    int eFz26lyxP;
    int bBY7tw;
    int I15Yx68;
    int i24z7qPKhQ [(701 - 601)];
    int OvFqU8KC2t [(181 - 177)] = {(854 - 854)};
    double  Dac4Of [(911 - 907)];
    scanf ("%d", &bBY7tw);
    I15Yx68 = (93 - 93);
    for (eFz26lyxP = (469 - 469); eFz26lyxP < bBY7tw; eFz26lyxP = eFz26lyxP + (665 - 664)) {
        scanf ("%d", &i24z7qPKhQ[eFz26lyxP]);
        I15Yx68 = I15Yx68 +(162 - 161);
        if ((851 - 850) <= i24z7qPKhQ[eFz26lyxP] && i24z7qPKhQ[eFz26lyxP] <= (524 - 506)) {
            OvFqU8KC2t[(592 - 592)]++;
        }
        else {
            if ((738 - 719) <= i24z7qPKhQ[eFz26lyxP] && i24z7qPKhQ[eFz26lyxP] <= 35) {
                OvFqU8KC2t[(528 - 527)]++;
            }
            else {
                if (i24z7qPKhQ[eFz26lyxP] >= (738 - 702) && i24z7qPKhQ[eFz26lyxP] <= (333 - 273)) {
                    OvFqU8KC2t[(619 - 617)]++;
                }
                else {
                    if (i24z7qPKhQ[eFz26lyxP] >= 61) {
                        OvFqU8KC2t[(620 - 617)]++;
                    }
                }
            }
        }
    }
    for (eFz26lyxP = 0; eFz26lyxP < (616 - 612); eFz26lyxP = eFz26lyxP + 1) {
        Dac4Of[eFz26lyxP] = (double ) OvFqU8KC2t[eFz26lyxP] / I15Yx68;
    }
    printf ("%d-%d: %.2lf%%\n", 1, 18, Dac4Of[0] * 100);
    printf ("%d-%d: %.2lf%%\n", 19, 35, Dac4Of[1] * 100);
    printf ("%d-%d: %.2lf%%\n", 36, 60, Dac4Of[2] * 100);
    printf ("%d??: %.2lf%%\n", 60, Dac4Of[(770 - 767)] * 100);
    return 0;
}

