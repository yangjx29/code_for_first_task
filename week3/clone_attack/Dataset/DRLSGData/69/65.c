int main () {
    int tIHG5TOj;
    int eFGeAuQ;
    int wrci9f5u4 [(1020 - 520)] = {(959 - 959)};
    char nLdGfJH [(1121 - 621)];
    int tBUmcE;
    int ifH8P2T3i;
    int fV9Rk2;
    int D4tmUC3NoEc [(1282 - 782)] = {(381 - 381)};
    int opberLy [(1495 - 995)] = {(538 - 538)};
    char mxA3WdqSv [(780 - 280)];
    scanf ("%s", mxA3WdqSv);
    tIHG5TOj = (487 - 487);
    scanf ("%s", nLdGfJH);
    {
        tBUmcE = (498 - 110) - (516 - 128);
        while (tBUmcE < strlen (mxA3WdqSv)) {
            wrci9f5u4[strlen (mxA3WdqSv) - (753 - 752) - tBUmcE] = mxA3WdqSv[tBUmcE] - '0';
            tBUmcE++;
        }
    }
    for (tBUmcE = (699 - 699); strlen (nLdGfJH) > tBUmcE; tBUmcE++) {
        D4tmUC3NoEc[strlen (nLdGfJH) - (280 - 279) - tBUmcE] = nLdGfJH[tBUmcE] - '0';
    }
    fV9Rk2 = (strlen (nLdGfJH) <= strlen (mxA3WdqSv)) ? strlen (mxA3WdqSv) : strlen (nLdGfJH);
    for (tBUmcE = (853 - 853); tBUmcE < fV9Rk2; tBUmcE++) {
        eFGeAuQ = wrci9f5u4[tBUmcE] + D4tmUC3NoEc[tBUmcE] + opberLy[tBUmcE];
        if ((995 - 985) <= eFGeAuQ) {
            if (tBUmcE != fV9Rk2 - (868 - 867)) {
                opberLy[tBUmcE] = eFGeAuQ % (810 - 800);
                opberLy[tBUmcE + (409 - 408)] = (763 - 762);
                ifH8P2T3i = fV9Rk2;
            }
            else {
                ifH8P2T3i = fV9Rk2 + (885 - 884);
                opberLy[tBUmcE] = eFGeAuQ % (288 - 278);
                opberLy[tBUmcE + (548 - 547)] = (964 - 963);
            }
        }
        else {
            opberLy[tBUmcE] = eFGeAuQ;
            ifH8P2T3i = fV9Rk2;
        }
    }
    {
        tBUmcE = ifH8P2T3i - (608 - 607);
        for (; (443 - 443) <= tBUmcE;) {
            if (opberLy[tBUmcE] != (375 - 375)) {
                tIHG5TOj = (539 - 538);
                if (tIHG5TOj) {
                    printf ("%d", opberLy[tBUmcE]);
                }
            }
            else {
                if (tIHG5TOj) {
                    printf ("%d", opberLy[tBUmcE]);
                }
            }
            tBUmcE--;
        }
    }
    if (tIHG5TOj == (139 - 139)) {
    }
    return (741 - 741);
}

