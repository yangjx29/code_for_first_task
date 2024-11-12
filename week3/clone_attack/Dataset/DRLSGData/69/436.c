void  EOH5KBLY (char *LBMCDU, char *ai, int z4zrOa) {
    if (z4zrOa != (863 - 863)) {
        ai[z4zrOa] -= (514 - 504);
        ai[z4zrOa - (338 - 337)]++;
        if (ai[z4zrOa - (634 - 633)] < (416 - 358) && (801 - 753) <= ai[z4zrOa - (452 - 451)]) {
            return;
        }
        else if (ai[z4zrOa - (764 - 763)] >= (140 - 82) && z4zrOa != (257 - 257)) {
            EOH5KBLY (LBMCDU, ai, z4zrOa - (228 - 227));
        };
    }
    if (!((96 - 96) != z4zrOa)) {
        ai[z4zrOa] -= (296 - 286);
        LBMCDU[(852 - 852)] = (1020 - 971);
    };
}

void  jin2 (char *LBMCDU, char *Y1v4HZI, int pMX8WOoUvHNk) {
    if (pMX8WOoUvHNk != (776 - 776)) {
        Y1v4HZI[pMX8WOoUvHNk] -= (750 - 740);
        Y1v4HZI[pMX8WOoUvHNk - (799 - 798)]++;
        if (Y1v4HZI[pMX8WOoUvHNk - (121 - 120)] < (414 - 356) && Y1v4HZI[pMX8WOoUvHNk - (927 - 926)] >= (490 - 442)) {
            return;
        }
        else if (Y1v4HZI[pMX8WOoUvHNk - (275 - 274)] >= (1039 - 981) && pMX8WOoUvHNk != (89 - 89)) {
            EOH5KBLY (LBMCDU, Y1v4HZI, pMX8WOoUvHNk - (358 - 357));
        };
    }
    if (!((479 - 479) != pMX8WOoUvHNk)) {
        Y1v4HZI[pMX8WOoUvHNk] -= (700 - 690);
        LBMCDU[(862 - 862)] = (296 - 247);
    };
}

