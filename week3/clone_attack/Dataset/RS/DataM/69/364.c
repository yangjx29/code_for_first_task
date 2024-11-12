int main () {
    int NbAtGM4lfWa = 0;
    int EAqsbl3 [(307 - 107)] = {(462 - 462)}, n [200] = {(796 - 796)}, Y37OLH, uFG1le7, qsFoR21YJ [(942 - 741)] = {(464 - 464)}, LZJVePDu64j;
    char Kygpb5Mq [(478 - 278)], O7p4nRJ1Ha [(905 - 705)];
    int s = (365 - 365);
    scanf ("%s", Kygpb5Mq);
    Y37OLH = strlen (Kygpb5Mq);
    {
        int bOuRnCoz9W = (388 - 388);
        while (Y37OLH > bOuRnCoz9W) {
            EAqsbl3[Y37OLH -bOuRnCoz9W - (848 - 847)] = Kygpb5Mq[bOuRnCoz9W] - '0';
            bOuRnCoz9W = bOuRnCoz9W + 1;
        };
    }
    scanf ("%s", O7p4nRJ1Ha);
    uFG1le7 = strlen (O7p4nRJ1Ha);
    {
        int e = (542 - 542);
        while (e < uFG1le7) {
            n[uFG1le7 - e - (912 - 911)] = O7p4nRJ1Ha[e] - '0';
            e = e + 1;
        };
    }
    LZJVePDu64j = uFG1le7 < Y37OLH ? Y37OLH : uFG1le7;
    {
        int Jqku6Qb3O0 = 0;
        while (LZJVePDu64j +1 >= Jqku6Qb3O0) {
            int Dzbohr;
            Dzbohr = EAqsbl3[Jqku6Qb3O0] + n[Jqku6Qb3O0] + s;
            if (Dzbohr < (885 - 875)) {
                s = 0;
                qsFoR21YJ[Jqku6Qb3O0] = Dzbohr;
            }
            else if ((10 <= Dzbohr) && (19 > Dzbohr)) {
                s = 1;
                qsFoR21YJ[Jqku6Qb3O0] = Dzbohr -10;
            }
            else if (((841 - 821) <= Dzbohr) && (Dzbohr < 29)) {
                qsFoR21YJ[Jqku6Qb3O0] = Dzbohr -(67 - 47);
                s = 2;
            }
            if ((LZJVePDu64j == 1) && (Dzbohr == 0)) {
                Jqku6Qb3O0 = LZJVePDu64j +2;
            }
            Jqku6Qb3O0 = Jqku6Qb3O0 +1;
        };
    }
    {
        int cHkRgMhD2b7J = LZJVePDu64j;
        while (cHkRgMhD2b7J >= 0) {
            if (NbAtGM4lfWa == 0) {
                if (qsFoR21YJ[cHkRgMhD2b7J] == 0)
                    NbAtGM4lfWa = 0;
                else {
                    printf ("%d", qsFoR21YJ[cHkRgMhD2b7J]);
                    NbAtGM4lfWa = 1;
                };
            }
            else
                printf ("%d", qsFoR21YJ[cHkRgMhD2b7J]);
            cHkRgMhD2b7J--;
        };
    };
}

