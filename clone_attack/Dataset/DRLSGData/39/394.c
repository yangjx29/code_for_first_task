struct   student {
    char nUiMWCLmS [25];
    int U0iznusZ;
    int e6ZAwSB2tR;
    char VpV7Fo4RtOi;
    char OQe4slGSAuVF;
    int K7Tj1d;
    int jukNAb2a;
    struct   student *JVcpK718CDS;
};
struct   student *UuocenRaW (int oq3sGdQ) {
    struct   student *K4ZNkH;
    struct   student *gik7QceY, *YhfdgJB9;
    int o9otdLyR;
    K4ZNkH = NULL;
    gik7QceY = YhfdgJB9 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s %d %d %c %c %d", gik7QceY->nUiMWCLmS, &gik7QceY->U0iznusZ, &gik7QceY->e6ZAwSB2tR, &gik7QceY->VpV7Fo4RtOi, &gik7QceY->OQe4slGSAuVF, &gik7QceY->K7Tj1d);
    for (o9otdLyR = 0; oq3sGdQ - 1 > o9otdLyR; o9otdLyR = o9otdLyR + 1) {
        if (!(0 != o9otdLyR))
            K4ZNkH = gik7QceY;
        gik7QceY = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s %d %d %c %c %d", gik7QceY->nUiMWCLmS, &gik7QceY->U0iznusZ, &gik7QceY->e6ZAwSB2tR, &gik7QceY->VpV7Fo4RtOi, &gik7QceY->OQe4slGSAuVF, &gik7QceY->K7Tj1d);
        YhfdgJB9->JVcpK718CDS = gik7QceY;
        YhfdgJB9 = gik7QceY;
    }
    YhfdgJB9->JVcpK718CDS = NULL;
    return (K4ZNkH);
}

void  r0pdneluG3tb (struct   student *K4ZNkH) {
    struct   student *iSibsnUZFVcz;
    iSibsnUZFVcz = K4ZNkH;
    if (K4ZNkH != NULL)
        do {
            printf ("%s %d %d %c %c %d\n", iSibsnUZFVcz->nUiMWCLmS, iSibsnUZFVcz->U0iznusZ, iSibsnUZFVcz->e6ZAwSB2tR, iSibsnUZFVcz->VpV7Fo4RtOi, iSibsnUZFVcz->OQe4slGSAuVF, iSibsnUZFVcz->K7Tj1d);
            iSibsnUZFVcz = iSibsnUZFVcz->JVcpK718CDS;
        }
        while (iSibsnUZFVcz != NULL);
}

main () {
    struct   student *gik7QceY, *YhfdgJB9, *LPOWkvIq4b, *iSibsnUZFVcz;
    int oq3sGdQ, o9otdLyR, ItOBZqG, PyM5uaYP, K7Tj1d, B7wlB2ohn, pIKoXi, aOSJTAU6vcn = 0;
    struct   student g;
    scanf ("%d", &oq3sGdQ);
    iSibsnUZFVcz = UuocenRaW (oq3sGdQ);
    gik7QceY = iSibsnUZFVcz;
    for (o9otdLyR = 0; oq3sGdQ > o9otdLyR; o9otdLyR = o9otdLyR + 1) {
        gik7QceY->jukNAb2a = 0;
        if ((gik7QceY->U0iznusZ > 80) && (1 <= gik7QceY->K7Tj1d))
            gik7QceY->jukNAb2a = gik7QceY->jukNAb2a + 8000;
        if ((gik7QceY->U0iznusZ > 85) && (80 < gik7QceY->e6ZAwSB2tR))
            gik7QceY->jukNAb2a = gik7QceY->jukNAb2a + 4000;
        if (gik7QceY->U0iznusZ > 90)
            gik7QceY->jukNAb2a = gik7QceY->jukNAb2a + 2000;
        if ((!('Y' != gik7QceY->OQe4slGSAuVF)) && (gik7QceY->U0iznusZ > 85))
            gik7QceY->jukNAb2a = gik7QceY->jukNAb2a + 1000;
        if ((!('Y' != gik7QceY->VpV7Fo4RtOi)) && (gik7QceY->e6ZAwSB2tR > 80))
            gik7QceY->jukNAb2a = gik7QceY->jukNAb2a + 850;
        gik7QceY = gik7QceY->JVcpK718CDS;
    }
    YhfdgJB9 = iSibsnUZFVcz;
    LPOWkvIq4b = iSibsnUZFVcz;
    for (pIKoXi = 0, gik7QceY = iSibsnUZFVcz, YhfdgJB9 = iSibsnUZFVcz, o9otdLyR = 0; o9otdLyR < oq3sGdQ; o9otdLyR = o9otdLyR + 1) {
        if (gik7QceY->jukNAb2a > pIKoXi) {
            pIKoXi = gik7QceY->jukNAb2a;
            YhfdgJB9 = gik7QceY;
        }
        gik7QceY = gik7QceY->JVcpK718CDS;
    }
    for (o9otdLyR = 0, gik7QceY = iSibsnUZFVcz, B7wlB2ohn = 0; oq3sGdQ > o9otdLyR; o9otdLyR = o9otdLyR + 1) {
        B7wlB2ohn = B7wlB2ohn +gik7QceY->jukNAb2a;
        gik7QceY = gik7QceY->JVcpK718CDS;
    }
    printf ("%s\n%d\n%d\n", YhfdgJB9->nUiMWCLmS, YhfdgJB9->jukNAb2a, B7wlB2ohn);
    for (o9otdLyR = 0, gik7QceY = iSibsnUZFVcz; o9otdLyR < oq3sGdQ; o9otdLyR++) {
        free (gik7QceY);
        iSibsnUZFVcz = iSibsnUZFVcz->JVcpK718CDS;
        gik7QceY = iSibsnUZFVcz;
    }
}

