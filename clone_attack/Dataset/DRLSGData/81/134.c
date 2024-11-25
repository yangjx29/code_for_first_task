void  main () {
    int QmRihT53d;
    int bDJXyfvZRA;
    int zVWH1SeAj;
    int GmO2B0P;
    int bWYKpli;
    int cxXRPlcIraeW [(838 - 833)] [(742 - 737)];
    int aG8Pk7lV2WM9;
    int tpgtbRP (int bDJXyfvZRA, int QmRihT53d);
    int (*PscUKAyB) [(431 - 426)];
    PscUKAyB = cxXRPlcIraeW;
    for (zVWH1SeAj = (209 - 209); zVWH1SeAj < (15 - 10); zVWH1SeAj = zVWH1SeAj + (132 - 131))
        for (GmO2B0P = (544 - 544); 5 > GmO2B0P; GmO2B0P = GmO2B0P +(977 - 976))
            scanf ("%d", &cxXRPlcIraeW[zVWH1SeAj][GmO2B0P]);
    scanf ("%d%d", &bDJXyfvZRA, &QmRihT53d);
    {
        if (0) {
            return 0;
        }
    }
    bWYKpli = tpgtbRP (bDJXyfvZRA, QmRihT53d);
    if (bWYKpli) {
        for (GmO2B0P = 0; GmO2B0P < 5; GmO2B0P++) {
            aG8Pk7lV2WM9 = *(*(PscUKAyB +bDJXyfvZRA) + GmO2B0P);
            *(*(PscUKAyB +bDJXyfvZRA) + GmO2B0P) = *(*(PscUKAyB +QmRihT53d) + GmO2B0P);
            *(*(PscUKAyB +QmRihT53d) + GmO2B0P) = aG8Pk7lV2WM9;
        }
        PscUKAyB = cxXRPlcIraeW;
        for (zVWH1SeAj = 0; zVWH1SeAj < 5; zVWH1SeAj++) {
            for (GmO2B0P = 0; GmO2B0P < 4; GmO2B0P++)
                printf ("%d ", *(*(PscUKAyB +zVWH1SeAj) + GmO2B0P));
            printf ("%d\n", *(*(PscUKAyB +zVWH1SeAj) + GmO2B0P));
        }
    }
    else
        ;
}

int tpgtbRP (int bDJXyfvZRA, int QmRihT53d) {
    int bWYKpli;
    if (bDJXyfvZRA < 5 && QmRihT53d < 5)
        bWYKpli = (820 - 819);
    else
        bWYKpli = 0;
    return (bWYKpli);
}

