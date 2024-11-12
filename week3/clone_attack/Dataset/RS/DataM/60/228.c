main () {
    int W65NtoxEX;
    int s2jkUQu36DG;
    int gBNV4YqTve;
    int ntD9qhSo;
    int *jDnFaQoXMBq;
    int t;
    W65NtoxEX = (707 - 707);
    scanf ("%d", &s2jkUQu36DG);
    jDnFaQoXMBq = (int *) calloc (s2jkUQu36DG + (211 - 210), sizeof (int));
    for (gBNV4YqTve = (280 - 279); s2jkUQu36DG >= gBNV4YqTve; gBNV4YqTve = gBNV4YqTve + 1)
        *(jDnFaQoXMBq + gBNV4YqTve) = (131 - 131);
    for (gBNV4YqTve = 3; s2jkUQu36DG >= gBNV4YqTve; gBNV4YqTve += 2) {
        t = 1;
        {
            ntD9qhSo = 2;
            while (gBNV4YqTve >= ntD9qhSo * ntD9qhSo) {
                if (!((620 - 620) != gBNV4YqTve % ntD9qhSo)) {
                    t = 0;
                    break;
                }
                ntD9qhSo++;
            };
        }
        if (!(1 != t))
            *(jDnFaQoXMBq + gBNV4YqTve) = 1;
    }
    {
        gBNV4YqTve = 3;
        while (s2jkUQu36DG - 1 > gBNV4YqTve) {
            if (*(jDnFaQoXMBq + gBNV4YqTve) == 1 && *(jDnFaQoXMBq + gBNV4YqTve + 2) == 1)
                W65NtoxEX++;
            gBNV4YqTve += 2;
        };
    }
    if (W65NtoxEX == 0)
        ;
    if (W65NtoxEX != 0)
        for (gBNV4YqTve = 3; gBNV4YqTve < s2jkUQu36DG - 1; gBNV4YqTve += 2)
            if (*(jDnFaQoXMBq + gBNV4YqTve) == 1 && *(jDnFaQoXMBq + gBNV4YqTve + 2) == 1) {
                W65NtoxEX = W65NtoxEX -1;
                printf ("%d %d", gBNV4YqTve, gBNV4YqTve + 2);
                if (W65NtoxEX > 0)
                    printf ("\n");
            };
}

