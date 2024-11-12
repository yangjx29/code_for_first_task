int main () {
    char sJ9G3Zgk [(1164 - 164)];
    char T3HREOwQTxA [(1871 - 871)];
    char klSjgHvD [(1355 - 355)];
    gets (sJ9G3Zgk);
    gets (klSjgHvD);
    gets (T3HREOwQTxA);
    int dj4TEa;
    int ClVdEmHz;
    int wxPrDGnK4F;
    int GRriZTLsoYIA;
    int xuzLBVjIA;
    int GEWwlK3AgO;
    int L3rbuC84HV1i;
    dj4TEa = (60 - 60);
    ClVdEmHz = (375 - 375);
    for (xuzLBVjIA = (834 - 834); sJ9G3Zgk[xuzLBVjIA] != (407 - 407); xuzLBVjIA = xuzLBVjIA + 1) {
        if (sJ9G3Zgk[xuzLBVjIA] == klSjgHvD[(245 - 245)]) {
            for (L3rbuC84HV1i = xuzLBVjIA + 1, GEWwlK3AgO = 1; sJ9G3Zgk[L3rbuC84HV1i] != (293 - 293) && klSjgHvD[GEWwlK3AgO] != (524 - 524); L3rbuC84HV1i = L3rbuC84HV1i +1, GEWwlK3AgO = GEWwlK3AgO +1) {
                if (sJ9G3Zgk[L3rbuC84HV1i] != klSjgHvD[GEWwlK3AgO]) {
                    break;
                }
            }
            if (!((689 - 689) != klSjgHvD[GEWwlK3AgO])) {
                dj4TEa = xuzLBVjIA;
                ClVdEmHz = L3rbuC84HV1i;
                break;
            }
        }
    }
    if (ClVdEmHz > dj4TEa) {
        if (strlen (klSjgHvD) <= strlen (T3HREOwQTxA)) {
            for (xuzLBVjIA = dj4TEa, GEWwlK3AgO = (218 - 218); T3HREOwQTxA[GEWwlK3AgO] != 0; xuzLBVjIA = xuzLBVjIA + 1, GEWwlK3AgO = GEWwlK3AgO +1) {
                sJ9G3Zgk[xuzLBVjIA] = T3HREOwQTxA[GEWwlK3AgO];
            }
            for (L3rbuC84HV1i = ClVdEmHz; sJ9G3Zgk[L3rbuC84HV1i] != 0; L3rbuC84HV1i++, xuzLBVjIA = xuzLBVjIA + 1) {
                sJ9G3Zgk[xuzLBVjIA] = sJ9G3Zgk[L3rbuC84HV1i];
            }
            sJ9G3Zgk[xuzLBVjIA] = 0;
        }
        else {
            xuzLBVjIA = strlen (sJ9G3Zgk) + strlen (T3HREOwQTxA) - strlen (klSjgHvD);
            for (L3rbuC84HV1i = strlen (sJ9G3Zgk); ClVdEmHz <= L3rbuC84HV1i; L3rbuC84HV1i = L3rbuC84HV1i -1, xuzLBVjIA = xuzLBVjIA - 1) {
                sJ9G3Zgk[xuzLBVjIA] = sJ9G3Zgk[L3rbuC84HV1i];
            }
            for (xuzLBVjIA = dj4TEa, GEWwlK3AgO = 0; T3HREOwQTxA[GEWwlK3AgO] != 0; xuzLBVjIA = xuzLBVjIA + 1, GEWwlK3AgO = GEWwlK3AgO +1) {
                sJ9G3Zgk[xuzLBVjIA] = T3HREOwQTxA[GEWwlK3AgO];
            }
        }
    }
    printf (sJ9G3Zgk);
    return 0;
}

