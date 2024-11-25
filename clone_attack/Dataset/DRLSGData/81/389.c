int VaYgEI (int mbOzKlWB, int xosMRGEU4qBb);

int main () {
    int YxT2WZg1t3J;
    int L0mlOU3;
    int JXGNf5l7;
    int uvNczn;
    int bYIw0A;
    int SHrCXSD4 [DZ4fKYp] [ZnifE5];
    {
        L0mlOU3 = 0;
        for (; L0mlOU3 < DZ4fKYp;) {
            JXGNf5l7 = 0;
            for (; JXGNf5l7 < ZnifE5;) {
                scanf ("%d", &SHrCXSD4[L0mlOU3][JXGNf5l7]);
                JXGNf5l7++;
            }
            L0mlOU3++;
        }
    }
    scanf ("%d%d", &uvNczn, &bYIw0A);
    YxT2WZg1t3J = VaYgEI (uvNczn, bYIw0A);
    if (YxT2WZg1t3J == 0) {
    }
    else {
        int oqHtyD [5] [5] = {0};
        {
            L0mlOU3 = 0;
            for (; L0mlOU3 < ZnifE5;) {
                oqHtyD[0][L0mlOU3] = SHrCXSD4[uvNczn][L0mlOU3];
                SHrCXSD4[uvNczn][L0mlOU3] = SHrCXSD4[bYIw0A][L0mlOU3];
                SHrCXSD4[bYIw0A][L0mlOU3] = oqHtyD[0][L0mlOU3];
                L0mlOU3++;
            }
        }
        {
            L0mlOU3 = 0;
            while (L0mlOU3 < DZ4fKYp) {
                if (L0mlOU3 == 0) {
                    JXGNf5l7 = 0;
                    for (; JXGNf5l7 < ZnifE5;) {
                        if (JXGNf5l7 == 0) {
                            printf ("%d", SHrCXSD4[L0mlOU3][JXGNf5l7]);
                        }
                        else {
                            printf (" %d", SHrCXSD4[L0mlOU3][JXGNf5l7]);
                        }
                        JXGNf5l7++;
                    }
                }
                else {
                    {
                        JXGNf5l7 = 0;
                        for (; JXGNf5l7 < ZnifE5;) {
                            if (JXGNf5l7 == 0) {
                                printf ("%d", SHrCXSD4[L0mlOU3][JXGNf5l7]);
                            }
                            else {
                                printf (" %d", SHrCXSD4[L0mlOU3][JXGNf5l7]);
                            }
                            JXGNf5l7++;
                        }
                    }
                    printf ("\n");
                }
                L0mlOU3++;
            }
        }
    }
    return 0;
}

int VaYgEI (int mbOzKlWB, int xosMRGEU4qBb) {
    if (mbOzKlWB < DZ4fKYp &&xosMRGEU4qBb < ZnifE5) {
        return 1;
    }
    else {
        return 0;
    }
}

