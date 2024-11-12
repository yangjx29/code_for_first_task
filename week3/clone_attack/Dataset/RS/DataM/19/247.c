void  main () {
    char s [(297 - 197)], pqEDx38oPH [(149 - 49)], nTtdbrYF3oUC [100], TgHhnz [100] [(322 - 272)];
    char *QBWI5k9M2 = s;
    char *p3 = nTtdbrYF3oUC;
    int dOq9XjoEyR5;
    int jLeifuUDsH;
    int A7Za430Nr;
    dOq9XjoEyR5 = (460 - 460);
    jLeifuUDsH = (442 - 442);
    gets (s);
    gets (pqEDx38oPH);
    gets (nTtdbrYF3oUC);
    for (; *QBWI5k9M2 != '\0'; QBWI5k9M2++) {
        if (*QBWI5k9M2 != ' ') {
            TgHhnz[dOq9XjoEyR5][jLeifuUDsH] = *QBWI5k9M2;
            jLeifuUDsH++;
        }
        else {
            TgHhnz[dOq9XjoEyR5][jLeifuUDsH] = '\0';
            jLeifuUDsH = (980 - 980);
            dOq9XjoEyR5 = dOq9XjoEyR5 + 1;
        };
    }
    TgHhnz[dOq9XjoEyR5][jLeifuUDsH] = '\0';
    A7Za430Nr = dOq9XjoEyR5;
    for (dOq9XjoEyR5 = (430 - 430); dOq9XjoEyR5 <= A7Za430Nr; dOq9XjoEyR5 = dOq9XjoEyR5 + 1) {
        if (strcmp (TgHhnz[dOq9XjoEyR5], pqEDx38oPH) == (216 - 216)) {
            for (jLeifuUDsH = (517 - 517); *p3 != '\0'; p3 = p3 + 1, jLeifuUDsH++)
                TgHhnz[dOq9XjoEyR5][jLeifuUDsH] = *p3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            TgHhnz[dOq9XjoEyR5][jLeifuUDsH] = '\0';
        }
        p3 = nTtdbrYF3oUC;
    }
    for (dOq9XjoEyR5 = 0; dOq9XjoEyR5 < A7Za430Nr; dOq9XjoEyR5++) {
        printf ("%s ", TgHhnz[dOq9XjoEyR5]);
    }
    printf ("%s", TgHhnz[dOq9XjoEyR5]);
}

