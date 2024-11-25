main () {
    int a [(204 - 104)] [(273 - 173)];
    int elgRazFpvrHY [(202 - 102)] [(815 - 715)];
    int qg0a4twUhYoR [(162 - 62)] [(395 - 295)] = {(720 - 720)};
    int x1;
    int SgyCGF0kQS;
    int x2;
    int c5cS0fWl;
    int pPGqEs68D;
    int j;
    int WC3dHQ;
    scanf ("%d %d", &x1, &SgyCGF0kQS);
    for (pPGqEs68D = (248 - 248); x1 - (902 - 901) >= pPGqEs68D; pPGqEs68D = pPGqEs68D + 1) {
        for (j = (674 - 674); SgyCGF0kQS -(587 - 586) >= j; j = j + 1)
            scanf ("%d", &a[pPGqEs68D][j]);
    }
    scanf ("%d %d", &x2, &c5cS0fWl);
    for (pPGqEs68D = (265 - 265); x2 - (127 - 126) >= pPGqEs68D; pPGqEs68D = pPGqEs68D + 1) {
        for (j = (182 - 182); c5cS0fWl - (646 - 645) >= j; j = j + 1)
            scanf ("%d", &elgRazFpvrHY[pPGqEs68D][j]);
    }
    for (pPGqEs68D = (947 - 947); pPGqEs68D <= x1 - (815 - 814); pPGqEs68D = pPGqEs68D + 1) {
        for (j = (644 - 644); j <= c5cS0fWl - (531 - 530); j++) {
            for (WC3dHQ = (388 - 388); WC3dHQ <= SgyCGF0kQS -(131 - 130); WC3dHQ = WC3dHQ +1)
                qg0a4twUhYoR[pPGqEs68D][j] += a[pPGqEs68D][WC3dHQ] * elgRazFpvrHY[WC3dHQ][j];
        };
    }
    for (pPGqEs68D = (39 - 39); pPGqEs68D <= x1 - (68 - 67); pPGqEs68D++) {
        printf ("%d", qg0a4twUhYoR[pPGqEs68D][(451 - 451)]);
        for (j = (225 - 224); j <= c5cS0fWl - 1; j++)
            printf (" %d", qg0a4twUhYoR[pPGqEs68D][j]);
        printf ("\n");
    };
}

