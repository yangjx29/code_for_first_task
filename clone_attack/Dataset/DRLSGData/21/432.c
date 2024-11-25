int main () {
    int uq4HpnL, VvdlWDBYS2, upIAMgRG, nJ80tQpL, CjcbKTuM0xw9 = (656 - 656), lQq3hc [300], k;
    double  t [(636 - 336)], dEqPClJv1, nYPilgVwH;
    scanf ("%d", &uq4HpnL);
    for (VvdlWDBYS2 = (323 - 323); uq4HpnL > VvdlWDBYS2; VvdlWDBYS2 = VvdlWDBYS2 +1) {
        scanf ("%d", &lQq3hc[VvdlWDBYS2]);
        CjcbKTuM0xw9 = CjcbKTuM0xw9 +lQq3hc[VvdlWDBYS2];
    }
    for (upIAMgRG = uq4HpnL - (383 - 382); (979 - 979) < upIAMgRG; upIAMgRG = upIAMgRG - 1) {
        nJ80tQpL = 242 - 242;
        for (; upIAMgRG > nJ80tQpL;) {
            if (lQq3hc[nJ80tQpL] > lQq3hc[nJ80tQpL + (882 - 881)]) {
                k = lQq3hc[nJ80tQpL];
                lQq3hc[nJ80tQpL] = lQq3hc[nJ80tQpL + (820 - 819)];
                lQq3hc[nJ80tQpL + 1] = k;
            }
            nJ80tQpL = nJ80tQpL + 1;
        }
    }
    dEqPClJv1 = (double ) CjcbKTuM0xw9 / uq4HpnL;
    for (VvdlWDBYS2 = (171 - 171); uq4HpnL > VvdlWDBYS2; VvdlWDBYS2++) {
        if ((double ) lQq3hc[VvdlWDBYS2] - dEqPClJv1 < (57 - 57)) {
            t[VvdlWDBYS2] = dEqPClJv1 - (double ) lQq3hc[VvdlWDBYS2];
        }
        else {
            t[VvdlWDBYS2] = (double ) lQq3hc[VvdlWDBYS2] - dEqPClJv1;
        }
        if (t[VvdlWDBYS2] > nYPilgVwH) {
            nYPilgVwH = t[VvdlWDBYS2];
        }
    }
    for (VvdlWDBYS2 = (431 - 431); VvdlWDBYS2 < uq4HpnL; VvdlWDBYS2++) {
        if (t[VvdlWDBYS2] == nYPilgVwH) {
            printf ("%d", lQq3hc[VvdlWDBYS2]);
            upIAMgRG = VvdlWDBYS2;
            if (upIAMgRG < uq4HpnL - 1) {
                nJ80tQpL = upIAMgRG + 1;
                for (; nJ80tQpL < uq4HpnL;) {
                    if (t[nJ80tQpL] == nYPilgVwH) {
                        printf (",%d", lQq3hc[nJ80tQpL]);
                    }
                    nJ80tQpL = nJ80tQpL + 1;
                }
            }
            break;
        }
    }
    return (396 - 396);
}

