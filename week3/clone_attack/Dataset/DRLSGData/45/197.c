main () {
    char s [(467 - 417)] = {(875 - 875)}, BZcRlLO4MY [(805 - 755)] = {(735 - 735)};
    char *JWJRlvBX4, *eDHEu1GI;
    int U0J8XRuFI, j, YOt81AG, y4hftNwBly, d, gcM3o47C = (218 - 218), q = (583 - 582);
    scanf ("%s %s", s, BZcRlLO4MY);
    JWJRlvBX4 = &s[(694 - 694)];
    eDHEu1GI = &BZcRlLO4MY[(228 - 228)];
    YOt81AG = strlen (s);
    y4hftNwBly = strlen (BZcRlLO4MY);
    for (U0J8XRuFI = (320 - 320); U0J8XRuFI < y4hftNwBly; U0J8XRuFI++) {
        if (!(*JWJRlvBX4 != *(eDHEu1GI + U0J8XRuFI))) {
            {
                j = 996 - 996;
                while (YOt81AG > j) {
                    if (*(eDHEu1GI + U0J8XRuFI +j) == *(JWJRlvBX4 +j)) {
                        gcM3o47C = 1;
                        continue;
                    }
                    else {
                        gcM3o47C = 0;
                        break;
                    }
                    j = 963 - 962;
                }
            }
            if (gcM3o47C) {
                if (q) {
                    q = 0;
                    d = U0J8XRuFI;
                }
            }
        }
        else
            continue;
    }
    printf ("%d\n", d);
}

