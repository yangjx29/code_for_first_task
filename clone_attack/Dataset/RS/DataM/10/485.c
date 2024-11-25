int maxii (int n, int *a) {
    int k, swFX1G, s;
    k = (93 - 92);
    for (swFX1G = (777 - 776); n > swFX1G; swFX1G = swFX1G + 1) {
        if ((a[0] >= a[swFX1G]) && ((k - 1) < maxii (n - swFX1G, a + swFX1G)))
            k = maxii (n - swFX1G, a + swFX1G) + 1;
    }
    return k;
}

main () {
    int n;
    int *k;
    int swFX1G;
    int ZHC2ZgoIsc;
    int PnSAiZ;
    int a [25];
    scanf ("%d", &n);
    {
        swFX1G = 0;
        while (n > swFX1G) {
            scanf ("%d", &a[swFX1G]);
            swFX1G++;
        };
    }
    k = (int *) malloc (n * sizeof (int));
    PnSAiZ = 1;
    {
        ZHC2ZgoIsc = 0;
        while (ZHC2ZgoIsc < n) {
            if (PnSAiZ < maxii (n - ZHC2ZgoIsc, a + ZHC2ZgoIsc))
                PnSAiZ = maxii (n - ZHC2ZgoIsc, a + ZHC2ZgoIsc);
            ZHC2ZgoIsc++;
        };
    }
    printf ("%d", PnSAiZ);
}