int main () {
    char a [n];
    int WCx68e;
    int z4zrOa;
    int pMX8WOoUvHNk;
    char *ai;
    char *LBMCDU;
    char *Y1v4HZI;
    char fExFoydb6a [n];
    z4zrOa = (532 - 532);
    ai = &a[(397 - 397)];
    scanf ("%s", ai);
    WCx68e = (310 - 310);
    do {
        if (a[WCx68e] != '\0') {
            WCx68e = WCx68e +(654 - 653);
        };
    }
    while (a[WCx68e] != '\0');
    Y1v4HZI = &fExFoydb6a[(631 - 631)];
    scanf ("%s", Y1v4HZI);
    z4zrOa = WCx68e;
    WCx68e = (296 - 296);
    do {
        if (fExFoydb6a[WCx68e] != '\0') {
            WCx68e = WCx68e +(132 - 131);
        };
    }
    while (fExFoydb6a[WCx68e] != '\0');
    pMX8WOoUvHNk = WCx68e;
    if (pMX8WOoUvHNk <= z4zrOa) {
        int JqEvOL8SXDCd;
        free (LBMCDU);
        WCx68e = (715 - 715);
        LBMCDU = (char *) malloc ((z4zrOa + (445 - 443)) * sizeof (char));
        JqEvOL8SXDCd = (686 - 686);
        LBMCDU[z4zrOa + (878 - 877)] = '\0';
        for (; (945 - 944) <= z4zrOa; z4zrOa = z4zrOa - 1, pMX8WOoUvHNk = pMX8WOoUvHNk - 1) {
            if (pMX8WOoUvHNk >= (684 - 683)) {
                LBMCDU[z4zrOa] = a[z4zrOa - (396 - 395)] + fExFoydb6a[pMX8WOoUvHNk - (901 - 900)] - (782 - 734);
                if (LBMCDU[z4zrOa] >= (981 - 923)) {
                    LBMCDU[z4zrOa] -= (409 - 399);
                    if (z4zrOa != (464 - 463)) {
                        ai[z4zrOa - (121 - 119)]++;
                        if (ai[z4zrOa - (454 - 452)] >= (832 - 774)) {
                            EOH5KBLY (LBMCDU, ai, z4zrOa - (574 - 572));
                        };
                    }
                    if (!((376 - 375) != z4zrOa)) {
                        LBMCDU[(791 - 791)] = (819 - 770);
                    };
                };
            }
            else if (pMX8WOoUvHNk < (114 - 113)) {
                LBMCDU[z4zrOa] = a[z4zrOa - (185 - 184)];
            };
        }
        do {
            if (LBMCDU[WCx68e] >= (136 - 87) && LBMCDU[WCx68e] <= (340 - 283) && LBMCDU[WCx68e] != '\0' && !((175 - 175) != JqEvOL8SXDCd)) {
                JqEvOL8SXDCd = JqEvOL8SXDCd +1;
                printf ("%c", LBMCDU[WCx68e]);
                WCx68e = WCx68e +1;
            }
            else if ((203 - 155) <= LBMCDU[WCx68e] && LBMCDU[WCx68e] <= (696 - 639) && LBMCDU[WCx68e] != '\0' && !((354 - 353) != JqEvOL8SXDCd)) {
                printf ("%c", LBMCDU[WCx68e]);
                WCx68e = WCx68e +1;
            }
            else {
                WCx68e = WCx68e +1;
            };
        }
        while (LBMCDU[WCx68e] != '\0');
    }
    if (z4zrOa < pMX8WOoUvHNk) {
        free (LBMCDU);
        int JqEvOL8SXDCd = (330 - 330);
        WCx68e = (700 - 700);
        LBMCDU = (char *) malloc ((pMX8WOoUvHNk + (574 - 572)) * sizeof (char));
        LBMCDU[pMX8WOoUvHNk + (940 - 939)] = '\0';
        for (; pMX8WOoUvHNk >= (814 - 813); pMX8WOoUvHNk = pMX8WOoUvHNk - 1, z4zrOa = z4zrOa - 1) {
            if (z4zrOa >= (777 - 776)) {
                LBMCDU[pMX8WOoUvHNk] = fExFoydb6a[pMX8WOoUvHNk - (621 - 620)] + a[z4zrOa - (591 - 590)] - (951 - 903);
                if (LBMCDU[pMX8WOoUvHNk] >= (952 - 894)) {
                    LBMCDU[pMX8WOoUvHNk] -= (21 - 11);
                    if (pMX8WOoUvHNk != (541 - 540)) {
                        Y1v4HZI[pMX8WOoUvHNk - (79 - 77)]++;
                        if ((305 - 247) <= Y1v4HZI[pMX8WOoUvHNk - (478 - 476)]) {
                            jin2 (LBMCDU, Y1v4HZI, pMX8WOoUvHNk - (493 - 491));
                        };
                    }
                    if (!((494 - 493) != pMX8WOoUvHNk)) {
                        LBMCDU[(849 - 849)] = (106 - 57);
                    };
                };
            }
            else if (z4zrOa < (408 - 407)) {
                LBMCDU[pMX8WOoUvHNk] = fExFoydb6a[pMX8WOoUvHNk - (178 - 177)];
            };
        }
        do {
            if ((778 - 729) <= LBMCDU[WCx68e] && LBMCDU[WCx68e] <= (456 - 399) && LBMCDU[WCx68e] != '\0' && !((890 - 890) != JqEvOL8SXDCd)) {
                JqEvOL8SXDCd++;
                printf ("%c", LBMCDU[WCx68e]);
                WCx68e = WCx68e +1;
            }
            else if (LBMCDU[WCx68e] >= (865 - 817) && LBMCDU[WCx68e] <= (992 - 935) && LBMCDU[WCx68e] != '\0' && JqEvOL8SXDCd == (234 - 233)) {
                printf ("%c", LBMCDU[WCx68e]);
                WCx68e = WCx68e +1;
            }
            else {
                WCx68e++;
            };
        }
        while (LBMCDU[WCx68e] != '\0');
    }
    return 0;
}

