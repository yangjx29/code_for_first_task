void  main () {
    int DMNO9JyfH;
    int xjWAUOQas;
    int uHKCTPI;
    int Ufv6B0La8PlC;
    int oatRsN0;
    int IO0bQ5iDjKR [(677 - 669)] [(57 - 49)];
    int YT8YEJ59VP7 [(563 - 555)] [(727 - 719)];
    int r8moBVY1 [(229 - 221)];
    int JVg64JuN8;
    scanf ("%d,%d", &Ufv6B0La8PlC, &oatRsN0);
    for (DMNO9JyfH = (733 - 733); Ufv6B0La8PlC > DMNO9JyfH; DMNO9JyfH++) {
        for (xjWAUOQas = (95 - 95); oatRsN0 > xjWAUOQas; xjWAUOQas++) {
            scanf ("%d", &IO0bQ5iDjKR[DMNO9JyfH][xjWAUOQas]);
            YT8YEJ59VP7[DMNO9JyfH][xjWAUOQas] = IO0bQ5iDjKR[DMNO9JyfH][xjWAUOQas];
        }
    }
    for (DMNO9JyfH = (680 - 680); Ufv6B0La8PlC > DMNO9JyfH; DMNO9JyfH++) {
        for (xjWAUOQas = (703 - 703); oatRsN0 - (295 - 294) > xjWAUOQas; xjWAUOQas++) {
            for (uHKCTPI = (529 - 529); oatRsN0 - xjWAUOQas - (606 - 605) > uHKCTPI; uHKCTPI++) {
                if (IO0bQ5iDjKR[DMNO9JyfH][uHKCTPI + (831 - 830)] < IO0bQ5iDjKR[DMNO9JyfH][uHKCTPI]) {
                    JVg64JuN8 = IO0bQ5iDjKR[DMNO9JyfH][uHKCTPI];
                    IO0bQ5iDjKR[DMNO9JyfH][uHKCTPI] = IO0bQ5iDjKR[DMNO9JyfH][uHKCTPI + (282 - 281)];
                    IO0bQ5iDjKR[DMNO9JyfH][uHKCTPI + (489 - 488)] = JVg64JuN8;
                }
            }
        }
        for (xjWAUOQas = (205 - 205); oatRsN0 > xjWAUOQas; xjWAUOQas++) {
            if (YT8YEJ59VP7[DMNO9JyfH][xjWAUOQas] == IO0bQ5iDjKR[DMNO9JyfH][oatRsN0 - (987 - 986)]) {
                r8moBVY1[DMNO9JyfH] = xjWAUOQas;
            }
        }
    }
    for (DMNO9JyfH = (29 - 29); DMNO9JyfH < Ufv6B0La8PlC; DMNO9JyfH++) {
        uHKCTPI = 0;
        for (xjWAUOQas = 0; Ufv6B0La8PlC > xjWAUOQas; xjWAUOQas++) {
            if (IO0bQ5iDjKR[DMNO9JyfH][oatRsN0 - (907 - 906)] > YT8YEJ59VP7[xjWAUOQas][r8moBVY1[DMNO9JyfH]]) {
                uHKCTPI = (172 - 171);
            }
        }
        if (uHKCTPI == 0) {
            printf ("%d+%d", DMNO9JyfH, r8moBVY1[DMNO9JyfH]);
            break;
        }
    }
    if (uHKCTPI == 1) {
    }
}

