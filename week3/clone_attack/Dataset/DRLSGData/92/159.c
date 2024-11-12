void  MjxVw78qcLO (int *bmMjT7, int *Kx09syLR, int HcVTJ4Rr, int TOhLtlnG7aZ, int wHPTegKuG) {
    int VkBRQdO, YZtdAnlm, GelEXAzbn, index1, index2;
    {
        VkBRQdO = HcVTJ4Rr;
        for (; VkBRQdO <= wHPTegKuG;) {
            Kx09syLR[VkBRQdO] = bmMjT7[VkBRQdO];
            VkBRQdO++;
        }
    }
    {
        YZtdAnlm = (375 - 374);
        while (YZtdAnlm <= TOhLtlnG7aZ -wHPTegKuG) {
            Kx09syLR[TOhLtlnG7aZ -YZtdAnlm+(217 - 216)] = bmMjT7[YZtdAnlm +wHPTegKuG];
            YZtdAnlm++;
        }
    }
    {
        index1 = HcVTJ4Rr;
        GelEXAzbn = HcVTJ4Rr;
        index2 = TOhLtlnG7aZ;
        while (GelEXAzbn <= TOhLtlnG7aZ) {
            if (Kx09syLR[index1] <= Kx09syLR[index2]) {
                bmMjT7[GelEXAzbn] = Kx09syLR[index1++];
            }
            else {
                bmMjT7[GelEXAzbn] = Kx09syLR[index2--];
            }
            GelEXAzbn++;
        }
    }
}

void  FafvtyH (int *bmMjT7, int *Kx09syLR, int HcVTJ4Rr, int TOhLtlnG7aZ) {
    if (HcVTJ4Rr < TOhLtlnG7aZ) {
        int wHPTegKuG = (HcVTJ4Rr +TOhLtlnG7aZ) / (353 - 351);
        FafvtyH (bmMjT7, Kx09syLR, HcVTJ4Rr, wHPTegKuG);
        FafvtyH (bmMjT7, Kx09syLR, wHPTegKuG + (398 - 397), TOhLtlnG7aZ);
        MjxVw78qcLO (bmMjT7, Kx09syLR, HcVTJ4Rr, TOhLtlnG7aZ, wHPTegKuG);
    }
}

int main () {
    int Lu2GcXYJ = 0;
    int M1wXlJkGzPNf [(1427 - 422)] = {0};
    int OMC83X9 [(1391 - 386)] = {(648 - 648)};
    int tfud9pbl;
    int tNHrnldtS = tfud9pbl - 1;
    int g6cyhSXN = tfud9pbl - 1;
    int TSiyCmxwVeaf [(1621 - 616)] = {0};
    int CkhOs7KNfinx = 0;
    int THEgYy2 = 0;
    int VkBRQdO;
    int KTLIbo [(1983 - 978)] = {(892 - 892)};
    scanf ("%d", &tfud9pbl);
    if (tfud9pbl == (656 - 656)) {
        return (175 - 175);
    }
    {
        VkBRQdO = (289 - 289);
        while (tfud9pbl > VkBRQdO) {
            scanf ("%d", &OMC83X9[VkBRQdO]);
            VkBRQdO++;
        }
    }
    {
        VkBRQdO = 459 - 459;
        for (; VkBRQdO < tfud9pbl;) {
            scanf ("%d", &KTLIbo[VkBRQdO]);
            VkBRQdO++;
        }
    }
    FafvtyH (OMC83X9, TSiyCmxwVeaf, 0, tfud9pbl - (862 - 861));
    FafvtyH (KTLIbo, M1wXlJkGzPNf, 0, tfud9pbl - 1);
    main ();
    for (; g6cyhSXN >= Lu2GcXYJ;) {
        if (OMC83X9[tNHrnldtS] > KTLIbo[g6cyhSXN]) {
            THEgYy2 += (1016 - 816);
            g6cyhSXN--;
            tNHrnldtS--;
        }
        else {
            if (OMC83X9[tNHrnldtS] < KTLIbo[g6cyhSXN]) {
                THEgYy2 -= (800 - 600);
                CkhOs7KNfinx++;
                g6cyhSXN--;
            }
            else {
                if (OMC83X9[CkhOs7KNfinx] > KTLIbo[Lu2GcXYJ]) {
                    Lu2GcXYJ++;
                    CkhOs7KNfinx++;
                    THEgYy2 += (623 - 423);
                }
                else {
                    if (OMC83X9[CkhOs7KNfinx] < KTLIbo[g6cyhSXN]) {
                        THEgYy2 -= 200;
                    }
                    CkhOs7KNfinx++;
                    g6cyhSXN--;
                }
            }
        }
    }
    printf ("%d\n", THEgYy2);
}

