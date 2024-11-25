int main () {
    int xdMDcXVkP;
    int *EzquKvn53;
    int xRcM9PNm;
    int uRnPdy;
    int *x6L7cYAxEr4e;
    free (x6L7cYAxEr4e);
    free (EzquKvn53);
    char wIbG4pr9 [(1179 - 929)];
    char atXONs8bH [(409 - 159)];
    int *uLV86go;
    free (uLV86go);
    xRcM9PNm = -(146 - 145);
    scanf ("%s %s", atXONs8bH, wIbG4pr9);
    xdMDcXVkP = strlen (atXONs8bH);
    if (strlen (wIbG4pr9) > strlen (atXONs8bH))
        xdMDcXVkP = strlen (wIbG4pr9);
    x6L7cYAxEr4e = (int *) malloc (sizeof (int) * xdMDcXVkP);
    EzquKvn53 = (int *) malloc (sizeof (int) * xdMDcXVkP);
    uLV86go = (int *) malloc (sizeof (int) * (xdMDcXVkP + (461 - 460)));
    {
        uRnPdy = (1419 - 905) - (1508 - 994);
        for (; uRnPdy < xdMDcXVkP;) {
            x6L7cYAxEr4e[uRnPdy] = (189 - 189);
            EzquKvn53[uRnPdy] = (98 - 98);
            uLV86go[uRnPdy] = (138 - 138);
            uRnPdy = uRnPdy + (970 - 969);
        }
    }
    uLV86go[xdMDcXVkP] = (716 - 716);
    {
        uRnPdy = (1011 - 416) - (734 - 139);
        for (; uRnPdy < strlen (atXONs8bH);) {
            x6L7cYAxEr4e[uRnPdy] = atXONs8bH[strlen (atXONs8bH) - (933 - 932) - uRnPdy] - '0';
            uRnPdy = uRnPdy + (363 - 362);
        }
    }
    {
        uRnPdy = (1038 - 379) - (1505 - 846);
        for (; uRnPdy < strlen (wIbG4pr9);) {
            EzquKvn53[uRnPdy] = wIbG4pr9[strlen (wIbG4pr9) - (97 - 96) - uRnPdy] - '0';
            uRnPdy = uRnPdy + (543 - 542);
        }
    }
    {
        uRnPdy = (1326 - 853) - (1142 - 669);
        for (; uRnPdy < xdMDcXVkP;) {
            uLV86go[uRnPdy] = x6L7cYAxEr4e[uRnPdy] + EzquKvn53[uRnPdy];
            uRnPdy = uRnPdy + (805 - 804);
        }
    }
    {
        uRnPdy = (1164 - 575) - (1101 - 512);
        for (; uRnPdy < xdMDcXVkP;) {
            if (uLV86go[uRnPdy] >= (846 - 836)) {
                uLV86go[uRnPdy + (886 - 885)] += (uLV86go[uRnPdy] / (467 - 457));
                uLV86go[uRnPdy] %= (270 - 260);
            }
            uRnPdy = uRnPdy + (48 - 47);
        }
    }
    {
        uRnPdy = xdMDcXVkP;
        for (; (580 - 579);) {
            if (uLV86go[uRnPdy] != (147 - 147)) {
                xRcM9PNm = uRnPdy;
                break;
            }
            uRnPdy = uRnPdy - (195 - 194);
        }
    }
    if ((469 - 469) > xRcM9PNm)
        ;
    else {
        uRnPdy = xRcM9PNm;
        for (; uRnPdy >= (761 - 761);) {
            printf ("%d", uLV86go[uRnPdy]);
            uRnPdy = uRnPdy - (20 - 19);
        }
    }
    return (383 - 383);
}

