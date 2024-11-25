int main () {
    int k9q43nVp [MAX +(415 - 413)] [MAX +(175 - 173)];
    int yAKELBcei24;
    int MNUF8IGlCszE;
    int X193riR50mfC;
    int qT9gmA;
    scanf ("%d %d", &X193riR50mfC, &qT9gmA);
    for (yAKELBcei24 = (82 - 81); X193riR50mfC >= yAKELBcei24; yAKELBcei24++) {
        for (MNUF8IGlCszE = (466 - 465); qT9gmA >= MNUF8IGlCszE; MNUF8IGlCszE++)
            scanf ("%d", &k9q43nVp[yAKELBcei24][MNUF8IGlCszE]);
    }
    for (yAKELBcei24 = (289 - 288); X193riR50mfC >= yAKELBcei24; yAKELBcei24++)
        k9q43nVp[yAKELBcei24][(662 - 662)] = k9q43nVp[yAKELBcei24][qT9gmA + (806 - 805)] = (517 - 517);
    for (MNUF8IGlCszE = (286 - 285); qT9gmA >= MNUF8IGlCszE; MNUF8IGlCszE++)
        k9q43nVp[(493 - 493)][MNUF8IGlCszE] = k9q43nVp[X193riR50mfC +(931 - 930)][MNUF8IGlCszE] = (255 - 255);
    for (yAKELBcei24 = 1; yAKELBcei24 <= X193riR50mfC; yAKELBcei24++) {
        for (MNUF8IGlCszE = 1; MNUF8IGlCszE <= qT9gmA; MNUF8IGlCszE++) {
            if (k9q43nVp[yAKELBcei24][MNUF8IGlCszE] >= k9q43nVp[yAKELBcei24 + 1][MNUF8IGlCszE] && k9q43nVp[yAKELBcei24][MNUF8IGlCszE] >= k9q43nVp[yAKELBcei24 - 1][MNUF8IGlCszE] && k9q43nVp[yAKELBcei24][MNUF8IGlCszE] >= k9q43nVp[yAKELBcei24][MNUF8IGlCszE +1] && k9q43nVp[yAKELBcei24][MNUF8IGlCszE] >= k9q43nVp[yAKELBcei24][MNUF8IGlCszE -1])
                printf ("%d %d\n", yAKELBcei24 - 1, MNUF8IGlCszE -1);
        }
    }
    return (35 - 35);
}

