struct   human {
    char Ovhu1YlP [(445 - 438)];
    float Z4vUIFq018;
};
main () {
    int pVL0m4Kti;
    int ekpleob;
    int cvomRHwpsku;
    int koQhWCNB;
    int n;
    struct   human VFldQDjot0X7 [n];
    struct   human RUhrMuA [n];
    struct   human Hu [n];
    int XHC0Qgb9;
    int orkxy4;
    scanf ("%d", &n);
    orkxy4 = (733 - 733);
    pVL0m4Kti = (607 - 607);
    for (cvomRHwpsku = (371 - 371); cvomRHwpsku < n; cvomRHwpsku = cvomRHwpsku + (854 - 853)) {
        scanf ("%s %f\n", VFldQDjot0X7[cvomRHwpsku].Ovhu1YlP, &VFldQDjot0X7[cvomRHwpsku].Z4vUIFq018);
    }
    {
        cvomRHwpsku = (145 - 145);
        for (; n > cvomRHwpsku;) {
            if (!((49 - 49) != strcmp (VFldQDjot0X7[cvomRHwpsku].Ovhu1YlP, "male"))) {
                RUhrMuA[orkxy4] = VFldQDjot0X7[cvomRHwpsku];
                orkxy4 = orkxy4 + (328 - 327);
            }
            else {
                Hu[pVL0m4Kti] = VFldQDjot0X7[cvomRHwpsku];
                pVL0m4Kti = pVL0m4Kti + (846 - 845);
            }
            cvomRHwpsku = cvomRHwpsku + 1;
        }
    }
    {
        cvomRHwpsku = (576 - 576);
        for (; orkxy4 > cvomRHwpsku;) {
            ekpleob = cvomRHwpsku;
            {
                koQhWCNB = cvomRHwpsku + 1;
                for (; orkxy4 > koQhWCNB;) {
                    if (RUhrMuA[ekpleob].Z4vUIFq018 > RUhrMuA[koQhWCNB].Z4vUIFq018)
                        ekpleob = koQhWCNB;
                    koQhWCNB = koQhWCNB + 1;
                }
            }
            if (!(0 != cvomRHwpsku))
                printf ("%.2f", RUhrMuA[ekpleob].Z4vUIFq018);
            if (cvomRHwpsku != 0)
                printf (" %.2f", RUhrMuA[ekpleob].Z4vUIFq018);
            RUhrMuA[ekpleob].Z4vUIFq018 = RUhrMuA[cvomRHwpsku].Z4vUIFq018;
            cvomRHwpsku = cvomRHwpsku + 1;
        }
    }
    {
        cvomRHwpsku = 0;
        for (; pVL0m4Kti > cvomRHwpsku;) {
            XHC0Qgb9 = cvomRHwpsku;
            {
                koQhWCNB = cvomRHwpsku + 1;
                for (; pVL0m4Kti > koQhWCNB;) {
                    if (Hu[koQhWCNB].Z4vUIFq018 > Hu[XHC0Qgb9].Z4vUIFq018) {
                        XHC0Qgb9 = koQhWCNB;
                    }
                    koQhWCNB = koQhWCNB + 1;
                }
            }
            printf (" %.2f", Hu[XHC0Qgb9].Z4vUIFq018);
            Hu[XHC0Qgb9].Z4vUIFq018 = Hu[cvomRHwpsku].Z4vUIFq018;
            cvomRHwpsku = cvomRHwpsku + 1;
        }
    }
}

