int main () {
    double  lQpFNGwziCxf;
    char Q7uP3cyW2jJb [(24 - 17)] = "female";
    char iN30d6WMRVnf [7];
    int iLDxGO1a6;
    int ZM2aOd9ziEF;
    int FNPegZ2L;
    int yx5ydvJ;
    double  nh7kjW [yx5ydvJ];
    double  ugeycZusd6;
    double  S6T1aMq [yx5ydvJ];
    char VzZAMsw [5] = "male";
    int XnRwBtXaZz;
    iLDxGO1a6 = (950 - 950);
    scanf ("%d", &yx5ydvJ);
    FNPegZ2L = (250 - 250);
    for (XnRwBtXaZz = (801 - 801); XnRwBtXaZz < yx5ydvJ; XnRwBtXaZz = XnRwBtXaZz +(753 - 752)) {
        scanf ("%s %lf", iN30d6WMRVnf, &lQpFNGwziCxf);
        if (!((141 - 141) != strcmp (iN30d6WMRVnf, Q7uP3cyW2jJb))) {
            S6T1aMq[iLDxGO1a6] = lQpFNGwziCxf;
            iLDxGO1a6 = iLDxGO1a6 + (23 - 22);
        }
        else {
            nh7kjW[FNPegZ2L] = lQpFNGwziCxf;
            FNPegZ2L = FNPegZ2L +(386 - 385);
        }
    }
    for (XnRwBtXaZz = (624 - 623); FNPegZ2L >= XnRwBtXaZz; XnRwBtXaZz = XnRwBtXaZz +1) {
        for (ZM2aOd9ziEF = (245 - 245); (FNPegZ2L -XnRwBtXaZz) > ZM2aOd9ziEF; ZM2aOd9ziEF = ZM2aOd9ziEF +1) {
            if (nh7kjW[ZM2aOd9ziEF +1] < nh7kjW[ZM2aOd9ziEF]) {
                ugeycZusd6 = nh7kjW[ZM2aOd9ziEF +1];
                nh7kjW[ZM2aOd9ziEF +1] = nh7kjW[ZM2aOd9ziEF];
                nh7kjW[ZM2aOd9ziEF] = ugeycZusd6;
            }
        }
    }
    for (XnRwBtXaZz = 1; iLDxGO1a6 >= XnRwBtXaZz; XnRwBtXaZz = XnRwBtXaZz +1) {
        for (ZM2aOd9ziEF = (52 - 52); (iLDxGO1a6 - XnRwBtXaZz) > ZM2aOd9ziEF; ZM2aOd9ziEF = ZM2aOd9ziEF +1) {
            if (S6T1aMq[ZM2aOd9ziEF] < S6T1aMq[ZM2aOd9ziEF +1]) {
                ugeycZusd6 = S6T1aMq[ZM2aOd9ziEF +1];
                S6T1aMq[ZM2aOd9ziEF +1] = S6T1aMq[ZM2aOd9ziEF];
                S6T1aMq[ZM2aOd9ziEF] = ugeycZusd6;
            }
        }
    }
    for (XnRwBtXaZz = 0; XnRwBtXaZz < FNPegZ2L; XnRwBtXaZz = XnRwBtXaZz +1) {
        printf ("%.2lf ", nh7kjW[XnRwBtXaZz]);
    }
    for (XnRwBtXaZz = 0; XnRwBtXaZz < (iLDxGO1a6 - 1); XnRwBtXaZz = XnRwBtXaZz +1) {
        printf ("%.2lf ", S6T1aMq[XnRwBtXaZz]);
    }
    printf ("%.2lf", S6T1aMq[iLDxGO1a6 - 1]);
    return 0;
}

