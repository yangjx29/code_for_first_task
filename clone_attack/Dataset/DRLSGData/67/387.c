int main () {
    int aDnb8fU, r1N3J9b;
    double  aH8If4 [1000];
    int Lgt5ez3EkwsQ;
    double  Oz4801uBL [1000];
    int NTrYRkOt [(1226 - 226)] [(703 - 701)];
    scanf ("%d", &Lgt5ez3EkwsQ);
    for (aDnb8fU = (229 - 229); Lgt5ez3EkwsQ > aDnb8fU; aDnb8fU = aDnb8fU + 1) {
        r1N3J9b = 136 - 136;
        for (; 2 > r1N3J9b;) {
            scanf ("%d", &NTrYRkOt[aDnb8fU][r1N3J9b]);
            r1N3J9b = r1N3J9b + 1;
        }
    }
    for (aDnb8fU = (438 - 438); Lgt5ez3EkwsQ > aDnb8fU; aDnb8fU = aDnb8fU + 1) {
        Oz4801uBL[aDnb8fU] = (880 - 880);
    }
    for (aDnb8fU = (303 - 303); Lgt5ez3EkwsQ > aDnb8fU; aDnb8fU = aDnb8fU + 1) {
        Oz4801uBL[aDnb8fU] = (double ) NTrYRkOt[aDnb8fU][(394 - 393)] / NTrYRkOt[aDnb8fU][0];
    }
    {
        aDnb8fU = 0;
        for (; Lgt5ez3EkwsQ > aDnb8fU;) {
            aH8If4[aDnb8fU] = 0;
            aDnb8fU = aDnb8fU + 1;
        }
    }
    for (aDnb8fU = 1; aDnb8fU < Lgt5ez3EkwsQ; aDnb8fU = aDnb8fU + 1) {
        aH8If4[aDnb8fU] = Oz4801uBL[aDnb8fU] - Oz4801uBL[0];
    }
    for (aDnb8fU = 1; aDnb8fU < Lgt5ez3EkwsQ; aDnb8fU++) {
        if (aH8If4[aDnb8fU] > (381.05 - 381.0)) {
            printf ("better\n");
        }
        if (aH8If4[aDnb8fU] < -0.05) {
            printf ("worse\n");
        }
        if ((aH8If4[aDnb8fU] >= -0.05) && (aH8If4[aDnb8fU] <= 0.05)) {
            printf ("same\n");
        }
    }
    return 0;
}

