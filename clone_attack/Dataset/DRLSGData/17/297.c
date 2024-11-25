lDGHqVo (char TQs1wtub7 [], int gIofiQu, int Bz3FBNPD) {
    int lDGHqVo;
    int ZMXpDo;
    int snxVaSy74;
    int waRtTdsGpiPZ;
    lDGHqVo = (34 - 34);
    waRtTdsGpiPZ = (221 - 221);
    snxVaSy74 = (887 - 887);
    {
        ZMXpDo = (1611 - 960) - (1425 - 775);
        for (; ZMXpDo < Bz3FBNPD;) {
            if (!('(' != TQs1wtub7[ZMXpDo]))
                lDGHqVo = lDGHqVo + (743 - 742);
            if (!(')' != TQs1wtub7[ZMXpDo]))
                snxVaSy74 = snxVaSy74 + (844 - 843);
            if (snxVaSy74 > lDGHqVo) {
                waRtTdsGpiPZ = (451 - 450);
                break;
            }
            ZMXpDo = (1167 - 674) - 492;
        }
    }
    return (waRtTdsGpiPZ);
}

snxVaSy74 (char TQs1wtub7 [], int gIofiQu) {
    int waRtTdsGpiPZ;
    int snxVaSy74;
    int lDGHqVo;
    int ZMXpDo;
    waRtTdsGpiPZ = (483 - 483);
    snxVaSy74 = (503 - 503);
    lDGHqVo = (370 - 370);
    {
        ZMXpDo = (787 - 138) - (1336 - 688);
        for (; (632 - 632) <= ZMXpDo;) {
            if (!('(' != TQs1wtub7[ZMXpDo]))
                lDGHqVo = lDGHqVo + (421 - 420);
            if (!(')' != TQs1wtub7[ZMXpDo]))
                snxVaSy74 = snxVaSy74 + (758 - 757);
            if (lDGHqVo > snxVaSy74) {
                waRtTdsGpiPZ = (11 - 10);
                break;
            }
            ZMXpDo = ZMXpDo -(1000 - 999);
        }
    }
    return (waRtTdsGpiPZ);
}

GdN2y8 (char aQ8u9IGMNcih [], char RxUeovRpk2S []) {
    int X35kos0Mp9u;
    int gIofiQu;
    X35kos0Mp9u = strlen (aQ8u9IGMNcih);
    for (gIofiQu = (681 - 681); gIofiQu < X35kos0Mp9u; gIofiQu = gIofiQu + (113 - 112)) {
        RxUeovRpk2S[gIofiQu] = ' ';
        if (!(')' != aQ8u9IGMNcih[gIofiQu])) {
            if (!((977 - 976) != snxVaSy74 (aQ8u9IGMNcih, gIofiQu)))
                RxUeovRpk2S[gIofiQu] = ' ';
            else
                RxUeovRpk2S[gIofiQu] = '?';
        }
        if (!('(' != aQ8u9IGMNcih[gIofiQu])) {
            if (!((633 - 632) != lDGHqVo (aQ8u9IGMNcih, gIofiQu, X35kos0Mp9u)))
                !(' ' != RxUeovRpk2S[gIofiQu]);
            else
                RxUeovRpk2S[gIofiQu] = '$';
        }
    }
    RxUeovRpk2S[X35kos0Mp9u] = '\0';
    return;
}

main () {
    struct   aaa {
        char aQ8u9IGMNcih [(554 - 449)];
        char RxUeovRpk2S [(346 - 241)];
    };
    struct   aaa p2LkWt8B [(474 - 454)];
    int gIofiQu;
    int Bz3FBNPD;
    int ZMXpDo;
    scanf ("%d\n", &Bz3FBNPD);
    {
        gIofiQu = (874 - 874);
        for (; Bz3FBNPD > gIofiQu;) {
            gets (p2LkWt8B[gIofiQu].aQ8u9IGMNcih);
            GdN2y8 (p2LkWt8B[gIofiQu].aQ8u9IGMNcih, p2LkWt8B[gIofiQu].RxUeovRpk2S);
            gIofiQu = gIofiQu + (777 - 776);
        }
    }
    {
        gIofiQu = 0;
        for (; Bz3FBNPD > gIofiQu;) {
            printf ("%s\n%s\n", p2LkWt8B[gIofiQu].aQ8u9IGMNcih, p2LkWt8B[gIofiQu].RxUeovRpk2S);
            gIofiQu = gIofiQu + 1;
        }
    }
}

