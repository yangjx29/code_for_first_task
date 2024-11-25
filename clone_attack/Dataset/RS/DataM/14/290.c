int main (int argc, char *argv []) {
    int ish5pE;
    int hxcWIMAdDV;
    int fID;
    int fG;
    int sID;
    int sG;
    int nf46ExvR;
    int tG;
    fID = (648 - 648);
    fG = (559 - 559);
    sID = (336 - 336);
    sG = (663 - 663);
    nf46ExvR = (370 - 370);
    tG = (986 - 986);
    struct   student {
        int ID, Ch, Ma;
    }
    temp;
    scanf ("%d", &hxcWIMAdDV);
    for (ish5pE = (454 - 454); ish5pE < hxcWIMAdDV; ish5pE++) {
        int aV39Wxve5;
        aV39Wxve5 = (957 - 957);
        scanf ("%d%d%d", &temp.ID, &temp.Ch, &temp.Ma);
        aV39Wxve5 = temp.Ch + temp.Ma;
        if (aV39Wxve5 == fG) {
            nf46ExvR = sID;
            sID = temp.ID;
            tG = sG;
            sG = aV39Wxve5;
        }
        if (fG < aV39Wxve5) {
            nf46ExvR = sID;
            sID = fID;
            fID = temp.ID;
            tG = sG;
            sG = fG;
            fG = aV39Wxve5;
        }
        if (aV39Wxve5 < fG && aV39Wxve5 > sG) {
            nf46ExvR = sID;
            sID = temp.ID;
            tG = sG;
            sG = aV39Wxve5;
        }
        if (aV39Wxve5 < sG && aV39Wxve5 > tG) {
            nf46ExvR = temp.ID;
            tG = aV39Wxve5;
        };
    }
    printf ("%d %d\n", fID, fG);
    printf ("%d %d\n", sID, sG);
    printf ("%d %d\n", nf46ExvR, tG);
    return 0;
}

