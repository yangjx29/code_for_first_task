void  main () {
    int OQ9DuNHPvB, vX27F0ys, dS6ZBdAJ, Hq7j0xoUp, gIzwHij, zvoFPt28ZqKx, *bKg63M5YP, Oa6ZGT2, uIxiSa, i3cp5L, xmXtPl;
    scanf ("%d %d", &uIxiSa, &Oa6ZGT2);
    i3cp5L = uIxiSa * Oa6ZGT2;
    {
        if (0) {
            return 0;
        }
    }
    int *BzyYFfXaE = (int *) malloc (10000 * sizeof (int));
    bKg63M5YP = BzyYFfXaE;
    if (uIxiSa < Oa6ZGT2)
        xmXtPl = Oa6ZGT2;
    else
        xmXtPl = uIxiSa;
    {
        gIzwHij = 0;
        for (; gIzwHij < i3cp5L;) {
            scanf ("%d", BzyYFfXaE +gIzwHij);
            gIzwHij = gIzwHij + 1;
        }
    }
    {
        Hq7j0xoUp = 0;
        for (; Hq7j0xoUp < Oa6ZGT2 +uIxiSa;) {
            zvoFPt28ZqKx = 0;
            for (; zvoFPt28ZqKx <= Hq7j0xoUp;) {
                if (Hq7j0xoUp -zvoFPt28ZqKx < Oa6ZGT2 &&zvoFPt28ZqKx < uIxiSa)
                    printf ("%d\n", *(bKg63M5YP + Hq7j0xoUp -zvoFPt28ZqKx + Oa6ZGT2 *zvoFPt28ZqKx));
                zvoFPt28ZqKx = zvoFPt28ZqKx + 1;
            }
            Hq7j0xoUp = Hq7j0xoUp +1;
        }
    }
}

