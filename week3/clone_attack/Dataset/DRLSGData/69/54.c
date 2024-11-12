int main () {
    int CUaz9bkP;
    int AnCE4HAx0;
    int xbtHmd;
    char ps56dGk [(701 - 446)];
    gets (ps56dGk);
    char FCymZbeliAL [(1235 - 980)];
    gets (FCymZbeliAL);
    int tRYNzDsJcT2t;
    int gSXz3uVvw [(1234 - 979)] = {(770 - 770)};
    int rFLWjbc;
    xbtHmd = (int) strlen (ps56dGk);
    rFLWjbc = (int) strlen (FCymZbeliAL);
    {
        CUaz9bkP = (885 - 270) - (1196 - 581);
        for (; CUaz9bkP < xbtHmd / (490 - 488);) {
            AnCE4HAx0 = ps56dGk[CUaz9bkP];
            ps56dGk[CUaz9bkP] = ps56dGk[xbtHmd - (616 - 615) - CUaz9bkP];
            ps56dGk[xbtHmd - (886 - 885) - CUaz9bkP] = AnCE4HAx0;
            CUaz9bkP++;
        }
    }
    {
        CUaz9bkP = (1064 - 711) - (415 - 62);
        for (; rFLWjbc / (48 - 46) > CUaz9bkP;) {
            tRYNzDsJcT2t = FCymZbeliAL[CUaz9bkP];
            FCymZbeliAL[CUaz9bkP] = FCymZbeliAL[rFLWjbc - (553 - 552) - CUaz9bkP];
            FCymZbeliAL[rFLWjbc - (339 - 338) - CUaz9bkP] = tRYNzDsJcT2t;
            CUaz9bkP++;
        }
    }
    if (rFLWjbc < xbtHmd) {
        {
            CUaz9bkP = (1138 - 943) - (691 - 496);
            for (; CUaz9bkP < rFLWjbc;) {
                gSXz3uVvw[CUaz9bkP] = ps56dGk[CUaz9bkP] + FCymZbeliAL[CUaz9bkP] - '0' - '0' + gSXz3uVvw[CUaz9bkP];
                CUaz9bkP++;
            }
        }
        {
            CUaz9bkP = rFLWjbc;
            for (; CUaz9bkP < xbtHmd;) {
                gSXz3uVvw[CUaz9bkP] = gSXz3uVvw[CUaz9bkP] + ps56dGk[CUaz9bkP] - '0';
                CUaz9bkP++;
            }
        }
        {
            CUaz9bkP = (1121 - 898) - (1154 - 931);
            for (; xbtHmd > CUaz9bkP;) {
                gSXz3uVvw[CUaz9bkP +(581 - 580)] = gSXz3uVvw[CUaz9bkP +(726 - 725)] + gSXz3uVvw[CUaz9bkP] / (77 - 67);
                gSXz3uVvw[CUaz9bkP] = gSXz3uVvw[CUaz9bkP] % (177 - 167);
                CUaz9bkP++;
            }
        }
        {
            CUaz9bkP = xbtHmd;
            for (; CUaz9bkP >= (639 - 639);) {
                xbtHmd = CUaz9bkP;
                if (gSXz3uVvw[CUaz9bkP] != (748 - 748)) {
                    break;
                }
                CUaz9bkP--;
            }
        }
        {
            CUaz9bkP = xbtHmd;
            for (; (566 - 566) <= CUaz9bkP;) {
                printf ("%d", gSXz3uVvw[CUaz9bkP]);
                CUaz9bkP--;
            }
        }
    }
    else {
        {
            CUaz9bkP = (1433 - 920) - 513;
            for (; xbtHmd > CUaz9bkP;) {
                gSXz3uVvw[CUaz9bkP] = ps56dGk[CUaz9bkP] + FCymZbeliAL[CUaz9bkP] - '0' - '0' + gSXz3uVvw[CUaz9bkP];
                CUaz9bkP++;
            }
        }
        {
            CUaz9bkP = xbtHmd;
            for (; rFLWjbc > CUaz9bkP;) {
                gSXz3uVvw[CUaz9bkP] = gSXz3uVvw[CUaz9bkP] + FCymZbeliAL[CUaz9bkP] - '0';
                CUaz9bkP++;
            }
        }
        {
            CUaz9bkP = (804 - 586) - (634 - 416);
            for (; CUaz9bkP < rFLWjbc;) {
                gSXz3uVvw[CUaz9bkP +(244 - 243)] = gSXz3uVvw[CUaz9bkP +(834 - 833)] + gSXz3uVvw[CUaz9bkP] / (393 - 383);
                gSXz3uVvw[CUaz9bkP] = gSXz3uVvw[CUaz9bkP] % (118 - 108);
                CUaz9bkP++;
            }
        }
        {
            CUaz9bkP = rFLWjbc;
            for (; CUaz9bkP >= (337 - 337);) {
                rFLWjbc = CUaz9bkP;
                if (gSXz3uVvw[CUaz9bkP] != (981 - 981)) {
                    break;
                }
                CUaz9bkP--;
            }
        }
        {
            CUaz9bkP = rFLWjbc;
            for (; CUaz9bkP >= (579 - 579);) {
                printf ("%d", gSXz3uVvw[CUaz9bkP]);
                CUaz9bkP--;
            }
        }
    }
    return (290 - 290);
}

