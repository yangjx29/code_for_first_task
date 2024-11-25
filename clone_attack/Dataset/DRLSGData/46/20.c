int main () {
    int z6SlxMot0mGg, NqjFTC6, r5cABQ0M [100] [100];
    int T9m4ZTYEGt, QaOXTZdBI, F6bWT3, lV1oDrRAix, pwrboWSN6YmQ, pMrd0a, SzKnjN, YtrPJwKm;
    scanf ("%d%d", &z6SlxMot0mGg, &NqjFTC6);
    {
        QaOXTZdBI = 1;
        while (z6SlxMot0mGg >= QaOXTZdBI) {
            {
                F6bWT3 = 1;
                while (NqjFTC6 >= F6bWT3) {
                    scanf ("%d", &r5cABQ0M[QaOXTZdBI][F6bWT3]);
                    F6bWT3++;
                }
            }
            QaOXTZdBI++;
        }
    }
    if (NqjFTC6 >= z6SlxMot0mGg) {
        T9m4ZTYEGt = z6SlxMot0mGg / 2;
        SzKnjN = z6SlxMot0mGg % 2;
        YtrPJwKm = 1;
    }
    else {
        T9m4ZTYEGt = NqjFTC6 / 2;
        SzKnjN = NqjFTC6 % 2;
        YtrPJwKm = 2;
    }
    for (QaOXTZdBI = 1; T9m4ZTYEGt >= QaOXTZdBI; QaOXTZdBI++) {
        {
            F6bWT3 = QaOXTZdBI;
            while (NqjFTC6 -QaOXTZdBI >= F6bWT3) {
                printf ("%d\n", r5cABQ0M[QaOXTZdBI][F6bWT3]);
                F6bWT3++;
            }
        }
        {
            lV1oDrRAix = QaOXTZdBI;
            while (lV1oDrRAix <= z6SlxMot0mGg - QaOXTZdBI) {
                printf ("%d\n", r5cABQ0M[lV1oDrRAix][NqjFTC6 +1 - QaOXTZdBI]);
                lV1oDrRAix++;
            }
        }
        for (pwrboWSN6YmQ = NqjFTC6 -QaOXTZdBI+1; pwrboWSN6YmQ >= QaOXTZdBI +1; pwrboWSN6YmQ--) {
            printf ("%d\n", r5cABQ0M[z6SlxMot0mGg + 1 - QaOXTZdBI][pwrboWSN6YmQ]);
        }
        for (pMrd0a = z6SlxMot0mGg + 1 - QaOXTZdBI; pMrd0a >= QaOXTZdBI +1; pMrd0a--) {
            printf ("%d\n", r5cABQ0M[pMrd0a][QaOXTZdBI]);
        }
    }
    if (SzKnjN == 1) {
        if (YtrPJwKm == 1) {
            QaOXTZdBI = z6SlxMot0mGg + 1;
            while (QaOXTZdBI <= NqjFTC6 -(z6SlxMot0mGg - 1) / 2) {
                printf ("%d\n", r5cABQ0M[(z6SlxMot0mGg + 1) / 2][QaOXTZdBI]);
                QaOXTZdBI++;
            }
        }
        if (YtrPJwKm == 2) {
            QaOXTZdBI = NqjFTC6 +1;
            while (QaOXTZdBI <= z6SlxMot0mGg - (NqjFTC6 -1) / 2) {
                printf ("%d\n", r5cABQ0M[QaOXTZdBI][(NqjFTC6 +1) / 2]);
                QaOXTZdBI++;
            }
        }
    }
    return 0;
}

