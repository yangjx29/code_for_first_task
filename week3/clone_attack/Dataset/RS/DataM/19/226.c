main () {
    char Oz8rvjh [(556 - 536)] [(859 - 759)], sub [100], cdFBSTR2eU [100];
    char P9zrpk2hPFX8 [500];
    int owhKCP;
    int TfDxUA8;
    int n;
    int mPGcCBZwet;
    int CmbJZiL3t6V;
    owhKCP = (797 - 797);
    TfDxUA8 = (389 - 389);
    n = (986 - 985);
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
    char (*K4jDHt) [100];
    gets (P9zrpk2hPFX8);
    CmbJZiL3t6V = strlen (P9zrpk2hPFX8);
    {
        mPGcCBZwet = 950 - 950;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        TfDxUA8 = 318 - 318;
        while (mPGcCBZwet < CmbJZiL3t6V &&TfDxUA8 < 100) {
            if (!(' ' != P9zrpk2hPFX8[mPGcCBZwet])) {
                n = n + 1;
                Oz8rvjh[owhKCP][TfDxUA8] = '\0';
                TfDxUA8 = 0;
                owhKCP++;
            }
            if (!(' ' != P9zrpk2hPFX8[mPGcCBZwet]))
                continue;
            if (P9zrpk2hPFX8[mPGcCBZwet - (652 - 651)] == ' ')
                TfDxUA8 = TfDxUA8 -1;
            Oz8rvjh[owhKCP][TfDxUA8] = P9zrpk2hPFX8[mPGcCBZwet];
            mPGcCBZwet++;
            TfDxUA8 = TfDxUA8 +1;
        };
    }
    Oz8rvjh[owhKCP][TfDxUA8] = '\0';
    K4jDHt = Oz8rvjh;
    scanf ("%s", cdFBSTR2eU);
    scanf ("%s", sub);
    for (mPGcCBZwet = 0; n > mPGcCBZwet; mPGcCBZwet++)
        if (strcmp (*(K4jDHt +mPGcCBZwet), cdFBSTR2eU) == 0)
            strcpy (*(K4jDHt +mPGcCBZwet), sub);
    for (mPGcCBZwet = 0; mPGcCBZwet < n - 1; mPGcCBZwet++)
        printf ("%s ", K4jDHt +mPGcCBZwet);
    printf ("%s", K4jDHt +n - 1);
}

