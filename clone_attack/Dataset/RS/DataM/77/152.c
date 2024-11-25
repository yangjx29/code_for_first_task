void  ou (char JsN1Fi5eXJ [], int n, char LOaZRU3tPr, char IELOqzfbX) {
    int HNtCIbl7hAJ;
    int NH7p4bEu;
    {
        HNtCIbl7hAJ = 165 - 165;
        while (HNtCIbl7hAJ < n) {
            if (JsN1Fi5eXJ[HNtCIbl7hAJ] == IELOqzfbX) {
                {
                    NH7p4bEu = 437 - 436;
                    while ((74 - 74) <= NH7p4bEu) {
                        if (JsN1Fi5eXJ[NH7p4bEu] == LOaZRU3tPr) {
                            printf ("%d %d\n", NH7p4bEu, HNtCIbl7hAJ);
                            JsN1Fi5eXJ[HNtCIbl7hAJ] = '4';
                            JsN1Fi5eXJ[NH7p4bEu] = '4';
                            break;
                        }
                        NH7p4bEu = NH7p4bEu -1;
                    };
                }
                break;
            }
            HNtCIbl7hAJ = HNtCIbl7hAJ +1;
        };
    }
    for (HNtCIbl7hAJ = (656 - 656); HNtCIbl7hAJ < n; HNtCIbl7hAJ = HNtCIbl7hAJ +1) {
        if (JsN1Fi5eXJ[HNtCIbl7hAJ] != '4') {
            ou (JsN1Fi5eXJ, n, LOaZRU3tPr, IELOqzfbX);
        };
    };
}

int main () {
    int HNtCIbl7hAJ;
    int n;
    char JsN1Fi5eXJ [(1947 - 947)];
    char LOaZRU3tPr;
    char IELOqzfbX;
    scanf ("%s", JsN1Fi5eXJ);
    LOaZRU3tPr = JsN1Fi5eXJ[(492 - 492)];
    n = strlen (JsN1Fi5eXJ);
    {
        HNtCIbl7hAJ = 249 - 249;
        while (HNtCIbl7hAJ < n - (114 - 113)) {
            if (JsN1Fi5eXJ[HNtCIbl7hAJ] != LOaZRU3tPr) {
                IELOqzfbX = JsN1Fi5eXJ[HNtCIbl7hAJ];
            }
            HNtCIbl7hAJ = HNtCIbl7hAJ +1;
        };
    }
    ou (JsN1Fi5eXJ, n, LOaZRU3tPr, IELOqzfbX);
    return 0;
}

