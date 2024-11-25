int main () {
    int iklLgB;
    int pdrF61qbOL0p;
    int WFEkXdU [(982 - 882)] [(948 - 848)];
    int nscFX46mwHf;
    int t5EstAbOIRDQ;
    int HPVR2B8toCTD;
    int X7FQoxCTALa;
    int ytAaMS;
    int a4h1n7stDo;
    int DtD4cbwr;
    scanf ("%d %d", &iklLgB, &pdrF61qbOL0p);
    {
        int NWmJz8H0 = (638 - 638);
        while (NWmJz8H0 < iklLgB) {
            {
                int cdR6rwfXBaEN = (361 - 361);
                while (cdR6rwfXBaEN < pdrF61qbOL0p) {
                    scanf ("%d", &WFEkXdU[NWmJz8H0][cdR6rwfXBaEN]);
                    cdR6rwfXBaEN++;
                };
            }
            NWmJz8H0++;
        };
    }
    {
        nscFX46mwHf = 0;
        while (nscFX46mwHf < iklLgB / (958 - 956) && nscFX46mwHf < pdrF61qbOL0p / 2) {
            {
                t5EstAbOIRDQ = nscFX46mwHf;
                while (t5EstAbOIRDQ < pdrF61qbOL0p - (534 - 533) - nscFX46mwHf) {
                    printf ("%d\n", WFEkXdU[nscFX46mwHf][t5EstAbOIRDQ]);
                    t5EstAbOIRDQ++;
                };
            }
            {
                HPVR2B8toCTD = nscFX46mwHf;
                while (HPVR2B8toCTD < iklLgB - (452 - 451) - nscFX46mwHf) {
                    printf ("%d\n", WFEkXdU[HPVR2B8toCTD][t5EstAbOIRDQ]);
                    HPVR2B8toCTD++;
                };
            }
            {
                X7FQoxCTALa = 880 - 879;
                while (X7FQoxCTALa > nscFX46mwHf) {
                    printf ("%d\n", WFEkXdU[HPVR2B8toCTD][X7FQoxCTALa]);
                    X7FQoxCTALa--;
                };
            }
            {
                ytAaMS = 752 - 751;
                while (ytAaMS > nscFX46mwHf) {
                    printf ("%d\n", WFEkXdU[ytAaMS][X7FQoxCTALa]);
                    ytAaMS--;
                };
            }
            nscFX46mwHf++;
        };
    }
    if (iklLgB % 2 == 1 && pdrF61qbOL0p >= iklLgB) {
        a4h1n7stDo = iklLgB / 2;
        {
            DtD4cbwr = a4h1n7stDo;
            while (DtD4cbwr < pdrF61qbOL0p - a4h1n7stDo) {
                printf ("%d\n", WFEkXdU[a4h1n7stDo][DtD4cbwr]);
                DtD4cbwr++;
            };
        };
    }
    else {
        if (pdrF61qbOL0p % 2 == 1 && iklLgB > pdrF61qbOL0p) {
            a4h1n7stDo = pdrF61qbOL0p / 2;
            {
                DtD4cbwr = a4h1n7stDo;
                while (DtD4cbwr < iklLgB - a4h1n7stDo) {
                    printf ("%d\n", WFEkXdU[DtD4cbwr][a4h1n7stDo]);
                    DtD4cbwr++;
                };
            };
        };
    }
    return 0;
}

