char maxASCII (char *LkpA9QlWuVLO) {
    int SlSqFTzRBZP, DtB8XM4x0H = 0;
    int UzjV7v3umL2f;
    UzjV7v3umL2f = strlen (LkpA9QlWuVLO);
    for (SlSqFTzRBZP = 0; SlSqFTzRBZP < UzjV7v3umL2f; SlSqFTzRBZP++) {
        if (LkpA9QlWuVLO[SlSqFTzRBZP] > DtB8XM4x0H)
            DtB8XM4x0H = LkpA9QlWuVLO[SlSqFTzRBZP];
    }
    return DtB8XM4x0H;
}

int tzbBn4TUL0NS (char wXvPlfR9 [], char esb1RyTK8N) {
    int OsvZE2o;
    {
        OsvZE2o = 0;
        while (strlen (wXvPlfR9) > OsvZE2o) {
            if (!(esb1RyTK8N != wXvPlfR9[OsvZE2o])) {
                return OsvZE2o;
            }
            OsvZE2o = OsvZE2o +1;
        };
    };
}

int main (int CovlsMuBX8, char *crI79FBb []) {
    int rank;
    char LkpA9QlWuVLO [100] [10];
    char tHeuVsC [100] [4];
    int ezbHfE1;
    int SlSqFTzRBZP;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int DtB8XM4x0H;
    DtB8XM4x0H = 0;
    while (scanf ("%s%s", LkpA9QlWuVLO[DtB8XM4x0H], tHeuVsC[DtB8XM4x0H]) != EOF)
        DtB8XM4x0H++;
    {
        SlSqFTzRBZP = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        while (SlSqFTzRBZP < DtB8XM4x0H) {
            int fZSCa1PD2cYf;
            ezbHfE1 = maxASCII (LkpA9QlWuVLO[SlSqFTzRBZP]);
            rank = tzbBn4TUL0NS (LkpA9QlWuVLO[SlSqFTzRBZP], ezbHfE1);
            {
                fZSCa1PD2cYf = 0;
                while (fZSCa1PD2cYf <= rank) {
                    cout << LkpA9QlWuVLO[SlSqFTzRBZP][fZSCa1PD2cYf];
                    fZSCa1PD2cYf = fZSCa1PD2cYf + 1;
                };
            }
            cout << tHeuVsC[SlSqFTzRBZP];
            for (fZSCa1PD2cYf = rank + 1; fZSCa1PD2cYf < strlen (LkpA9QlWuVLO[SlSqFTzRBZP]); fZSCa1PD2cYf++) {
                cout << LkpA9QlWuVLO[SlSqFTzRBZP][fZSCa1PD2cYf];
            }
            SlSqFTzRBZP++;
            cout << endl;
        };
    }
    return EXIT_SUCCESS;
}

