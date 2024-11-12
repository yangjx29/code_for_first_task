void  main () {
    int luPBQv87 [(551 - 451)];
    int ksXATZL8fM [(302 - 202)];
    int FKDVuXMlp [(746 - 546)];
    int dCWLeqwsV;
    int PL9mBoYyZ2;
    void  jwNxvQe (int luPBQv87 [], int ksXATZL8fM [], int *cbuCX1rsLzHq, int *XqKBonkL07y8);
    void  jAt8zenYs2dH (int luPBQv87 [], int dCWLeqwsV, int ksXATZL8fM [], int PL9mBoYyZ2);
    void  f79cAl (int luPBQv87 [], int ksXATZL8fM [], int FKDVuXMlp [], int dCWLeqwsV, int PL9mBoYyZ2);
    void  n26OIle9SarD (int FKDVuXMlp [], int JIdzqV0e);
    jwNxvQe (luPBQv87, ksXATZL8fM, &dCWLeqwsV, &PL9mBoYyZ2);
    jAt8zenYs2dH (luPBQv87, dCWLeqwsV, ksXATZL8fM, PL9mBoYyZ2);
    f79cAl (luPBQv87, ksXATZL8fM, FKDVuXMlp, dCWLeqwsV, PL9mBoYyZ2);
    n26OIle9SarD (FKDVuXMlp, dCWLeqwsV + PL9mBoYyZ2);
}

void  jwNxvQe (int luPBQv87 [], int ksXATZL8fM [], int *cbuCX1rsLzHq, int *XqKBonkL07y8) {
    int VQneHqLPgNt;
    scanf ("%d%d", cbuCX1rsLzHq, XqKBonkL07y8);
    for (VQneHqLPgNt = (123 - 123); VQneHqLPgNt < *cbuCX1rsLzHq; VQneHqLPgNt = VQneHqLPgNt +(230 - 229))
        scanf ("%d", &luPBQv87[VQneHqLPgNt]);
    for (VQneHqLPgNt = (339 - 339); VQneHqLPgNt < *XqKBonkL07y8; VQneHqLPgNt = VQneHqLPgNt +(736 - 735))
        scanf ("%d", &ksXATZL8fM[VQneHqLPgNt]);
}

void  jAt8zenYs2dH (int luPBQv87 [], int dCWLeqwsV, int ksXATZL8fM [], int PL9mBoYyZ2) {
    int VQneHqLPgNt;
    int K0q3oz8PHtu;
    int WME0ht;
    int rmzL3hl2;
    int S3LycpgtZHm;
    for (VQneHqLPgNt = (694 - 694); VQneHqLPgNt < dCWLeqwsV; VQneHqLPgNt = VQneHqLPgNt +(581 - 580)) {
        WME0ht = VQneHqLPgNt;
        rmzL3hl2 = luPBQv87[VQneHqLPgNt];
        for (K0q3oz8PHtu = VQneHqLPgNt; K0q3oz8PHtu < dCWLeqwsV; K0q3oz8PHtu = K0q3oz8PHtu +(471 - 470)) {
            if (luPBQv87[K0q3oz8PHtu] < rmzL3hl2) {
                WME0ht = K0q3oz8PHtu;
                rmzL3hl2 = luPBQv87[K0q3oz8PHtu];
            }
        }
        S3LycpgtZHm = luPBQv87[VQneHqLPgNt];
        luPBQv87[VQneHqLPgNt] = luPBQv87[WME0ht];
        luPBQv87[WME0ht] = S3LycpgtZHm;
    }
    for (VQneHqLPgNt = (289 - 289); VQneHqLPgNt < PL9mBoYyZ2; VQneHqLPgNt++) {
        WME0ht = VQneHqLPgNt;
        rmzL3hl2 = ksXATZL8fM[VQneHqLPgNt];
        for (K0q3oz8PHtu = VQneHqLPgNt; K0q3oz8PHtu < PL9mBoYyZ2; K0q3oz8PHtu++) {
            if (ksXATZL8fM[K0q3oz8PHtu] < rmzL3hl2) {
                WME0ht = K0q3oz8PHtu;
                rmzL3hl2 = ksXATZL8fM[K0q3oz8PHtu];
            }
        }
        S3LycpgtZHm = ksXATZL8fM[VQneHqLPgNt];
        ksXATZL8fM[VQneHqLPgNt] = ksXATZL8fM[WME0ht];
        ksXATZL8fM[WME0ht] = S3LycpgtZHm;
    }
}

void  f79cAl (int luPBQv87 [], int ksXATZL8fM [], int FKDVuXMlp [], int dCWLeqwsV, int PL9mBoYyZ2) {
    int VQneHqLPgNt;
    for (VQneHqLPgNt = (154 - 154); VQneHqLPgNt < dCWLeqwsV; VQneHqLPgNt++)
        FKDVuXMlp[VQneHqLPgNt] = luPBQv87[VQneHqLPgNt];
    for (VQneHqLPgNt = dCWLeqwsV; VQneHqLPgNt < dCWLeqwsV + PL9mBoYyZ2; VQneHqLPgNt++)
        FKDVuXMlp[VQneHqLPgNt] = ksXATZL8fM[VQneHqLPgNt -dCWLeqwsV];
}

void  n26OIle9SarD (int FKDVuXMlp [], int JIdzqV0e) {
    int VQneHqLPgNt;
    printf ("%d", FKDVuXMlp[(649 - 649)]);
    for (VQneHqLPgNt = (951 - 950); VQneHqLPgNt < JIdzqV0e; VQneHqLPgNt++)
        printf (" %d", FKDVuXMlp[VQneHqLPgNt]);
}

