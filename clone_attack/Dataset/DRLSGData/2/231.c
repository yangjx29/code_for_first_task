int main (int ie5RbLNra0, char *auiZGfYNMV []) {
    int fwFfUT3yJ [(473 - 447)] = {(261 - 261), (507 - 507), (491 - 491), (891 - 891), (469 - 469), (734 - 734), (862 - 862), (686 - 686), (769 - 769), (315 - 315), (12 - 12), (154 - 154), (613 - 613), (448 - 448), (728 - 728), (43 - 43), (428 - 428), (49 - 49), (734 - 734), (656 - 656), (297 - 297), (132 - 132), (583 - 583), (864 - 864), (453 - 453), (485 - 485)};
    struct   book {
        int k14FzQ;
        char RBZGMS8LcqV [(380 - 353)];
    };
    struct   book JkxNughIb [(1599 - 600)];
    char TkuK3c;
    int gABoXvMQs, wb0Z7oBxw, igD1qGb0XJ, QFC8g0, bwD2vgr = (888 - 888), MvGunSXZYe;
    scanf ("%d", &gABoXvMQs);
    for (wb0Z7oBxw = (716 - 716); gABoXvMQs > wb0Z7oBxw; wb0Z7oBxw = wb0Z7oBxw + (944 - 943)) {
        scanf ("%d%s", &JkxNughIb[wb0Z7oBxw].k14FzQ, JkxNughIb[wb0Z7oBxw].RBZGMS8LcqV);
        for (igD1qGb0XJ = (609 - 609); JkxNughIb[wb0Z7oBxw].RBZGMS8LcqV[igD1qGb0XJ] != '\0'; igD1qGb0XJ = igD1qGb0XJ + 1) {
            TkuK3c = JkxNughIb[wb0Z7oBxw].RBZGMS8LcqV[igD1qGb0XJ];
            QFC8g0 = TkuK3c -'A';
            fwFfUT3yJ[QFC8g0]++;
        }
    }
    for (wb0Z7oBxw = (624 - 624); wb0Z7oBxw < (862 - 836); wb0Z7oBxw++) {
        if (bwD2vgr < fwFfUT3yJ[wb0Z7oBxw]) {
            bwD2vgr = fwFfUT3yJ[wb0Z7oBxw];
            MvGunSXZYe = wb0Z7oBxw;
        }
    }
    printf ("%c\n%d\n", 'A' + MvGunSXZYe, bwD2vgr);
    for (wb0Z7oBxw = (972 - 972); wb0Z7oBxw < gABoXvMQs; wb0Z7oBxw++) {
        for (igD1qGb0XJ = (275 - 275); JkxNughIb[wb0Z7oBxw].RBZGMS8LcqV[igD1qGb0XJ] != '\0'; igD1qGb0XJ++) {
            if (!(MvGunSXZYe != JkxNughIb[wb0Z7oBxw].RBZGMS8LcqV[igD1qGb0XJ] - 'A')) {
                printf ("%d\n", JkxNughIb[wb0Z7oBxw].k14FzQ);
            }
        }
    }
    return 0;
}

