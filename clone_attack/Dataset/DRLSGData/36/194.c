void  main () {
    int BAny1WO;
    int uEGyMehZSqn;
    int ipU0ZPS7;
    int Yi0mSZJEQ;
    char PSkHCO8 [(190 - 150)];
    char b [(526 - 486)];
    char l04xbQtPjL;
    int oGWJQbI0;
    BAny1WO = (362 - 362);
    scanf ("%s%s", &PSkHCO8, &b);
    oGWJQbI0 = strlen (PSkHCO8);
    Yi0mSZJEQ = strlen (b);
    if (oGWJQbI0 == Yi0mSZJEQ) {
        for (uEGyMehZSqn = (515 - 515); uEGyMehZSqn < oGWJQbI0; uEGyMehZSqn++) {
            for (ipU0ZPS7 = (373 - 373); ipU0ZPS7 <= uEGyMehZSqn; ipU0ZPS7++) {
                if (PSkHCO8[ipU0ZPS7] > PSkHCO8[uEGyMehZSqn]) {
                    l04xbQtPjL = PSkHCO8[ipU0ZPS7];
                    PSkHCO8[ipU0ZPS7] = PSkHCO8[uEGyMehZSqn];
                    PSkHCO8[uEGyMehZSqn] = l04xbQtPjL;
                }
                if (b[ipU0ZPS7] > b[uEGyMehZSqn]) {
                    l04xbQtPjL = b[ipU0ZPS7];
                    b[ipU0ZPS7] = b[uEGyMehZSqn];
                    b[uEGyMehZSqn] = l04xbQtPjL;
                };
            };
        }
        for (uEGyMehZSqn = (908 - 908); uEGyMehZSqn < oGWJQbI0; uEGyMehZSqn++) {
            if (PSkHCO8[uEGyMehZSqn] != b[uEGyMehZSqn]) {
                BAny1WO = (406 - 405);
                break;
            };
        }
        if (BAny1WO == 0)
            ;
        else
            ;
    }
    else
        ;
}

