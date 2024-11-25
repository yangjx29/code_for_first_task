void  main () {
    char CSBwnqEOc4 [15], JSqdNB [4], *oGTROKcf1m, rvPeXpMUrRo, *LWn9LZlwK;
    int Z9OwAxPU, LJ6Dvk15Cb = 0, DRoG0BPLa1;
    for (; scanf ("%s %s", CSBwnqEOc4, JSqdNB) != EOF;) {
        LWn9LZlwK = JSqdNB;
        DRoG0BPLa1 = strlen (CSBwnqEOc4);
        oGTROKcf1m = CSBwnqEOc4;
        rvPeXpMUrRo = *oGTROKcf1m;
        for (Z9OwAxPU = 0; DRoG0BPLa1 > Z9OwAxPU; Z9OwAxPU = Z9OwAxPU +1) {
            if (*(oGTROKcf1m + Z9OwAxPU) > rvPeXpMUrRo) {
                rvPeXpMUrRo = *(oGTROKcf1m + Z9OwAxPU);
                LJ6Dvk15Cb = Z9OwAxPU;
            };
        }
        for (Z9OwAxPU = 0; Z9OwAxPU < LJ6Dvk15Cb +1; Z9OwAxPU = Z9OwAxPU +1)
            printf ("%c", *(oGTROKcf1m + Z9OwAxPU));
        for (Z9OwAxPU = 0; Z9OwAxPU < 3; Z9OwAxPU++)
            printf ("%c", *(LWn9LZlwK +Z9OwAxPU));
        for (Z9OwAxPU = LJ6Dvk15Cb +1; Z9OwAxPU < DRoG0BPLa1; Z9OwAxPU++)
            printf ("%c", *(oGTROKcf1m + Z9OwAxPU));
    };
}

