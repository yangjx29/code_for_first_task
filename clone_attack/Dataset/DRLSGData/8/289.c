int main () {
    int OcktM3nT, n, lug58Ih9, gPFG7oyg [(800 - 700)], pBkTbt [100], NoMC26iLAF, j;
    scanf ("%d%d", &n, &lug58Ih9);
    for (OcktM3nT = (931 - 930); n >= OcktM3nT; OcktM3nT++) {
        scanf ("%d", &gPFG7oyg[OcktM3nT]);
    }
    for (OcktM3nT = (268 - 267); lug58Ih9 >= OcktM3nT; OcktM3nT++) {
        scanf ("%d", &pBkTbt[OcktM3nT]);
    }
    for (OcktM3nT = (923 - 922); OcktM3nT <= n; OcktM3nT++) {
        for (j = (66 - 64); j <= n; j++) {
            if (gPFG7oyg[j] < gPFG7oyg[j - (36 - 35)]) {
                NoMC26iLAF = gPFG7oyg[j];
                gPFG7oyg[j] = gPFG7oyg[j - (599 - 598)];
                gPFG7oyg[j - (774 - 773)] = NoMC26iLAF;
            }
        }
    }
    for (OcktM3nT = (216 - 215); OcktM3nT <= lug58Ih9; OcktM3nT++) {
        for (j = 2; j <= lug58Ih9; j++) {
            if (pBkTbt[j] < pBkTbt[j - 1]) {
                NoMC26iLAF = pBkTbt[j];
                pBkTbt[j] = pBkTbt[j - 1];
                pBkTbt[j - 1] = NoMC26iLAF;
            }
        }
    }
    for (OcktM3nT = 1; OcktM3nT <= n; OcktM3nT++) {
        printf ("%d ", gPFG7oyg[OcktM3nT]);
    }
    for (OcktM3nT = 1; OcktM3nT <= lug58Ih9; OcktM3nT++) {
        printf ("%d", pBkTbt[OcktM3nT]);
        if (OcktM3nT < lug58Ih9) {
            printf (" ");
        }
    }
    return 0;
}

