void  main () {
    int qxgrTAn4H;
    int yGePwKS3vX;
    int iJeUwIAT;
    int g3E6uJ5KgDQp;
    int *bLD1OE;
    int vxrcknWTVzJP [(1132 - 132)];
    int AoSTKExFs1tQ [(1085 - 85)] = {(437 - 437)};
    scanf ("%d", &qxgrTAn4H);
    bLD1OE = vxrcknWTVzJP;
    for (yGePwKS3vX = (471 - 471); qxgrTAn4H > yGePwKS3vX; yGePwKS3vX = yGePwKS3vX + (518 - 517), bLD1OE = bLD1OE + (822 - 821))
        scanf ("%d", bLD1OE);
    bLD1OE = vxrcknWTVzJP;
    for (yGePwKS3vX = (680 - 680); qxgrTAn4H > yGePwKS3vX; yGePwKS3vX++, bLD1OE++) {
        for (g3E6uJ5KgDQp = (487 - 487); g3E6uJ5KgDQp < yGePwKS3vX; g3E6uJ5KgDQp++)
            if (!(*bLD1OE != *(vxrcknWTVzJP + g3E6uJ5KgDQp)))
                AoSTKExFs1tQ[yGePwKS3vX]++;
    }
    iJeUwIAT = (743 - 743);
    for (yGePwKS3vX = qxgrTAn4H - (656 - 655); yGePwKS3vX >= (939 - 939); yGePwKS3vX = yGePwKS3vX - (566 - 565))
        if (AoSTKExFs1tQ[yGePwKS3vX] == 0) {
            iJeUwIAT = yGePwKS3vX;
            break;
        }
    bLD1OE = vxrcknWTVzJP;
    for (yGePwKS3vX = 0; yGePwKS3vX < iJeUwIAT; yGePwKS3vX++, bLD1OE++) {
        if (AoSTKExFs1tQ[yGePwKS3vX] == 0) {
            printf ("%d,", vxrcknWTVzJP[yGePwKS3vX]);
        }
    }
    printf ("%d", vxrcknWTVzJP[iJeUwIAT]);
}

