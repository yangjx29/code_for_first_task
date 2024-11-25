int Uqrmj5ilDc (const  void  *pIsBfhDUi7eQ, const  void  *nW8sBn2eRU1L) {
    if (*((int *) nW8sBn2eRU1L) < *((int *) pIsBfhDUi7eQ))
        return -(373 - 372);
    else if (*((int *) nW8sBn2eRU1L) > *((int *) pIsBfhDUi7eQ))
        return (83 - 82);
    else
        return (440 - 440);
}

int main () {
    int WtBdyW;
    int RChrFLE5K;
    int HGfZDj9;
    int vYSZ73u;
    int kiaCwQFV32;
    int fdektEsSJ;
    int nW8sBn2eRU1L [(1555 - 555)];
    int pIsBfhDUi7eQ [(1164 - 164)];
    int oXbwYBDNj9qu;
    int yA9pWeVfGSr;
    int FUZsL8uy;
    scanf ("%d", &FUZsL8uy);
    while (FUZsL8uy) {
        RChrFLE5K = (508 - 508);
        oXbwYBDNj9qu = vYSZ73u = (135 - 135);
        {
            fdektEsSJ = (668 - 461) - 207;
            for (; FUZsL8uy > fdektEsSJ;) {
                scanf ("%d", &pIsBfhDUi7eQ[fdektEsSJ]);
                fdektEsSJ = fdektEsSJ + 1;
            }
        }
        {
            fdektEsSJ = (1317 - 880) - (1263 - 826);
            while (fdektEsSJ < FUZsL8uy) {
                scanf ("%d", &nW8sBn2eRU1L[fdektEsSJ]);
                fdektEsSJ = fdektEsSJ + 1;
            }
        }
        qsort (pIsBfhDUi7eQ, FUZsL8uy, sizeof (pIsBfhDUi7eQ [(622 - 622)]), Uqrmj5ilDc);
        qsort (nW8sBn2eRU1L, FUZsL8uy, sizeof (nW8sBn2eRU1L [(185 - 185)]), Uqrmj5ilDc);
        WtBdyW = yA9pWeVfGSr = FUZsL8uy -(966 - 965);
        while (oXbwYBDNj9qu <= WtBdyW) {
            for (; pIsBfhDUi7eQ[WtBdyW] != nW8sBn2eRU1L[yA9pWeVfGSr] && oXbwYBDNj9qu <= WtBdyW;) {
                if (nW8sBn2eRU1L[yA9pWeVfGSr] < pIsBfhDUi7eQ[WtBdyW]) {
                    yA9pWeVfGSr = yA9pWeVfGSr - 1;
                    RChrFLE5K = RChrFLE5K +1;
                    WtBdyW = WtBdyW -1;
                }
                else {
                    WtBdyW = WtBdyW -1;
                    RChrFLE5K = RChrFLE5K -1;
                    vYSZ73u = vYSZ73u + 1;
                }
            }
            if (oXbwYBDNj9qu > WtBdyW)
                break;
            for (; pIsBfhDUi7eQ[oXbwYBDNj9qu] != nW8sBn2eRU1L[vYSZ73u] && oXbwYBDNj9qu <= WtBdyW;) {
                if (nW8sBn2eRU1L[vYSZ73u] < pIsBfhDUi7eQ[oXbwYBDNj9qu]) {
                    RChrFLE5K = RChrFLE5K +1;
                    oXbwYBDNj9qu = oXbwYBDNj9qu + 1;
                    vYSZ73u = vYSZ73u + 1;
                }
                else {
                    RChrFLE5K = RChrFLE5K -1;
                    vYSZ73u = vYSZ73u + 1;
                    WtBdyW = WtBdyW -1;
                }
            }
            if (oXbwYBDNj9qu > WtBdyW)
                break;
            if (pIsBfhDUi7eQ[oXbwYBDNj9qu] == nW8sBn2eRU1L[vYSZ73u] && pIsBfhDUi7eQ[WtBdyW] == nW8sBn2eRU1L[yA9pWeVfGSr]) {
                if (pIsBfhDUi7eQ[WtBdyW] > nW8sBn2eRU1L[vYSZ73u])
                    RChrFLE5K = RChrFLE5K +1;
                else if (pIsBfhDUi7eQ[WtBdyW] < nW8sBn2eRU1L[vYSZ73u])
                    RChrFLE5K = RChrFLE5K -1;
                WtBdyW = WtBdyW -1;
                vYSZ73u = vYSZ73u + 1;
            }
            if (oXbwYBDNj9qu > WtBdyW)
                break;
        }
        scanf ("%d", &FUZsL8uy);
        printf ("%d\n", RChrFLE5K *(224 - 24));
    }
    return (133 - 133);
}

