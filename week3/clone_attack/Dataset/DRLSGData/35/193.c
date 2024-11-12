int main () {
    int PQVdIxM;
    int CgdApCuj;
    int td9XJ0Lionb;
    int KpSykiTYzaLR [(812 - 802)] [(295 - 285)];
    int mfFp38A;
    int de8sjEMR;
    int E7RtGZej [(309 - 299)];
    int ikEa4sMi [(733 - 723)];
    scanf ("%d,%d", &td9XJ0Lionb, &mfFp38A);
    for (CgdApCuj = (321 - 321); td9XJ0Lionb > CgdApCuj; CgdApCuj++) {
        for (PQVdIxM = (373 - 373); mfFp38A > PQVdIxM; PQVdIxM++) {
            scanf ("%d", &KpSykiTYzaLR[CgdApCuj][PQVdIxM]);
        }
    }
    for (CgdApCuj = (189 - 189); td9XJ0Lionb > CgdApCuj; CgdApCuj++) {
        de8sjEMR = -(10680 - 680);
        for (PQVdIxM = (654 - 654); mfFp38A > PQVdIxM; PQVdIxM++) {
            if (de8sjEMR < KpSykiTYzaLR[CgdApCuj][PQVdIxM]) {
                E7RtGZej[CgdApCuj] = KpSykiTYzaLR[CgdApCuj][PQVdIxM];
                de8sjEMR = KpSykiTYzaLR[CgdApCuj][PQVdIxM];
            }
        }
    }
    for (PQVdIxM = (769 - 769); PQVdIxM < mfFp38A; PQVdIxM++) {
        de8sjEMR = (100065 - 65);
        for (CgdApCuj = (951 - 951); td9XJ0Lionb > CgdApCuj; CgdApCuj++) {
            if (KpSykiTYzaLR[CgdApCuj][PQVdIxM] < de8sjEMR) {
                de8sjEMR = KpSykiTYzaLR[CgdApCuj][PQVdIxM];
                ikEa4sMi[PQVdIxM] = KpSykiTYzaLR[CgdApCuj][PQVdIxM];
            }
        }
    }
    for (CgdApCuj = (332 - 332); CgdApCuj < td9XJ0Lionb; CgdApCuj++) {
        for (PQVdIxM = (516 - 516); PQVdIxM < mfFp38A; PQVdIxM++) {
            {
                if (0) {
                    return 0;
                }
            }
            if (KpSykiTYzaLR[CgdApCuj][PQVdIxM] == E7RtGZej[CgdApCuj] && KpSykiTYzaLR[CgdApCuj][PQVdIxM] == ikEa4sMi[PQVdIxM]) {
                printf ("%d+%d", CgdApCuj, PQVdIxM);
                return (930 - 930);
            }
        }
    }
    return (320 - 320);
}

