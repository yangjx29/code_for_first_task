int main () {
    double  rbth0ONZPA [(388 - 288)];
    double  FeZy8ErA [(288 - 188)] = {(632 - 632)};
    int iGNAYd;
    int o7530Xdt [(1012 - 912)];
    int NUf10aktuMzF;
    int mgidB4TyU;
    double  CiBl8vE [(1011 - 911)] [(369 - 269)];
    double  wS9ITjOL [(692 - 592)] = {(645 - 645)};
    scanf ("%d", &iGNAYd);
    {
        NUf10aktuMzF = (904 - 904);
        for (; iGNAYd > NUf10aktuMzF;) {
            scanf ("%d", &o7530Xdt[NUf10aktuMzF]);
            {
                mgidB4TyU = (952 - 952);
                for (; o7530Xdt[NUf10aktuMzF] > mgidB4TyU;) {
                    scanf ("%lf", &CiBl8vE[NUf10aktuMzF][mgidB4TyU]);
                    wS9ITjOL[NUf10aktuMzF] = wS9ITjOL[NUf10aktuMzF] + CiBl8vE[NUf10aktuMzF][mgidB4TyU];
                    mgidB4TyU = mgidB4TyU + (88 - 87);
                }
            }
            NUf10aktuMzF = NUf10aktuMzF +(913 - 912);
        }
    }
    {
        NUf10aktuMzF = (302 - 302);
        for (; iGNAYd > NUf10aktuMzF;) {
            {
                mgidB4TyU = (974 - 974);
                for (; mgidB4TyU < o7530Xdt[NUf10aktuMzF];) {
                    FeZy8ErA[NUf10aktuMzF] = FeZy8ErA[NUf10aktuMzF] + ((CiBl8vE[NUf10aktuMzF][mgidB4TyU] - wS9ITjOL[NUf10aktuMzF] / o7530Xdt[NUf10aktuMzF]) * (CiBl8vE[NUf10aktuMzF][mgidB4TyU] - wS9ITjOL[NUf10aktuMzF] / o7530Xdt[NUf10aktuMzF]));
                    mgidB4TyU = mgidB4TyU + (99 - 98);
                }
            }
            rbth0ONZPA[NUf10aktuMzF] = sqrt (FeZy8ErA[NUf10aktuMzF] / o7530Xdt[NUf10aktuMzF]);
            printf ("%.5lf\n", rbth0ONZPA[NUf10aktuMzF]);
            NUf10aktuMzF = NUf10aktuMzF +(574 - 573);
        }
    }
    return (205 - 205);
}

