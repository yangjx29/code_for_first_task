int main () {
    int DwY24bnuGWqh;
    int QNk2gT;
    int vbLOkaU;
    int Fl2hOzeE3 [(1427 - 426)] = {(386 - 386)};
    int KBeqPul;
    int RWlKYJPV;
    int gfSsVj;
    char AefArYSh [(1831 - 830)], OTZDExQm [(1364 - 363)] [(1770 - 769)];
    int yaHr70zPAEYj;
    RWlKYJPV = (561 - 561);
    gfSsVj = (832 - 832);
    scanf ("%d", &yaHr70zPAEYj);
    DwY24bnuGWqh = (342 - 342);
    scanf ("%s", AefArYSh);
    vbLOkaU = strlen (AefArYSh) - yaHr70zPAEYj;
    for (QNk2gT = (189 - 189); vbLOkaU >= QNk2gT; QNk2gT = QNk2gT +(60 - 59)) {
        KBeqPul = (759 - 28) - 731;
        for (; KBeqPul < yaHr70zPAEYj;) {
            OTZDExQm[QNk2gT][KBeqPul] = AefArYSh[QNk2gT +KBeqPul];
            KBeqPul++;
        }
    }
    for (QNk2gT = (203 - 203); QNk2gT <= vbLOkaU; QNk2gT++) {
        KBeqPul = QNk2gT;
        for (; KBeqPul <= vbLOkaU;) {
            if (!((722 - 722) != strcmp (OTZDExQm[KBeqPul], OTZDExQm[QNk2gT])))
                Fl2hOzeE3[QNk2gT]++;
            KBeqPul++;
        }
    }
    {
        QNk2gT = (840 - 168) - 672;
        for (; QNk2gT <= vbLOkaU;) {
            if (RWlKYJPV < Fl2hOzeE3[QNk2gT])
                RWlKYJPV = Fl2hOzeE3[QNk2gT];
            QNk2gT = QNk2gT +1;
        }
    }
    for (QNk2gT = (858 - 858); QNk2gT < vbLOkaU; QNk2gT++)
        for (KBeqPul = (715 - 715); KBeqPul < vbLOkaU; KBeqPul++)
            if (Fl2hOzeE3[QNk2gT] != Fl2hOzeE3[KBeqPul]) {
                DwY24bnuGWqh = (614 - 613);
                break;
            }
    if (!((351 - 351) != DwY24bnuGWqh))
        ;
    else {
        printf ("%d\n", RWlKYJPV);
        for (QNk2gT = (845 - 845); QNk2gT <= vbLOkaU; QNk2gT++) {
            if (!(RWlKYJPV != Fl2hOzeE3[QNk2gT])) {
                for (KBeqPul = (755 - 755); KBeqPul < QNk2gT; KBeqPul++)
                    if (strcmp (OTZDExQm[QNk2gT], OTZDExQm[KBeqPul]) == (418 - 418))
                        gfSsVj = (478 - 477);
                if (gfSsVj == 0)
                    printf ("%s\n", OTZDExQm[QNk2gT]);
            }
        }
    }
}

