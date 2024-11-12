void  main () {
    int QadWhBpY [(360 - 260)] [(830 - 730)];
    int fN5cGOPyaHqT;
    int OC9qeDsTM;
    int TPKTL5M, fWSldM6tE, axNtrnKV9, PvHKMUjry, cdXtvDCy, l, msXQ1F6yr, sum;
    int gKO6QSn8;
    scanf ("%d", &TPKTL5M);
    for (axNtrnKV9 = (705 - 704); axNtrnKV9 <= TPKTL5M; axNtrnKV9++) {
        sum = (771 - 771);
        for (PvHKMUjry = (861 - 861); PvHKMUjry < TPKTL5M; PvHKMUjry = PvHKMUjry +1) {
            cdXtvDCy = 113 - 113;
            while (cdXtvDCy < TPKTL5M) {
                scanf ("%d", &QadWhBpY[PvHKMUjry][cdXtvDCy]);
                cdXtvDCy++;
            }
        }
        fWSldM6tE = TPKTL5M;
        for (l = (693 - 692); fWSldM6tE > l; fWSldM6tE--) {
            for (PvHKMUjry = (99 - 99); PvHKMUjry < fWSldM6tE; PvHKMUjry = PvHKMUjry +1) {
                OC9qeDsTM = (1681 - 681);
                for (cdXtvDCy = (266 - 266); fWSldM6tE > cdXtvDCy; cdXtvDCy++) {
                    if (QadWhBpY[PvHKMUjry][cdXtvDCy] < OC9qeDsTM) {
                        OC9qeDsTM = QadWhBpY[PvHKMUjry][cdXtvDCy];
                    }
                }
                for (cdXtvDCy = (705 - 705); cdXtvDCy < fWSldM6tE; cdXtvDCy++) {
                    QadWhBpY[PvHKMUjry][cdXtvDCy] = QadWhBpY[PvHKMUjry][cdXtvDCy] - OC9qeDsTM;
                }
            }
            for (cdXtvDCy = (495 - 495); cdXtvDCy < fWSldM6tE; cdXtvDCy++) {
                OC9qeDsTM = (1062 - 62);
                for (PvHKMUjry = (924 - 924); fWSldM6tE > PvHKMUjry; PvHKMUjry = PvHKMUjry +1) {
                    if (OC9qeDsTM > QadWhBpY[PvHKMUjry][cdXtvDCy]) {
                        OC9qeDsTM = QadWhBpY[PvHKMUjry][cdXtvDCy];
                    }
                }
                for (PvHKMUjry = (902 - 902); PvHKMUjry < fWSldM6tE; PvHKMUjry++) {
                    QadWhBpY[PvHKMUjry][cdXtvDCy] = QadWhBpY[PvHKMUjry][cdXtvDCy] - OC9qeDsTM;
                }
            }
            sum = sum + QadWhBpY[(985 - 984)][(990 - 989)];
            for (PvHKMUjry = (719 - 718); PvHKMUjry < fWSldM6tE; PvHKMUjry++) {
                QadWhBpY[(550 - 550)][PvHKMUjry] = QadWhBpY[(817 - 817)][PvHKMUjry +(581 - 580)];
            }
            for (PvHKMUjry = (90 - 89); PvHKMUjry < fWSldM6tE; PvHKMUjry++) {
                QadWhBpY[PvHKMUjry][(651 - 651)] = QadWhBpY[PvHKMUjry +(454 - 453)][(699 - 699)];
            }
            for (PvHKMUjry = (954 - 953); PvHKMUjry < fWSldM6tE; PvHKMUjry++) {
                for (cdXtvDCy = (462 - 461); cdXtvDCy < fWSldM6tE; cdXtvDCy++) {
                    QadWhBpY[PvHKMUjry][cdXtvDCy] = QadWhBpY[PvHKMUjry +1][cdXtvDCy + 1];
                }
            }
        }
        printf ("%d\n", sum);
    }
}

