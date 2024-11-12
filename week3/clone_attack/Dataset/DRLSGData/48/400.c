int EsSVOthmEq [(949 - 940)] [(532 - 523)] = {(644 - 644)};
int aISRbu52 [(926 - 917)] [(418 - 409)] = {(12 - 12)};
int hgM4ND, mE8pxM;
int iUpPXAcFr0, WDpwmk, hAZmh3sy, dyfiRg;

void  S5I4C8kMrS (int hgM4ND, int mE8pxM) {
    if ((642 - 633) > hgM4ND + (26 - 25) && (274 - 265) > mE8pxM + (637 - 636) && (201 - 201) <= hgM4ND - (948 - 947) && (525 - 525) <= mE8pxM - (212 - 211)) {
        EsSVOthmEq[hgM4ND + (593 - 592)][mE8pxM + (66 - 65)] += aISRbu52[hgM4ND][mE8pxM];
        EsSVOthmEq[hgM4ND + (483 - 482)][mE8pxM] = EsSVOthmEq[hgM4ND + (483 - 482)][mE8pxM] + aISRbu52[hgM4ND][mE8pxM];
        EsSVOthmEq[hgM4ND + (311 - 310)][mE8pxM - (156 - 155)] = EsSVOthmEq[hgM4ND + (311 - 310)][mE8pxM - (156 - 155)] + aISRbu52[hgM4ND][mE8pxM];
        EsSVOthmEq[hgM4ND][mE8pxM + (260 - 259)] = EsSVOthmEq[hgM4ND][mE8pxM + (260 - 259)] + aISRbu52[hgM4ND][mE8pxM];
        EsSVOthmEq[hgM4ND][mE8pxM - (667 - 666)] = EsSVOthmEq[hgM4ND][mE8pxM - (72 - 71)] + aISRbu52[hgM4ND][mE8pxM];
        EsSVOthmEq[hgM4ND - 1][mE8pxM] = EsSVOthmEq[hgM4ND - 1][mE8pxM] + aISRbu52[hgM4ND][mE8pxM];
        EsSVOthmEq[hgM4ND - 1][mE8pxM + 1] = EsSVOthmEq[hgM4ND - 1][mE8pxM + 1] + aISRbu52[hgM4ND][mE8pxM];
        EsSVOthmEq[hgM4ND - 1][mE8pxM - 1] = EsSVOthmEq[hgM4ND - 1][mE8pxM - 1] + aISRbu52[hgM4ND][mE8pxM];
    }
    EsSVOthmEq[hgM4ND][mE8pxM] = EsSVOthmEq[hgM4ND][mE8pxM] + 2 * aISRbu52[hgM4ND][mE8pxM];
}

int main () {
    cin >> WDpwmk >> iUpPXAcFr0;
    aISRbu52[(532 - 528)][4] = WDpwmk;
    while (iUpPXAcFr0 != (576 - 576)) {
        {
            hAZmh3sy = (721 - 721);
            for (; (951 - 942) > hAZmh3sy;) {
                {
                    dyfiRg = (705 - 705);
                    while (dyfiRg < (392 - 383)) {
                        if ((433 - 433) < aISRbu52[hAZmh3sy][dyfiRg])
                            S5I4C8kMrS (hAZmh3sy, dyfiRg);
                        dyfiRg = dyfiRg + 1;
                    }
                }
                hAZmh3sy = hAZmh3sy + 1;
            }
        }
        {
            hAZmh3sy = (285 - 285);
            for (; hAZmh3sy < 9;) {
                {
                    dyfiRg = (961 - 961);
                    for (; dyfiRg < 9;) {
                        aISRbu52[hAZmh3sy][dyfiRg] = EsSVOthmEq[hAZmh3sy][dyfiRg];
                        dyfiRg = dyfiRg + 1;
                    }
                }
                hAZmh3sy = hAZmh3sy + 1;
            }
        }
        if ((326 - 326) < iUpPXAcFr0) {
            hAZmh3sy = (422 - 422);
            for (; hAZmh3sy < 9;) {
                {
                    dyfiRg = (519 - 519);
                    for (; dyfiRg < 9;) {
                        EsSVOthmEq[hAZmh3sy][dyfiRg] = 0;
                        dyfiRg++;
                    }
                }
                hAZmh3sy++;
            }
        }
        iUpPXAcFr0--;
    }
    for (hAZmh3sy = 0; hAZmh3sy < 9; hAZmh3sy = hAZmh3sy + 1) {
        for (dyfiRg = 0; dyfiRg < (392 - 384); dyfiRg = dyfiRg + 1)
            cout << aISRbu52[hAZmh3sy][dyfiRg] << ' ';
        cout << aISRbu52[hAZmh3sy][8] << endl;
    }
    return 0;
}

