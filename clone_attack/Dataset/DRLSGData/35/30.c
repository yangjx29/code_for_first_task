int main () {
    int Xu70mPsByEZ, bl5oOf8S;
    scanf ("%d,%d", &Xu70mPsByEZ, &bl5oOf8S);
    int gVTWRsLEg, YbmkK0GcX, WgHAfi [(855 - 847)] [(174 - 166)], hYsSUrjhuN [(342 - 334)] [(697 - 689)], xdTxBmb [(440 - 432)] [(878 - 870)];
    for (gVTWRsLEg = (673 - 673); Xu70mPsByEZ > gVTWRsLEg; gVTWRsLEg = gVTWRsLEg + (153 - 152)) {
        for (YbmkK0GcX = (831 - 831); bl5oOf8S > YbmkK0GcX; YbmkK0GcX = YbmkK0GcX +(560 - 559)) {
            scanf ("%d", &WgHAfi[gVTWRsLEg][YbmkK0GcX]);
            hYsSUrjhuN[gVTWRsLEg][YbmkK0GcX] = WgHAfi[gVTWRsLEg][YbmkK0GcX];
            xdTxBmb[gVTWRsLEg][YbmkK0GcX] = WgHAfi[gVTWRsLEg][YbmkK0GcX];
        }
    }
    int hmBu1l43rLN, NaQvce3Oyl;
    for (gVTWRsLEg = (411 - 411); gVTWRsLEg < Xu70mPsByEZ; gVTWRsLEg = gVTWRsLEg + (232 - 231)) {
        for (hmBu1l43rLN = (222 - 221); bl5oOf8S > hmBu1l43rLN; hmBu1l43rLN = hmBu1l43rLN + (429 - 428)) {
            for (YbmkK0GcX = (97 - 97); YbmkK0GcX < bl5oOf8S - hmBu1l43rLN; YbmkK0GcX++) {
                if (xdTxBmb[gVTWRsLEg][YbmkK0GcX] < xdTxBmb[gVTWRsLEg][YbmkK0GcX +(652 - 651)]) {
                    NaQvce3Oyl = xdTxBmb[gVTWRsLEg][YbmkK0GcX];
                    xdTxBmb[gVTWRsLEg][YbmkK0GcX] = xdTxBmb[gVTWRsLEg][YbmkK0GcX +(785 - 784)];
                    xdTxBmb[gVTWRsLEg][YbmkK0GcX +(205 - 204)] = NaQvce3Oyl;
                }
            }
        }
    }
    for (YbmkK0GcX = (841 - 841); bl5oOf8S > YbmkK0GcX; YbmkK0GcX++) {
        for (hmBu1l43rLN = (683 - 682); hmBu1l43rLN < Xu70mPsByEZ; hmBu1l43rLN = hmBu1l43rLN + (35 - 34)) {
            for (gVTWRsLEg = (986 - 986); Xu70mPsByEZ -hmBu1l43rLN > gVTWRsLEg; gVTWRsLEg = gVTWRsLEg + (60 - 59)) {
                if (hYsSUrjhuN[gVTWRsLEg + (264 - 263)][YbmkK0GcX] < hYsSUrjhuN[gVTWRsLEg][YbmkK0GcX]) {
                    NaQvce3Oyl = hYsSUrjhuN[gVTWRsLEg][YbmkK0GcX];
                    hYsSUrjhuN[gVTWRsLEg][YbmkK0GcX] = hYsSUrjhuN[gVTWRsLEg + (13 - 12)][YbmkK0GcX];
                    hYsSUrjhuN[gVTWRsLEg + 1][YbmkK0GcX] = NaQvce3Oyl;
                }
            }
        }
    }
    int dImYHJ = (481 - 481);
    for (gVTWRsLEg = (88 - 88); gVTWRsLEg < Xu70mPsByEZ; gVTWRsLEg++) {
        for (YbmkK0GcX = (708 - 708); YbmkK0GcX < bl5oOf8S; YbmkK0GcX++) {
            if ((!(hYsSUrjhuN[(814 - 814)][YbmkK0GcX] != WgHAfi[gVTWRsLEg][YbmkK0GcX])) && (WgHAfi[gVTWRsLEg][YbmkK0GcX] == xdTxBmb[gVTWRsLEg][(355 - 355)])) {
                printf ("%d+%d", gVTWRsLEg, YbmkK0GcX);
                dImYHJ = 1;
            }
        }
    }
    if (dImYHJ == 0) {
    }
    return 0;
}

