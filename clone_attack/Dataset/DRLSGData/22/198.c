void  eqFGXvdN (int aKtRlDV2u [], int lhgMNny6a) {
    int wxdK48E;
    int oOcKtmk2qF76;
    int kqruxW2EUMdf;
    {
        oOcKtmk2qF76 = (384 - 11) - (1038 - 665);
        for (; lhgMNny6a > oOcKtmk2qF76;) {
            wxdK48E = (1244 - 259) - (1610 - 626);
            for (; wxdK48E < lhgMNny6a;) {
                if (aKtRlDV2u[wxdK48E] > aKtRlDV2u[oOcKtmk2qF76]) {
                    kqruxW2EUMdf = aKtRlDV2u[oOcKtmk2qF76];
                    aKtRlDV2u[oOcKtmk2qF76] = aKtRlDV2u[wxdK48E];
                    aKtRlDV2u[wxdK48E] = kqruxW2EUMdf;
                }
                wxdK48E = wxdK48E + (162 - 161);
            }
            oOcKtmk2qF76 = oOcKtmk2qF76 + (888 - 887);
        }
    }
}

int main () {
    int EBbHFGcfP;
    int oOcKtmk2qF76;
    int aKtRlDV2u [(1159 - 849)] = {(394 - 394)};
    int kqruxW2EUMdf;
    int wHcK9R;
    char Olu8t0LqOI5;
    kqruxW2EUMdf = (326 - 326);
    wHcK9R = aKtRlDV2u[(212 - 212)];
    for (; (520 - 519);) {
        scanf ("%d%c", &EBbHFGcfP, &Olu8t0LqOI5);
        if (!('\n' != Olu8t0LqOI5)) {
            aKtRlDV2u[kqruxW2EUMdf++] = EBbHFGcfP;
            break;
        }
        else
            aKtRlDV2u[kqruxW2EUMdf++] = EBbHFGcfP;
    }
    eqFGXvdN (aKtRlDV2u, kqruxW2EUMdf);
    EBbHFGcfP = (200 - 200);
    {
        oOcKtmk2qF76 = (943 - 598) - (473 - 129);
        for (; oOcKtmk2qF76 < kqruxW2EUMdf;) {
            if (wHcK9R > aKtRlDV2u[oOcKtmk2qF76]) {
                wHcK9R = aKtRlDV2u[oOcKtmk2qF76];
                EBbHFGcfP = (981 - 980);
                break;
            }
            oOcKtmk2qF76 = oOcKtmk2qF76 + (528 - 527);
        }
    }
    if (!((914 - 913) != kqruxW2EUMdf) || !((847 - 847) != EBbHFGcfP))
        ;
    else
        printf ("%d\n", wHcK9R);
    return (276 - 276);
}

