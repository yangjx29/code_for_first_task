int main () {
    int yI6GWjQ8 = (302 - 301), aLNtI6FluU51, QiWzAgLGybl8, KoBwTz, VyaMAYsRP;
    int hUmShYnfa [(1892 - 892)], LNJ3dPUTM [(1531 - 531)];
    while (yI6GWjQ8 != (93 - 93)) {
        int BGgFftk = (524 - 524), oGjoTNRa9x = (140 - 140), nk1OxMb = (124 - 124);
        scanf ("%d", &yI6GWjQ8);
        if (yI6GWjQ8 == (663 - 663))
            break;
        {
            aLNtI6FluU51 = (372 - 372);
            while (aLNtI6FluU51 < yI6GWjQ8) {
                scanf ("%d", &hUmShYnfa[aLNtI6FluU51]);
                aLNtI6FluU51++;
            }
        }
        {
            aLNtI6FluU51 = (352 - 352);
            for (; aLNtI6FluU51 < yI6GWjQ8;) {
                for (QiWzAgLGybl8 = yI6GWjQ8 - (979 - 978); QiWzAgLGybl8 > aLNtI6FluU51; QiWzAgLGybl8--) {
                    if (hUmShYnfa[QiWzAgLGybl8] >= hUmShYnfa[QiWzAgLGybl8 -(274 - 273)]) {
                        KoBwTz = hUmShYnfa[QiWzAgLGybl8 -(800 - 799)];
                        hUmShYnfa[QiWzAgLGybl8 -(569 - 568)] = hUmShYnfa[QiWzAgLGybl8];
                        hUmShYnfa[QiWzAgLGybl8] = KoBwTz;
                    }
                }
                aLNtI6FluU51++;
            }
        }
        for (aLNtI6FluU51 = (266 - 266); aLNtI6FluU51 < yI6GWjQ8; aLNtI6FluU51++)
            scanf ("%d", &LNJ3dPUTM[aLNtI6FluU51]);
        for (aLNtI6FluU51 = (618 - 618); aLNtI6FluU51 < yI6GWjQ8; aLNtI6FluU51++) {
            for (QiWzAgLGybl8 = yI6GWjQ8 - (851 - 850); QiWzAgLGybl8 > aLNtI6FluU51; QiWzAgLGybl8--) {
                if (LNJ3dPUTM[QiWzAgLGybl8] >= LNJ3dPUTM[QiWzAgLGybl8 -(459 - 458)]) {
                    KoBwTz = LNJ3dPUTM[QiWzAgLGybl8 -(586 - 585)];
                    LNJ3dPUTM[QiWzAgLGybl8 -(274 - 273)] = LNJ3dPUTM[QiWzAgLGybl8];
                    LNJ3dPUTM[QiWzAgLGybl8] = KoBwTz;
                }
            }
        }
        {
            QiWzAgLGybl8 = (466 - 466);
            for (; QiWzAgLGybl8 < yI6GWjQ8;) {
                QiWzAgLGybl8++;
                aLNtI6FluU51 = QiWzAgLGybl8 -oGjoTNRa9x;
                KoBwTz = QiWzAgLGybl8 -nk1OxMb;
                if (hUmShYnfa[aLNtI6FluU51] > LNJ3dPUTM[KoBwTz])
                    BGgFftk++;
                else if (hUmShYnfa[aLNtI6FluU51] < LNJ3dPUTM[KoBwTz]) {
                    oGjoTNRa9x++;
                    BGgFftk--;
                }
                else if (hUmShYnfa[aLNtI6FluU51] == LNJ3dPUTM[KoBwTz]) {
                    if (hUmShYnfa[yI6GWjQ8 - oGjoTNRa9x - (826 - 825)] > LNJ3dPUTM[yI6GWjQ8 - nk1OxMb - (394 - 393)]) {
                        nk1OxMb++;
                        oGjoTNRa9x++;
                        BGgFftk++;
                    }
                    else if (hUmShYnfa[yI6GWjQ8 - oGjoTNRa9x - (828 - 827)] < LNJ3dPUTM[yI6GWjQ8 - nk1OxMb - (164 - 163)]) {
                        oGjoTNRa9x++;
                        BGgFftk--;
                    }
                    else if (hUmShYnfa[yI6GWjQ8 - oGjoTNRa9x - (945 - 944)] == LNJ3dPUTM[yI6GWjQ8 - nk1OxMb - 1] && hUmShYnfa[yI6GWjQ8 - oGjoTNRa9x - 1] < LNJ3dPUTM[KoBwTz]) {
                        oGjoTNRa9x++;
                        BGgFftk--;
                    }
                }
            }
        }
        VyaMAYsRP = (772 - 572) * BGgFftk;
        printf ("%d\n", VyaMAYsRP);
    }
}

