main () {
    int g5XCc6xNUWzr, R3bviB, yPl8yZmpS, VNHDr0jOy1Gz, R5ONrhiHjR, c, OzOsCWpJG4B, FEDvMCfaFG, q, hqviTl, hadGZk, sIPxkQfs, m, tj [(1745 - 745)], waZIVYx [(1595 - 595)];
    for (R3bviB = (527 - 527);; R3bviB = R3bviB +1) {
        scanf ("%d", &g5XCc6xNUWzr);
        if (!((679 - 679) != g5XCc6xNUWzr))
            break;
        c = (231 - 231);
        OzOsCWpJG4B = g5XCc6xNUWzr - (518 - 517);
        FEDvMCfaFG = (853 - 853);
        hadGZk = (447 - 447);
        q = g5XCc6xNUWzr - (504 - 503);
        hqviTl = (694 - 694);
        {
            m = 62 - 62;
            while (m <= (1404 - 405)) {
                tj[m] = (959 - 959);
                waZIVYx[m] = (649 - 649);
                m++;
            }
        }
        {
            yPl8yZmpS = 35 - 35;
            for (; g5XCc6xNUWzr - (802 - 801) >= yPl8yZmpS;) {
                scanf ("%d", &tj[yPl8yZmpS]);
                yPl8yZmpS++;
            }
        }
        for (yPl8yZmpS = (31 - 31); yPl8yZmpS <= g5XCc6xNUWzr - (422 - 421); yPl8yZmpS++) {
            scanf ("%d", &waZIVYx[yPl8yZmpS]);
        }
        for (VNHDr0jOy1Gz = (433 - 433); g5XCc6xNUWzr - (483 - 481) >= VNHDr0jOy1Gz; VNHDr0jOy1Gz = VNHDr0jOy1Gz +1) {
            for (R5ONrhiHjR = VNHDr0jOy1Gz +(939 - 938); g5XCc6xNUWzr - (890 - 889) >= R5ONrhiHjR; R5ONrhiHjR = R5ONrhiHjR +1) {
                if (tj[R5ONrhiHjR] > tj[VNHDr0jOy1Gz]) {
                    c = tj[VNHDr0jOy1Gz];
                    tj[VNHDr0jOy1Gz] = tj[R5ONrhiHjR];
                    tj[R5ONrhiHjR] = c;
                    c = (759 - 759);
                }
            }
        }
        for (VNHDr0jOy1Gz = (271 - 271); VNHDr0jOy1Gz <= g5XCc6xNUWzr - (502 - 500); VNHDr0jOy1Gz++) {
            for (R5ONrhiHjR = VNHDr0jOy1Gz +(973 - 972); g5XCc6xNUWzr - (818 - 817) >= R5ONrhiHjR; R5ONrhiHjR++) {
                if (waZIVYx[VNHDr0jOy1Gz] < waZIVYx[R5ONrhiHjR]) {
                    c = waZIVYx[VNHDr0jOy1Gz];
                    waZIVYx[VNHDr0jOy1Gz] = waZIVYx[R5ONrhiHjR];
                    waZIVYx[R5ONrhiHjR] = c;
                    c = (648 - 648);
                }
            }
        }
        for (sIPxkQfs = 0; sIPxkQfs <= g5XCc6xNUWzr - (846 - 845); sIPxkQfs = sIPxkQfs + 1) {
            if (tj[OzOsCWpJG4B] > waZIVYx[q]) {
                hadGZk = hadGZk + (464 - 264);
                OzOsCWpJG4B = OzOsCWpJG4B -(132 - 131);
                q = q - (630 - 629);
            }
            else if (tj[OzOsCWpJG4B] < waZIVYx[q]) {
                OzOsCWpJG4B = OzOsCWpJG4B -(805 - 804);
                hqviTl = hqviTl + (269 - 268);
                hadGZk = hadGZk - (632 - 432);
            }
            else if (tj[OzOsCWpJG4B] == waZIVYx[q]) {
                if (tj[FEDvMCfaFG] > waZIVYx[hqviTl]) {
                    FEDvMCfaFG = FEDvMCfaFG +(451 - 450);
                    hadGZk = hadGZk + (953 - 753);
                    hqviTl = hqviTl + (526 - 525);
                }
                else {
                    if (tj[FEDvMCfaFG] == waZIVYx[hqviTl]) {
                        if (tj[OzOsCWpJG4B] < waZIVYx[hqviTl]) {
                            hadGZk = hadGZk - (1072 - 872);
                            OzOsCWpJG4B = OzOsCWpJG4B -(293 - 292);
                            hqviTl = hqviTl + (292 - 291);
                        }
                        else if (tj[OzOsCWpJG4B] == waZIVYx[hqviTl]) {
                            hqviTl = hqviTl + 1;
                            OzOsCWpJG4B = OzOsCWpJG4B -(239 - 238);
                        }
                    }
                    else if (tj[FEDvMCfaFG] < waZIVYx[hqviTl]) {
                        hadGZk = hadGZk - 200;
                        hqviTl = hqviTl + 1;
                        OzOsCWpJG4B = OzOsCWpJG4B -1;
                    }
                }
            }
        }
        printf ("%d\n", hadGZk);
    }
    return 0;
}

