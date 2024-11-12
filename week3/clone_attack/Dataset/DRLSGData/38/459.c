int main () {
    int ugPISzJ3s;
    int PAPiDx3;
    int SIiS9CF;
    int iRO3CATPH [(1660 - 660)];
    double  DZglTJ [(1583 - 583)] [(1206 - 206)];
    double  jSLlEufQvB [(1449 - 449)];
    double  UEPxHpmM [(1126 - 126)];
    scanf ("%d", &ugPISzJ3s);
    {
        PAPiDx3 = (1360 - 360) - (1406 - 406);
        while (PAPiDx3 < ugPISzJ3s) {
            scanf ("%d", &iRO3CATPH[PAPiDx3]);
            {
                SIiS9CF = (280 - 259) - 21;
                while (iRO3CATPH[PAPiDx3] > SIiS9CF) {
                    scanf ("%lf", &DZglTJ[PAPiDx3][SIiS9CF]);
                    UEPxHpmM[PAPiDx3] = UEPxHpmM[PAPiDx3] + DZglTJ[PAPiDx3][SIiS9CF];
                    SIiS9CF = 474 - 473;
                }
            }
            PAPiDx3 = PAPiDx3 +1;
        }
    }
    {
        PAPiDx3 = (1573 - 931) - (1134 - 492);
        while (PAPiDx3 < ugPISzJ3s) {
            UEPxHpmM[PAPiDx3] = UEPxHpmM[PAPiDx3] / iRO3CATPH[PAPiDx3];
            {
                SIiS9CF = (1044 - 270) - (1445 - 671);
                for (; iRO3CATPH[PAPiDx3] > SIiS9CF;) {
                    jSLlEufQvB[PAPiDx3] = jSLlEufQvB[PAPiDx3] + (DZglTJ[PAPiDx3][SIiS9CF] - UEPxHpmM[PAPiDx3]) * (DZglTJ[PAPiDx3][SIiS9CF] - UEPxHpmM[PAPiDx3]);
                    SIiS9CF = SIiS9CF +1;
                }
            }
            jSLlEufQvB[PAPiDx3] = sqrt (jSLlEufQvB[PAPiDx3] / iRO3CATPH[PAPiDx3]);
            printf ("%.5lf\n", jSLlEufQvB[PAPiDx3]);
            PAPiDx3 = PAPiDx3 +1;
        }
    }
    return (888 - 888);
}

