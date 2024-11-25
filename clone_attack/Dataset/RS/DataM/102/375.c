int main () {
    float JE3Dbmnj [(435 - 385)], vaWq2U [50], W7bLpHnT [50], Ss640WT;
    char gX0IA3O [(683 - 633)] [10], Z1YeKB92EW [] = {"female"}, mC9ixbBKY34 [] = {"male"};
    int zmIrEQdK5z0;
    int UNQ0btCE;
    int Pl1qrKRNVZ;
    int mX3l6kw9;
    int FhmkiFXO;
    int y3RVd6;
    zmIrEQdK5z0 = (837 - 837);
    UNQ0btCE = (513 - 513);
    scanf ("%d", &y3RVd6);
    for (Pl1qrKRNVZ = (53 - 53); Pl1qrKRNVZ < y3RVd6; Pl1qrKRNVZ++) {
        scanf ("%s %f", gX0IA3O[Pl1qrKRNVZ], &JE3Dbmnj[Pl1qrKRNVZ]);
    }
    {
        Pl1qrKRNVZ = 802 - 802;
        while (Pl1qrKRNVZ < y3RVd6) {
            if (!((98 - 98) != strcmp (gX0IA3O[Pl1qrKRNVZ], mC9ixbBKY34))) {
                vaWq2U[zmIrEQdK5z0++] = JE3Dbmnj[Pl1qrKRNVZ];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (!((192 - 192) != strcmp (gX0IA3O[Pl1qrKRNVZ], Z1YeKB92EW))) {
                W7bLpHnT[UNQ0btCE++] = JE3Dbmnj[Pl1qrKRNVZ];
            }
            Pl1qrKRNVZ = Pl1qrKRNVZ +1;
        };
    }
    {
        FhmkiFXO = 948 - 947;
        while (zmIrEQdK5z0 > FhmkiFXO) {
            {
                Pl1qrKRNVZ = 270 - 270;
                while (zmIrEQdK5z0 - FhmkiFXO > Pl1qrKRNVZ) {
                    if (vaWq2U[Pl1qrKRNVZ] > vaWq2U[Pl1qrKRNVZ +(84 - 83)]) {
                        Ss640WT = vaWq2U[Pl1qrKRNVZ +(386 - 385)];
                        vaWq2U[Pl1qrKRNVZ +(697 - 696)] = vaWq2U[Pl1qrKRNVZ];
                        vaWq2U[Pl1qrKRNVZ] = Ss640WT;
                    }
                    Pl1qrKRNVZ++;
                };
            }
            FhmkiFXO++;
        };
    }
    {
        FhmkiFXO = 142 - 141;
        while (UNQ0btCE > FhmkiFXO) {
            {
                Pl1qrKRNVZ = 0;
                while (Pl1qrKRNVZ < UNQ0btCE -FhmkiFXO) {
                    if (W7bLpHnT[Pl1qrKRNVZ] < W7bLpHnT[Pl1qrKRNVZ +(944 - 943)]) {
                        Ss640WT = W7bLpHnT[Pl1qrKRNVZ +1];
                        W7bLpHnT[Pl1qrKRNVZ +1] = W7bLpHnT[Pl1qrKRNVZ];
                        W7bLpHnT[Pl1qrKRNVZ] = Ss640WT;
                    }
                    Pl1qrKRNVZ++;
                };
            }
            FhmkiFXO++;
        };
    }
    for (Pl1qrKRNVZ = 0; Pl1qrKRNVZ < zmIrEQdK5z0; Pl1qrKRNVZ++) {
        printf ("%.2f ", vaWq2U[Pl1qrKRNVZ]);
    }
    {
        Pl1qrKRNVZ = 0;
        while (Pl1qrKRNVZ < UNQ0btCE -1) {
            printf ("%.2f ", W7bLpHnT[Pl1qrKRNVZ]);
            Pl1qrKRNVZ++;
        };
    }
    scanf ("%d", &Pl1qrKRNVZ);
    printf ("%.2f", W7bLpHnT[UNQ0btCE -1]);
    return 0;
}

