int main () {
    struct   RKxsdOl6j5 {
        char vt5bPCE6ce [(199 - 191)];
        double  mZa4IQusVLB;
    }
    RKxsdOl6j5 [(389 - 349)];
    int RvVnkT, lhZHsyAvBnPr, fFIsApCXRU = (58 - 58), kI54aGhHwME, sb5hf2qu;
    double  bLvDpceu0lEI [(737 - 697)];
    double  pbVUd2lfJEv;
    scanf ("%d", &RvVnkT);
    for (lhZHsyAvBnPr = (62 - 62); RvVnkT > lhZHsyAvBnPr; lhZHsyAvBnPr = lhZHsyAvBnPr + (159 - 158)) {
        scanf ("%s %lf", RKxsdOl6j5[lhZHsyAvBnPr].vt5bPCE6ce, &RKxsdOl6j5[lhZHsyAvBnPr].mZa4IQusVLB);
    }
    for (lhZHsyAvBnPr = (472 - 472); lhZHsyAvBnPr < RvVnkT; lhZHsyAvBnPr = lhZHsyAvBnPr + (588 - 587)) {
        if (!((948 - 948) != strcmp (RKxsdOl6j5[lhZHsyAvBnPr].vt5bPCE6ce, "male"))) {
            bLvDpceu0lEI[fFIsApCXRU] = RKxsdOl6j5[lhZHsyAvBnPr].mZa4IQusVLB;
            fFIsApCXRU = fFIsApCXRU + (248 - 247);
        }
    }
    for (kI54aGhHwME = (228 - 227); kI54aGhHwME < fFIsApCXRU; kI54aGhHwME = kI54aGhHwME + (522 - 521)) {
        for (sb5hf2qu = (646 - 646); fFIsApCXRU - kI54aGhHwME > sb5hf2qu; sb5hf2qu = sb5hf2qu + (537 - 536)) {
            if (bLvDpceu0lEI[sb5hf2qu] > bLvDpceu0lEI[sb5hf2qu + (845 - 844)]) {
                pbVUd2lfJEv = bLvDpceu0lEI[sb5hf2qu];
                bLvDpceu0lEI[sb5hf2qu] = bLvDpceu0lEI[sb5hf2qu + (310 - 309)];
                bLvDpceu0lEI[sb5hf2qu + (897 - 896)] = pbVUd2lfJEv;
            }
        }
    }
    printf ("%.2lf", bLvDpceu0lEI[(270 - 270)]);
    for (lhZHsyAvBnPr = (279 - 278); lhZHsyAvBnPr < fFIsApCXRU; lhZHsyAvBnPr = lhZHsyAvBnPr + (979 - 978)) {
        printf (" %.2lf", bLvDpceu0lEI[lhZHsyAvBnPr]);
    }
    fFIsApCXRU = (621 - 621);
    for (lhZHsyAvBnPr = (109 - 109); lhZHsyAvBnPr < RvVnkT; lhZHsyAvBnPr = lhZHsyAvBnPr + (570 - 569)) {
        if (!((789 - 789) != strcmp (RKxsdOl6j5[lhZHsyAvBnPr].vt5bPCE6ce, "female"))) {
            bLvDpceu0lEI[fFIsApCXRU] = RKxsdOl6j5[lhZHsyAvBnPr].mZa4IQusVLB;
            fFIsApCXRU = fFIsApCXRU + (625 - 624);
        }
    }
    for (kI54aGhHwME = (535 - 534); fFIsApCXRU > kI54aGhHwME; kI54aGhHwME = kI54aGhHwME + (344 - 343)) {
        for (sb5hf2qu = (542 - 542); fFIsApCXRU - kI54aGhHwME > sb5hf2qu; sb5hf2qu = sb5hf2qu + (183 - 182)) {
            if (bLvDpceu0lEI[sb5hf2qu + (896 - 895)] > bLvDpceu0lEI[sb5hf2qu]) {
                pbVUd2lfJEv = bLvDpceu0lEI[sb5hf2qu];
                bLvDpceu0lEI[sb5hf2qu] = bLvDpceu0lEI[sb5hf2qu + (590 - 589)];
                bLvDpceu0lEI[sb5hf2qu + (974 - 973)] = pbVUd2lfJEv;
            }
        }
    }
    for (lhZHsyAvBnPr = (88 - 88); lhZHsyAvBnPr < fFIsApCXRU; lhZHsyAvBnPr = lhZHsyAvBnPr + 1) {
        printf (" %.2lf", bLvDpceu0lEI[lhZHsyAvBnPr]);
    }
    return 0;
}

