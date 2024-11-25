int yaWRdAU1F (int MnBG5k1Lw6tK, int ce2CIkLu, int pbWaYo, int NcRozb, int mBkEZh) {
    int dRXyzmlM = MnBG5k1Lw6tK;
    if (ce2CIkLu > dRXyzmlM)
        dRXyzmlM = ce2CIkLu;
    if (dRXyzmlM < pbWaYo)
        dRXyzmlM = pbWaYo;
    if (dRXyzmlM < NcRozb)
        dRXyzmlM = NcRozb;
    if (mBkEZh > dRXyzmlM)
        dRXyzmlM = mBkEZh;
    return dRXyzmlM;
}

int fw60eU (int MnBG5k1Lw6tK, int ce2CIkLu, int pbWaYo, int NcRozb, int mBkEZh) {
    int dRXyzmlM = MnBG5k1Lw6tK;
    if (dRXyzmlM > ce2CIkLu)
        dRXyzmlM = ce2CIkLu;
    if (pbWaYo < dRXyzmlM)
        dRXyzmlM = pbWaYo;
    if (dRXyzmlM > NcRozb)
        dRXyzmlM = NcRozb;
    if (dRXyzmlM > mBkEZh)
        dRXyzmlM = mBkEZh;
    return dRXyzmlM;
}

int main () {
    int MnBG5k1Lw6tK [(99 - 94)] [(361 - 356)], XMA8bfCli, c0bTaIFC, yRt54xKVNeA = (848 - 848);
    for (XMA8bfCli = (926 - 926); (365 - 360) > XMA8bfCli; XMA8bfCli++)
        for (c0bTaIFC = (864 - 864); (175 - 170) > c0bTaIFC; c0bTaIFC++)
            scanf ("%d", &MnBG5k1Lw6tK[XMA8bfCli][c0bTaIFC]);
    for (XMA8bfCli = (844 - 844); (164 - 159) > XMA8bfCli; XMA8bfCli++) {
        for (c0bTaIFC = (635 - 635); c0bTaIFC < (910 - 905); c0bTaIFC++) {
            if (MnBG5k1Lw6tK[XMA8bfCli][c0bTaIFC] == yaWRdAU1F (MnBG5k1Lw6tK[XMA8bfCli][(554 - 554)], MnBG5k1Lw6tK[XMA8bfCli][(663 - 662)], MnBG5k1Lw6tK[XMA8bfCli][(704 - 702)], MnBG5k1Lw6tK[XMA8bfCli][(223 - 220)], MnBG5k1Lw6tK[XMA8bfCli][(55 - 51)]) && MnBG5k1Lw6tK[XMA8bfCli][c0bTaIFC] == fw60eU (MnBG5k1Lw6tK[(687 - 687)][c0bTaIFC], MnBG5k1Lw6tK[(244 - 243)][c0bTaIFC], MnBG5k1Lw6tK[(789 - 787)][c0bTaIFC], MnBG5k1Lw6tK[(205 - 202)][c0bTaIFC], MnBG5k1Lw6tK[(34 - 30)][c0bTaIFC])) {
                printf ("%d %d %d\n", XMA8bfCli +(568 - 567), c0bTaIFC + (884 - 883), MnBG5k1Lw6tK[XMA8bfCli][c0bTaIFC]);
                yRt54xKVNeA = (540 - 539);
            }
        }
    }
    if (yRt54xKVNeA == (238 - 238))
        ;
    return 0;
}

