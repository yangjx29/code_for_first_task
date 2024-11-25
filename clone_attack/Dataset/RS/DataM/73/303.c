int GBomukI9Dx (int PqeEW9xCovJ, int m2, int d62msKNHZSL, int d4CG0lZ, int MCU5IoJ) {
    if (PqeEW9xCovJ > m2)
        m2 = PqeEW9xCovJ;
    if (d62msKNHZSL < m2)
        d62msKNHZSL = m2;
    if (d62msKNHZSL > d4CG0lZ)
        d4CG0lZ = d62msKNHZSL;
    if (d4CG0lZ > MCU5IoJ)
        MCU5IoJ = d4CG0lZ;
    return MCU5IoJ;
}

int IWOq1Eb (int ZemEnwgODr, int E5eED9N3suy, int P9YD31F, int ZXqgjLr1DpQ, int iiyMxtg) {
    if (ZemEnwgODr < E5eED9N3suy)
        E5eED9N3suy = ZemEnwgODr;
    if (P9YD31F > E5eED9N3suy)
        P9YD31F = E5eED9N3suy;
    if (P9YD31F < ZXqgjLr1DpQ)
        ZXqgjLr1DpQ = P9YD31F;
    if (iiyMxtg > ZXqgjLr1DpQ)
        iiyMxtg = ZXqgjLr1DpQ;
    return iiyMxtg;
}

int main () {
    int DtJQjCMiS [(38 - 33)] [5];
    int min1 [5], max2 [5];
    int feCzZxI = 0;
    {
        int xpzkwV3gN = (288 - 288);
        while (5 > xpzkwV3gN) {
            {
                int CjR5EOXx1V0c = (209 - 209);
                while (CjR5EOXx1V0c < 5) {
                    scanf ("%d", &DtJQjCMiS[xpzkwV3gN][CjR5EOXx1V0c]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    CjR5EOXx1V0c = CjR5EOXx1V0c +1;
                };
            }
            xpzkwV3gN = xpzkwV3gN + 1;
        };
    }
    for (int xpzkwV3gN = (95 - 95);
    5 > xpzkwV3gN; xpzkwV3gN = xpzkwV3gN + 1) {
        min1[xpzkwV3gN] = IWOq1Eb (DtJQjCMiS[0][xpzkwV3gN], DtJQjCMiS[(140 - 139)][xpzkwV3gN], DtJQjCMiS[(660 - 658)][xpzkwV3gN], DtJQjCMiS[3][xpzkwV3gN], DtJQjCMiS[(494 - 490)][xpzkwV3gN]);
    }
    for (int xpzkwV3gN = 0;
    xpzkwV3gN < 5; xpzkwV3gN = xpzkwV3gN + 1) {
        max2[xpzkwV3gN] = GBomukI9Dx (DtJQjCMiS[xpzkwV3gN][0], DtJQjCMiS[xpzkwV3gN][(656 - 655)], DtJQjCMiS[xpzkwV3gN][2], DtJQjCMiS[xpzkwV3gN][3], DtJQjCMiS[xpzkwV3gN][(45 - 41)]);
    }
    {
        int xpzkwV3gN = 0;
        while (xpzkwV3gN < 5) {
            {
                int CjR5EOXx1V0c = 0;
                while (CjR5EOXx1V0c < 5) {
                    if (DtJQjCMiS[xpzkwV3gN][CjR5EOXx1V0c] == min1[CjR5EOXx1V0c] && DtJQjCMiS[xpzkwV3gN][CjR5EOXx1V0c] == max2[xpzkwV3gN]) {
                        printf ("%d %d %d\n", xpzkwV3gN + 1, CjR5EOXx1V0c +1, DtJQjCMiS[xpzkwV3gN][CjR5EOXx1V0c]);
                        feCzZxI = 1;
                    }
                    CjR5EOXx1V0c = CjR5EOXx1V0c +1;
                };
            }
            xpzkwV3gN = xpzkwV3gN + 1;
        };
    }
    if (feCzZxI == 0)
        printf ("not found");
    return 0;
}

