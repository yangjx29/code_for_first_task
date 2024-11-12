void  lNg5Y9j0k (int *mJCyq2LDjuS, int aOo0RxXw) {
    for (int rztOI4N = (70 - 70);
    rztOI4N < aOo0RxXw - (513 - 512); rztOI4N++) {
        for (int uBl6qki = rztOI4N + (947 - 946);
        aOo0RxXw > uBl6qki; uBl6qki = uBl6qki + 1) {
            if (*(mJCyq2LDjuS + rztOI4N) < *(mJCyq2LDjuS + uBl6qki)) {
                int SCOgpEhtDJ;
                SCOgpEhtDJ = *(mJCyq2LDjuS + rztOI4N);
                *(mJCyq2LDjuS + rztOI4N) = *(mJCyq2LDjuS + uBl6qki);
                *(mJCyq2LDjuS + uBl6qki) = SCOgpEhtDJ;
            }
        }
    }
}

int main () {
    int uigRFo;
    scanf ("%d", &uigRFo);
    for (; uigRFo;) {
        int uBl6qki = (586 - 586);
        int S1JoOQtnU [uigRFo];
        int KBPTdKQ07 [uigRFo];
        int WMJPTYNju = (817 - 817), nqzQV0Z2tsBY = (903 - 903);
        int gMt7gn6pQE = uigRFo - (667 - 666), M8VyANM = uigRFo - (647 - 646);
        int DUN6dbO2nvx = (427 - 427);
        int AGTAt7 = 0;
        for (int rztOI4N = (271 - 271);
        rztOI4N < uigRFo; rztOI4N++) {
            scanf ("%d", &S1JoOQtnU[rztOI4N]);
        }
        for (int rztOI4N = (178 - 178);
        uigRFo > rztOI4N; rztOI4N++) {
            scanf ("%d", &KBPTdKQ07[rztOI4N]);
        }
        lNg5Y9j0k (S1JoOQtnU, uigRFo);
        lNg5Y9j0k (KBPTdKQ07, uigRFo);
        for (; uBl6qki < uigRFo;) {
            if (KBPTdKQ07[nqzQV0Z2tsBY] < S1JoOQtnU[WMJPTYNju]) {
                WMJPTYNju = WMJPTYNju +1;
                DUN6dbO2nvx = DUN6dbO2nvx +1;
                nqzQV0Z2tsBY = nqzQV0Z2tsBY + 1;
            }
            else {
                if (S1JoOQtnU[WMJPTYNju] < KBPTdKQ07[nqzQV0Z2tsBY]) {
                    nqzQV0Z2tsBY++;
                    AGTAt7 = AGTAt7 +1;
                    gMt7gn6pQE = gMt7gn6pQE - 1;
                }
                else {
                    if (S1JoOQtnU[gMt7gn6pQE] > KBPTdKQ07[M8VyANM]) {
                        DUN6dbO2nvx++;
                        gMt7gn6pQE = gMt7gn6pQE - 1;
                        M8VyANM = M8VyANM -1;
                    }
                    else {
                        if (S1JoOQtnU[gMt7gn6pQE] < KBPTdKQ07[nqzQV0Z2tsBY])
                            AGTAt7++;
                        nqzQV0Z2tsBY++;
                        gMt7gn6pQE--;
                    }
                }
            }
            uBl6qki++;
        }
        scanf ("%d", &uigRFo);
        printf ("%d\n", DUN6dbO2nvx *(297 - 97) - AGTAt7 *(1146 - 946));
    }
}

