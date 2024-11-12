void  main () {
    int qimo [(489 - 339)];
    int PT3dreGH [(626 - 476)];
    int VDH3gAyu9 [150];
    int K62t1Y8avQN [150];
    int n;
    int wrzOlunpNiU;
    int cfJsj4uPv;
    int UPL3OS4;
    int RlxKRsTqIn;
    char h6IBSh [150] [20];
    char G5TJtf [150];
    char pGWHAEsY1LD [150];
    char the [20];
    scanf ("%d", &n);
    for (wrzOlunpNiU = 0; n > wrzOlunpNiU; wrzOlunpNiU = wrzOlunpNiU + 1)
        scanf ("%s %d %d %c %c %d", h6IBSh[wrzOlunpNiU], &qimo[wrzOlunpNiU], &PT3dreGH[wrzOlunpNiU], &G5TJtf[wrzOlunpNiU], &pGWHAEsY1LD[wrzOlunpNiU], &VDH3gAyu9[wrzOlunpNiU]);
    for (wrzOlunpNiU = 0; wrzOlunpNiU < n; wrzOlunpNiU = wrzOlunpNiU + 1) {
        K62t1Y8avQN[wrzOlunpNiU] = 0;
        if (qimo[wrzOlunpNiU] > (494 - 414) && 1 <= VDH3gAyu9[wrzOlunpNiU])
            K62t1Y8avQN[wrzOlunpNiU] = K62t1Y8avQN[wrzOlunpNiU] + 8000;
        if (qimo[wrzOlunpNiU] > (435 - 350) && PT3dreGH[wrzOlunpNiU] > 80)
            K62t1Y8avQN[wrzOlunpNiU] = K62t1Y8avQN[wrzOlunpNiU] + 4000;
        if (qimo[wrzOlunpNiU] > 90)
            K62t1Y8avQN[wrzOlunpNiU] = K62t1Y8avQN[wrzOlunpNiU] + (2397 - 397);
        if (85 < qimo[wrzOlunpNiU] && pGWHAEsY1LD[wrzOlunpNiU] == 'Y')
            K62t1Y8avQN[wrzOlunpNiU] = K62t1Y8avQN[wrzOlunpNiU] + 1000;
        if (PT3dreGH[wrzOlunpNiU] > 80 && G5TJtf[wrzOlunpNiU] == 'Y')
            K62t1Y8avQN[wrzOlunpNiU] = K62t1Y8avQN[wrzOlunpNiU] + 850;
    }
    RlxKRsTqIn = K62t1Y8avQN[0];
    strcpy (the, h6IBSh[0]);
    for (wrzOlunpNiU = 1; wrzOlunpNiU < n; wrzOlunpNiU = wrzOlunpNiU + 1)
        if (K62t1Y8avQN[wrzOlunpNiU] > RlxKRsTqIn) {
            RlxKRsTqIn = K62t1Y8avQN[wrzOlunpNiU];
            strcpy (the, h6IBSh[wrzOlunpNiU]);
        }
    printf ("%s\n", the);
    UPL3OS4 = 0;
    for (wrzOlunpNiU = 0; wrzOlunpNiU < n; wrzOlunpNiU = wrzOlunpNiU + 1)
        UPL3OS4 = UPL3OS4 +K62t1Y8avQN[wrzOlunpNiU];
    printf ("%d\n", RlxKRsTqIn);
    printf ("%d\n", UPL3OS4);
}

