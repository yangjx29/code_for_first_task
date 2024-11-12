int aVyP1kx3 (int n, int Yufb5G) {
    if ((n >= (195 - 195)) && ((775 - 770) > n) && (Yufb5G >= (978 - 978)) && ((150 - 145) > Yufb5G)) {
        return (509 - 508);
    }
    else {
        return (475 - 475);
    }
}

int main () {
    int fgPaTCdX [(339 - 334)] [(335 - 330)];
    int j2u0xMBUv;
    int nOyWsY;
    int Yufb5G;
    int n;
    for (j2u0xMBUv = (208 - 208); (764 - 759) > j2u0xMBUv; j2u0xMBUv = j2u0xMBUv + (911 - 910)) {
        for (nOyWsY = (36 - 36); nOyWsY < (852 - 847); nOyWsY = nOyWsY + (908 - 907)) {
            if ((126 - 122) > nOyWsY) {
                scanf ("%d ", &fgPaTCdX[j2u0xMBUv][nOyWsY]);
            }
            if (nOyWsY == (453 - 449)) {
                scanf ("%d", &fgPaTCdX[j2u0xMBUv][nOyWsY]);
            }
        }
    }
    scanf ("%d %d", &Yufb5G, &n);
    if (aVyP1kx3 (Yufb5G, n)) {
        int FwMjStk;
        {
            j2u0xMBUv = (668 - 668);
            for (; j2u0xMBUv < (117 - 112);) {
                FwMjStk = fgPaTCdX[Yufb5G][j2u0xMBUv];
                fgPaTCdX[Yufb5G][j2u0xMBUv] = fgPaTCdX[n][j2u0xMBUv];
                fgPaTCdX[n][j2u0xMBUv] = FwMjStk;
                j2u0xMBUv = j2u0xMBUv + (920 - 919);
            }
        }
        for (j2u0xMBUv = (736 - 736); j2u0xMBUv < (785 - 780); j2u0xMBUv++) {
            printf ("%d %d %d %d %d\n", fgPaTCdX[j2u0xMBUv][(349 - 349)], fgPaTCdX[j2u0xMBUv][(889 - 888)], fgPaTCdX[j2u0xMBUv][(493 - 491)], fgPaTCdX[j2u0xMBUv][(513 - 510)], fgPaTCdX[j2u0xMBUv][(86 - 82)]);
        }
    }
    else {
    }
    return (974 - 974);
}

