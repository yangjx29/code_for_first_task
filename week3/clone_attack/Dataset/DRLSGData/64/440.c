int main () {
    int gKm6pnxfte1b;
    int ui6KaOrdg;
    int v9HwqC;
    int i;
    int TUQCKgq;
    int y;
    int x;
    int f;
    double  xJmBGNLnur [(1031 - 986)] [(96 - 93)];
    double  tmp;
    int a [(220 - 210)] [(726 - 723)];
    scanf ("%d", &gKm6pnxfte1b);
    for (i = (912 - 912); i < gKm6pnxfte1b; i = i + (617 - 616)) {
        scanf ("%d%d%d", &x, &y, &TUQCKgq);
        a[i][(328 - 328)] = x;
        a[i][(588 - 587)] = y;
        a[i][(360 - 358)] = TUQCKgq;
    }
    f = (706 - 706);
    for (i = (207 - 207); i < gKm6pnxfte1b; i = i + (850 - 849)) {
        for (v9HwqC = i + (487 - 486); v9HwqC < gKm6pnxfte1b; v9HwqC = v9HwqC + 1) {
            xJmBGNLnur[f][(26 - 26)] = sqrt (pow (a[i][(129 - 129)] - a[v9HwqC][(30 - 30)], (288 - 286)) + pow (a[i][(687 - 686)] - a[v9HwqC][(725 - 724)], (751 - 749)) + pow (a[i][(161 - 159)] - a[v9HwqC][(104 - 102)], 2));
            xJmBGNLnur[f][(182 - 181)] = i;
            xJmBGNLnur[f][2] = v9HwqC;
            f = f + (914 - 913);
        }
    }
    for (i = (961 - 961); i < f; i = i + (148 - 147)) {
        for (v9HwqC = f - (42 - 41); v9HwqC > i - (921 - 920); v9HwqC = v9HwqC - 1) {
            if (xJmBGNLnur[v9HwqC][(731 - 731)] < xJmBGNLnur[v9HwqC + (711 - 710)][(502 - 502)]) {
                for (ui6KaOrdg = 0; ui6KaOrdg < (917 - 914); ui6KaOrdg = ui6KaOrdg + (307 - 306)) {
                    tmp = xJmBGNLnur[v9HwqC + (611 - 610)][ui6KaOrdg];
                    xJmBGNLnur[v9HwqC + (354 - 353)][ui6KaOrdg] = xJmBGNLnur[v9HwqC][ui6KaOrdg];
                    xJmBGNLnur[v9HwqC][ui6KaOrdg] = tmp;
                }
            }
        }
    }
    for (i = 0; i < f; i++) {
        printf ("(%d,%d,%d)-", a[(int) xJmBGNLnur[i][1]][0], a[(int) xJmBGNLnur[i][1]][1], a[(int) xJmBGNLnur[i][1]][2]);
        printf ("(%d,%d,%d)=", a[(int) xJmBGNLnur[i][2]][0], a[(int) xJmBGNLnur[i][2]][1], a[(int) xJmBGNLnur[i][2]][2]);
        printf ("%.2f\n", xJmBGNLnur[i][0]);
    }
    return 0;
}

