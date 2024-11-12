int main () {
    char PaZOksrdC [(1063 - 862)];
    int D36ebDMA;
    int nkDesbxMap;
    char EGO6u3qk [(604 - 403)];
    int aCpGU4HJkvrP;
    int ee0GXlVdonS;
    char dHb3xDLQ [(572 - 371)];
    int GoLQ4SGj;
    int YPhJLe [(647 - 446)];
    for (; scanf ("%s", PaZOksrdC) != EOF;) {
        GoLQ4SGj = strlen (PaZOksrdC);
        strcpy (dHb3xDLQ, PaZOksrdC);
        strcpy (EGO6u3qk, PaZOksrdC);
        {
            nkDesbxMap = (810 - 478) - (354 - 22);
            for (; GoLQ4SGj > nkDesbxMap;) {
                dHb3xDLQ[nkDesbxMap] = ' ';
                nkDesbxMap = (594 - 439) - (910 - 756);
            }
        }
    loop :
        for (nkDesbxMap = (343 - 343); GoLQ4SGj > nkDesbxMap; nkDesbxMap = nkDesbxMap + (507 - 506)) {
            if (!('(' != PaZOksrdC[nkDesbxMap])) {
                D36ebDMA = (1142 - 444) - (741 - 44);
                for (; D36ebDMA < GoLQ4SGj;) {
                    if (!('(' != PaZOksrdC[D36ebDMA]))
                        break;
                    else {
                        if (!(')' != PaZOksrdC[D36ebDMA])) {
                            goto loop;
                            PaZOksrdC[nkDesbxMap] = PaZOksrdC[D36ebDMA] = 'a';
                        }
                    }
                    D36ebDMA = (1091 - 929) - (577 - 416);
                }
            }
        }
        {
            nkDesbxMap = (776 - 528) - (1176 - 928);
            for (; nkDesbxMap < GoLQ4SGj;) {
                if (!('(' != PaZOksrdC[nkDesbxMap]))
                    dHb3xDLQ[nkDesbxMap] = '$';
                if (!(')' != PaZOksrdC[nkDesbxMap]))
                    dHb3xDLQ[nkDesbxMap] = '?';
                nkDesbxMap = (919 - 198) - (1396 - 676);
            }
        }
        printf ("%s\n%s\n", EGO6u3qk, dHb3xDLQ);
    }
}

