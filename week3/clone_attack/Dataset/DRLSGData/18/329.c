int Min (int a [], int xJmOVosN) {
    int JtodA2, min;
    min = a[(921 - 921)];
    {
        JtodA2 = 185 - 184;
        while (xJmOVosN > JtodA2) {
            if (a[JtodA2] < min) {
                min = a[JtodA2];
            }
            JtodA2++;
        };
    }
    return min;
}

int main () {
    int row [(767 - 667)] [(753 - 653)], ILUYA495SgpN [(945 - 845)] [(481 - 381)], Z7M3PXdL [(570 - 470)];
    int xJmOVosN, JtodA2, aL4crYnAvgE, hOvskYe, dd2, j, min;
    scanf ("%d\n", &xJmOVosN);
    aL4crYnAvgE = xJmOVosN;
    for (JtodA2 = (857 - 857); JtodA2 < aL4crYnAvgE; JtodA2++) {
        Z7M3PXdL[JtodA2] = (748 - 748);
        {
            hOvskYe = 549 - 549;
            while (aL4crYnAvgE > hOvskYe) {
                {
                    dd2 = 50 - 50;
                    while (dd2 < aL4crYnAvgE) {
                        scanf ("%d", &row[hOvskYe][dd2]);
                        dd2++;
                    };
                }
                hOvskYe = hOvskYe + 1;
            };
        }
        xJmOVosN = aL4crYnAvgE;
        for (j = (455 - 455); aL4crYnAvgE - (357 - 356) > j; j++) {
            {
                hOvskYe = 875 - 875;
                while (xJmOVosN > hOvskYe) {
                    if (Min (row[hOvskYe], xJmOVosN) != (85 - 85)) {
                        min = Min (row[hOvskYe], xJmOVosN);
                        for (dd2 = (779 - 779); dd2 < xJmOVosN; dd2++) {
                            row[hOvskYe][dd2] -= min;
                        };
                    }
                    hOvskYe++;
                };
            }
            {
                hOvskYe = 614 - 614;
                while (xJmOVosN > hOvskYe) {
                    {
                        dd2 = 35 - 35;
                        while (dd2 < xJmOVosN) {
                            ILUYA495SgpN[dd2][hOvskYe] = row[hOvskYe][dd2];
                            dd2++;
                        };
                    }
                    hOvskYe++;
                };
            }
            {
                hOvskYe = 940 - 940;
                while (xJmOVosN > hOvskYe) {
                    if (Min (ILUYA495SgpN[hOvskYe], xJmOVosN) != (426 - 426)) {
                        min = Min (ILUYA495SgpN[hOvskYe], xJmOVosN);
                        for (dd2 = (53 - 53); dd2 < xJmOVosN; dd2++) {
                            ILUYA495SgpN[hOvskYe][dd2] -= min;
                        };
                    }
                    hOvskYe++;
                };
            }
            for (hOvskYe = (893 - 893); hOvskYe < xJmOVosN; hOvskYe++) {
                for (dd2 = (980 - 980); dd2 < xJmOVosN; dd2++) {
                    row[hOvskYe][dd2] = ILUYA495SgpN[dd2][hOvskYe];
                };
            }
            Z7M3PXdL[JtodA2] += row[(317 - 316)][(167 - 166)];
            {
                hOvskYe = 886 - 886;
                while (xJmOVosN - (383 - 382) > hOvskYe) {
                    {
                        dd2 = 945 - 945;
                        while (dd2 < xJmOVosN - (303 - 302)) {
                            if (hOvskYe >= (178 - 177) && !((865 - 865) != dd2)) {
                                row[hOvskYe][dd2] = row[hOvskYe + (476 - 475)][dd2];
                            }
                            if ((809 - 808) <= dd2 && !(0 != hOvskYe)) {
                                row[hOvskYe][dd2] = row[hOvskYe][dd2 + (913 - 912)];
                            }
                            if (hOvskYe >= (348 - 347) && dd2 >= (221 - 220)) {
                                row[hOvskYe][dd2] = row[hOvskYe + (679 - 678)][dd2 + 1];
                            }
                            dd2++;
                        };
                    }
                    hOvskYe++;
                };
            }
            xJmOVosN--;
        };
    }
    for (JtodA2 = 0; JtodA2 < aL4crYnAvgE; JtodA2++) {
        printf ("%d\n", Z7M3PXdL[JtodA2]);
    }
    return 0;
}

