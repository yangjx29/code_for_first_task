main () {
    int O1UyOfebYP;
    scanf ("%d", &O1UyOfebYP);
    float *NCEaknfso = (float *) malloc ((O1UyOfebYP +(547 - 546)) * sizeof (float));
    float *isJflpL = (float *) malloc ((O1UyOfebYP +(767 - 766)) * sizeof (float));
    NCEaknfso[(158 - 158)] = isJflpL[(500 - 500)] = (930 - 930);
    float MtfV2m3g = 0;
    for (int hUNziSj = (998 - 997);
    O1UyOfebYP >= hUNziSj; hUNziSj = hUNziSj + (750 - 749)) {
        scanf ("%f %f", &NCEaknfso[hUNziSj], &isJflpL[hUNziSj]);
    }
    for (int hUNziSj = (957 - 956);
    O1UyOfebYP >= hUNziSj; hUNziSj = hUNziSj + (497 - 496)) {
        int gpqdWBTJw = hUNziSj + 1;
        for (; gpqdWBTJw <= O1UyOfebYP;) {
            float EdHkxp8 = 0;
            float gBjgNOwEPv = NCEaknfso[hUNziSj] - NCEaknfso[gpqdWBTJw];
            float CwCnsYdvk6e = isJflpL[hUNziSj] - isJflpL[gpqdWBTJw];
            EdHkxp8 = sqrt (gBjgNOwEPv * gBjgNOwEPv + CwCnsYdvk6e *CwCnsYdvk6e);
            if (EdHkxp8 > MtfV2m3g)
                MtfV2m3g = EdHkxp8;
            gpqdWBTJw = gpqdWBTJw + 1;
        }
    }
    printf ("%.4f", MtfV2m3g);
}

