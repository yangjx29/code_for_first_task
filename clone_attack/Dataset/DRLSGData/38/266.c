int main () {
    double  sOLCsyA [(371 - 271)];
    double  omsyXHYMpEq;
    double  ZPmd2vxL;
    double  gIfKRk;
    int q0EQGr4jeZ, Ggstr8E13UC, FSvZDC, Jwrf0nPeRh;
    double  duYeUKqIl [(269 - 169)];
    gIfKRk = (375 - 375);
    scanf ("%d", &q0EQGr4jeZ);
    ZPmd2vxL = (103 - 103);
    {
        FSvZDC = (1543 - 637) - (980 - 74);
        while (FSvZDC < q0EQGr4jeZ) {
            scanf ("%d", &Ggstr8E13UC);
            {
                Jwrf0nPeRh = (510 - 390) - 120;
                while (Jwrf0nPeRh < Ggstr8E13UC) {
                    scanf ("%lf", &duYeUKqIl[Jwrf0nPeRh]);
                    gIfKRk = gIfKRk + duYeUKqIl[Jwrf0nPeRh];
                    Jwrf0nPeRh++;
                }
            }
            omsyXHYMpEq = gIfKRk / (double ) Ggstr8E13UC;
            {
                Jwrf0nPeRh = (1117 - 561) - (1368 - 812);
                while (Jwrf0nPeRh < Ggstr8E13UC) {
                    ZPmd2vxL = ZPmd2vxL +(duYeUKqIl[Jwrf0nPeRh] - omsyXHYMpEq) * (duYeUKqIl[Jwrf0nPeRh] - omsyXHYMpEq);
                    Jwrf0nPeRh++;
                }
            }
            sOLCsyA[FSvZDC] = sqrt (ZPmd2vxL / (double ) Ggstr8E13UC);
            ZPmd2vxL = (933 - 933);
            gIfKRk = (641 - 641);
            FSvZDC++;
        }
    }
    for (FSvZDC = (902 - 902); FSvZDC < q0EQGr4jeZ; FSvZDC++) {
        printf ("%.5f\n", sOLCsyA[FSvZDC]);
    }
    return 0;
}

