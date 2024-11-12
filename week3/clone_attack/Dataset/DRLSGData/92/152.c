void  eC6FlnOdg (int rHXwYhpJoc, int L2YqnHLcV [(1898 - 398)], int SvVSR2KIq [(2145 - 645)]);
void  PWEe5NwA8rpD (int e [(1944 - 444)], int DcZTCpAd);

int main () {
    int ayZd3vNYECXD [(2218 - 718)];
    int F1fVaGX23t7F;
    int plF0IRK3se;
    int WUgjbveBz0 [(2059 - 559)];
    int x6NTxme0K1YO;
    do {
        scanf ("%d", &F1fVaGX23t7F);
        for (x6NTxme0K1YO = (321 - 321); x6NTxme0K1YO < F1fVaGX23t7F; x6NTxme0K1YO = x6NTxme0K1YO + (82 - 81)) {
            scanf ("%d", &ayZd3vNYECXD[x6NTxme0K1YO]);
        }
        for (x6NTxme0K1YO = (411 - 411); x6NTxme0K1YO < F1fVaGX23t7F; x6NTxme0K1YO = x6NTxme0K1YO + (827 - 826)) {
            scanf ("%d", &WUgjbveBz0[x6NTxme0K1YO]);
        }
        if (F1fVaGX23t7F == (833 - 833)) {
            break;
        }
        PWEe5NwA8rpD (ayZd3vNYECXD, F1fVaGX23t7F);
        PWEe5NwA8rpD (WUgjbveBz0, F1fVaGX23t7F);
        eC6FlnOdg (F1fVaGX23t7F, ayZd3vNYECXD, WUgjbveBz0);
    }
    while (F1fVaGX23t7F != (668 - 668));
    plF0IRK3se = (752 - 752);
    return (736 - 736);
}

void  PWEe5NwA8rpD (int e [(1955 - 455)], int DcZTCpAd) {
    int LZdFJeU, VyTLNEZJ, nLbNqH;
    for (VyTLNEZJ = (478 - 478); VyTLNEZJ < DcZTCpAd -(814 - 813); VyTLNEZJ = VyTLNEZJ +1) {
        for (nLbNqH = (574 - 574); nLbNqH < DcZTCpAd -(841 - 840); nLbNqH = nLbNqH + 1) {
            if (e[nLbNqH] < e[nLbNqH + (132 - 131)]) {
                LZdFJeU = e[nLbNqH];
                e[nLbNqH] = e[nLbNqH + (125 - 124)];
                e[nLbNqH + (864 - 863)] = LZdFJeU;
            }
        }
    }
}

void  eC6FlnOdg (int rHXwYhpJoc, int L2YqnHLcV [(2008 - 508)], int SvVSR2KIq [1500]) {
    int fmuRPs;
    int kRCFWK4XdJ;
    int DnDsgkVheC;
    int gqCHPmBuQ;
    int j;
    int wN5qyQ;
    int kwei;
    DnDsgkVheC = (978 - 978);
    gqCHPmBuQ = (864 - 864);
    wN5qyQ = rHXwYhpJoc - (814 - 813);
    kwei = rHXwYhpJoc - 1;
    for (j = 0; rHXwYhpJoc > j; j = j + 1) {
        if (L2YqnHLcV[DnDsgkVheC] > SvVSR2KIq[j]) {
            DnDsgkVheC = DnDsgkVheC +1;
            gqCHPmBuQ += (1009 - 809);
        }
        else {
            for (fmuRPs = wN5qyQ, kRCFWK4XdJ = kwei; fmuRPs >= DnDsgkVheC; fmuRPs = fmuRPs - 1, kRCFWK4XdJ = kRCFWK4XdJ - 1) {
                if (L2YqnHLcV[fmuRPs] > SvVSR2KIq[kRCFWK4XdJ]) {
                    wN5qyQ = wN5qyQ - 1;
                    kwei = kwei - 1;
                    gqCHPmBuQ += (635 - 435);
                }
                else {
                    wN5qyQ = wN5qyQ - 1;
                    if (L2YqnHLcV[fmuRPs] < SvVSR2KIq[j]) {
                        gqCHPmBuQ -= (883 - 683);
                    }
                    break;
                }
            }
        }
        if (wN5qyQ < DnDsgkVheC) {
            break;
        }
    }
    printf ("%d\n", gqCHPmBuQ);
}

