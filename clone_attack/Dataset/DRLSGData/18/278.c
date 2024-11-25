int main () {
    int p0TUqzDSI, c5aCeEI, KhOYr0wuDeG, HEg9xQMtUifr, Xv7n4yW, enWGjoV1AMag, Ryx1bIuShoN [100] [100];
    cin >> p0TUqzDSI;
    for (HEg9xQMtUifr = 0; HEg9xQMtUifr < p0TUqzDSI; HEg9xQMtUifr = HEg9xQMtUifr +1) {
        for (c5aCeEI = 0; p0TUqzDSI > c5aCeEI; c5aCeEI = c5aCeEI + 1) {
            for (KhOYr0wuDeG = 0; KhOYr0wuDeG < p0TUqzDSI; KhOYr0wuDeG = KhOYr0wuDeG +1)
                cin >> Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG];
        }
        enWGjoV1AMag = 0;
        for (Xv7n4yW = 0; Xv7n4yW < p0TUqzDSI - 1; Xv7n4yW++) {
            int min2;
            int Cvke4RG;
            for (c5aCeEI = 0; c5aCeEI < p0TUqzDSI - Xv7n4yW; c5aCeEI = c5aCeEI + 1) {
                Cvke4RG = Ryx1bIuShoN[c5aCeEI][0];
                for (KhOYr0wuDeG = 0; KhOYr0wuDeG < p0TUqzDSI - Xv7n4yW; KhOYr0wuDeG++) {
                    if (Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG] < Cvke4RG)
                        Cvke4RG = Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG];
                }
                for (KhOYr0wuDeG = 0; KhOYr0wuDeG < p0TUqzDSI - Xv7n4yW; KhOYr0wuDeG++) {
                    Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG] = Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG] - Cvke4RG;
                }
            }
            for (KhOYr0wuDeG = 0; KhOYr0wuDeG < p0TUqzDSI - Xv7n4yW; KhOYr0wuDeG++) {
                min2 = Ryx1bIuShoN[0][KhOYr0wuDeG];
                for (c5aCeEI = 0; c5aCeEI < p0TUqzDSI - Xv7n4yW; c5aCeEI++) {
                    if (Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG] < min2)
                        min2 = Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG];
                }
                for (c5aCeEI = 0; p0TUqzDSI - Xv7n4yW > c5aCeEI; c5aCeEI++) {
                    Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG] = Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG] - min2;
                }
            }
            enWGjoV1AMag += Ryx1bIuShoN[1][1];
            for (c5aCeEI = 1; c5aCeEI < p0TUqzDSI - Xv7n4yW -1; c5aCeEI++) {
                for (KhOYr0wuDeG = 0; p0TUqzDSI - Xv7n4yW > KhOYr0wuDeG; KhOYr0wuDeG++)
                    Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG] = Ryx1bIuShoN[c5aCeEI + 1][KhOYr0wuDeG];
            }
            for (KhOYr0wuDeG = 1; KhOYr0wuDeG < p0TUqzDSI - Xv7n4yW -1; KhOYr0wuDeG++) {
                for (c5aCeEI = 0; c5aCeEI < p0TUqzDSI - Xv7n4yW -1; c5aCeEI++)
                    Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG] = Ryx1bIuShoN[c5aCeEI][KhOYr0wuDeG +1];
            }
        }
        cout << enWGjoV1AMag << endl;
    }
    return 0;
}

