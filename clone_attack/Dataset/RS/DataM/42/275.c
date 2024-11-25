void  main () {
    long  EZwiQtWnyClr;
    long  GqjKiAB;
    long  RIO6ngPaG;
    long  r2yPRDf;
    long  nUr4b6gCcQ0;
    long  RSIBKW305;
    long  uZHJxAb;
    long  bhTtgVNO;
    long  DQSUbPd;
    long  eXdUGWZ;
    long  d2GBZD4X6UPR;
    long  pPFo7UagAn1t;
    long  xYqhBuv;
    long  ul2rfPi8;
    long  mS01bimxP6C;
    EZwiQtWnyClr = 0;
    GqjKiAB = 0;
    RIO6ngPaG = 0;
    long  ud46JngB9N [100001];
    ul2rfPi8 = 0, mS01bimxP6C = 0;
    scanf ("%d", &bhTtgVNO);
    {
        for (RSIBKW305 = 0; RSIBKW305 <= bhTtgVNO - 1; RSIBKW305 = RSIBKW305 +1)
            scanf ("%d", &ud46JngB9N[RSIBKW305]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    scanf ("%d", &DQSUbPd);
    ud46JngB9N[bhTtgVNO] = ud46JngB9N[bhTtgVNO + 1] = DQSUbPd;
    RIO6ngPaG = 0;
    eXdUGWZ = 1;
    xYqhBuv = 0;
    for (; 2500 > xYqhBuv;) {
        xYqhBuv = xYqhBuv + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        RSIBKW305 = 0;
        for (; bhTtgVNO - 1 > RSIBKW305;) {
            if (!(DQSUbPd != ud46JngB9N[RSIBKW305])) {
                for (uZHJxAb = RSIBKW305; uZHJxAb <= bhTtgVNO - 1; uZHJxAb++)
                    ud46JngB9N[uZHJxAb] = ud46JngB9N[uZHJxAb + 1];
                RSIBKW305 = RSIBKW305 +1;
            }
            else
                RSIBKW305 = RSIBKW305 +1;
        };
    }
    GqjKiAB = 0;
    printf ("%d", ud46JngB9N[GqjKiAB]);
    GqjKiAB = GqjKiAB +1;
    for (; (ud46JngB9N[GqjKiAB] != DQSUbPd) && (GqjKiAB < bhTtgVNO);) {
        printf (" %d", ud46JngB9N[GqjKiAB]);
        GqjKiAB = GqjKiAB +1;
    };
}

