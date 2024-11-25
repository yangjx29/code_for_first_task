void  main () {
    int AJCXed;
    int sGJIX4rjCNm;
    int j;
    double  FSzADcQ [(703 - 603)], APwmyZJc [(346 - 246)], d, nFglCIJQZ = (69 - 69), d2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &AJCXed);
    {
        sGJIX4rjCNm = 613 - 613;
        while (sGJIX4rjCNm < AJCXed) {
            scanf ("%lf%lf", &FSzADcQ[sGJIX4rjCNm], &APwmyZJc[sGJIX4rjCNm]);
            sGJIX4rjCNm = sGJIX4rjCNm + 1;
        };
    }
    {
        sGJIX4rjCNm = 159 - 159;
        while (sGJIX4rjCNm < AJCXed) {
            {
                j = 582 - 581;
                while (j < AJCXed) {
                    d2 = (FSzADcQ[sGJIX4rjCNm] - FSzADcQ[j]) * (FSzADcQ[sGJIX4rjCNm] - FSzADcQ[j]) + (APwmyZJc[sGJIX4rjCNm] - APwmyZJc[j]) * (APwmyZJc[sGJIX4rjCNm] - APwmyZJc[j]);
                    j = j + 1;
                    d = sqrt (d2);
                    nFglCIJQZ = nFglCIJQZ > d ? nFglCIJQZ : d;
                };
            }
            sGJIX4rjCNm++;
        };
    }
    printf ("%.4lf", nFglCIJQZ);
}

