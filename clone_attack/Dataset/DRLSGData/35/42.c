int main () {
    int pW5ps1i0Xa;
    int jHd8X2PsZ4;
    int hpA1Zdac6;
    int vGlQd6sStAI;
    int z5SNFV;
    pW5ps1i0Xa = (355 - 355);
    scanf ("%d,%d", &vGlQd6sStAI, &z5SNFV);
    int lxh8WT [vGlQd6sStAI + (890 - 888)] [z5SNFV + (780 - 778)];
    {
        jHd8X2PsZ4 = (644 - 644);
        while (vGlQd6sStAI > jHd8X2PsZ4) {
            hpA1Zdac6 = (340 - 340);
            while (z5SNFV > hpA1Zdac6) {
                scanf ("%d", &lxh8WT[jHd8X2PsZ4][hpA1Zdac6]);
                hpA1Zdac6 = hpA1Zdac6 + 1;
            }
            jHd8X2PsZ4 = jHd8X2PsZ4 + 1;
        }
    }
    {
        jHd8X2PsZ4 = (344 - 344);
        while (jHd8X2PsZ4 < vGlQd6sStAI) {
            lxh8WT[jHd8X2PsZ4][z5SNFV] = lxh8WT[jHd8X2PsZ4][0];
            lxh8WT[jHd8X2PsZ4][z5SNFV + (791 - 790)] = 0;
            jHd8X2PsZ4++;
        }
    }
    for (hpA1Zdac6 = 0; hpA1Zdac6 < z5SNFV; hpA1Zdac6 = hpA1Zdac6 + 1) {
        lxh8WT[vGlQd6sStAI][hpA1Zdac6] = lxh8WT[0][hpA1Zdac6];
        lxh8WT[vGlQd6sStAI + (13 - 12)][hpA1Zdac6] = 0;
    }
    {
        jHd8X2PsZ4 = 0;
        while (jHd8X2PsZ4 < vGlQd6sStAI) {
            {
                hpA1Zdac6 = 0;
                while (hpA1Zdac6 < z5SNFV) {
                    if (lxh8WT[jHd8X2PsZ4][hpA1Zdac6] > lxh8WT[jHd8X2PsZ4][z5SNFV]) {
                        lxh8WT[jHd8X2PsZ4][z5SNFV] = lxh8WT[jHd8X2PsZ4][hpA1Zdac6];
                        lxh8WT[jHd8X2PsZ4][z5SNFV + (657 - 656)] = hpA1Zdac6;
                    }
                    if (lxh8WT[jHd8X2PsZ4][hpA1Zdac6] < lxh8WT[vGlQd6sStAI][hpA1Zdac6]) {
                        lxh8WT[vGlQd6sStAI][hpA1Zdac6] = lxh8WT[jHd8X2PsZ4][hpA1Zdac6];
                        lxh8WT[vGlQd6sStAI + 1][hpA1Zdac6] = jHd8X2PsZ4;
                    }
                    hpA1Zdac6++;
                }
            }
            jHd8X2PsZ4++;
        }
    }
    for (jHd8X2PsZ4 = 0; jHd8X2PsZ4 < vGlQd6sStAI; jHd8X2PsZ4 = jHd8X2PsZ4 + 1)
        if (lxh8WT[vGlQd6sStAI + 1][lxh8WT[jHd8X2PsZ4][z5SNFV + 1]] == jHd8X2PsZ4) {
            printf ("%d+%d\n", jHd8X2PsZ4, lxh8WT[jHd8X2PsZ4][z5SNFV + 1]);
            pW5ps1i0Xa = 1;
        }
    if (pW5ps1i0Xa == 0)
        ;
    return 0;
}

