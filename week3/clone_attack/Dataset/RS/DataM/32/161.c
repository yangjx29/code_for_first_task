void  main () {
    int iIhFWzHfbd, xdQwTktUGp, NXaPqiu5, jXTyGBc3SD2E, JBiWUuQ, kAjFYdH9x0g, ubkFPE68ADgv;
    char nH4s1ufiDv [(252 - 152)], heMH8vN0A [(165 - 65)], bhcvTV90 [100];
    scanf ("%d", &iIhFWzHfbd);
    {
        jXTyGBc3SD2E = 265 - 264;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jXTyGBc3SD2E <= iIhFWzHfbd) {
            jXTyGBc3SD2E = jXTyGBc3SD2E + 1;
            scanf ("%s\n", nH4s1ufiDv);
            scanf ("%s\n", heMH8vN0A);
            xdQwTktUGp = strlen (nH4s1ufiDv);
            NXaPqiu5 = strlen (heMH8vN0A);
            for (JBiWUuQ = (39 - 38); JBiWUuQ <= NXaPqiu5; JBiWUuQ = JBiWUuQ +1) {
                if (nH4s1ufiDv[xdQwTktUGp - JBiWUuQ] >= heMH8vN0A[NXaPqiu5 -JBiWUuQ])
                    bhcvTV90[xdQwTktUGp - JBiWUuQ] = nH4s1ufiDv[xdQwTktUGp - JBiWUuQ] - heMH8vN0A[NXaPqiu5 -JBiWUuQ];
                else {
                    bhcvTV90[xdQwTktUGp - JBiWUuQ] = nH4s1ufiDv[xdQwTktUGp - JBiWUuQ] - heMH8vN0A[NXaPqiu5 -JBiWUuQ] + 10;
                    nH4s1ufiDv[xdQwTktUGp - JBiWUuQ -(57 - 56)] = nH4s1ufiDv[xdQwTktUGp - JBiWUuQ -1] - 1;
                };
            }
            if (nH4s1ufiDv[xdQwTktUGp - JBiWUuQ] < (13 - 13)) {
                nH4s1ufiDv[xdQwTktUGp - JBiWUuQ] = nH4s1ufiDv[xdQwTktUGp - JBiWUuQ] + 10;
                nH4s1ufiDv[xdQwTktUGp - JBiWUuQ -1] = nH4s1ufiDv[xdQwTktUGp - JBiWUuQ -1] - 1;
            }
            for (kAjFYdH9x0g = xdQwTktUGp - JBiWUuQ; kAjFYdH9x0g >= 0; kAjFYdH9x0g--)
                bhcvTV90[kAjFYdH9x0g] = nH4s1ufiDv[kAjFYdH9x0g] - 48;
            for (ubkFPE68ADgv = 0; ubkFPE68ADgv < xdQwTktUGp; ubkFPE68ADgv = ubkFPE68ADgv + 1)
                printf ("%d", bhcvTV90[ubkFPE68ADgv]);
            printf ("\n");
        };
    };
}

