void  main () {
    int c [(627 - 619)];
    int a [(294 - 286)] [(105 - 97)];
    int bXJqWa;
    int WLUJKB;
    int e2KBYL;
    int URIcKGm;
    int ZKEDB9;
    int z06N78lr;
    int vzLHxQFyihd;
    ZKEDB9 = (149 - 149);
    URIcKGm = (817 - 817);
    scanf ("%d,%d", &e2KBYL, &WLUJKB);
    {
        z06N78lr = (54 - 54);
        for (; e2KBYL > z06N78lr;) {
            {
                vzLHxQFyihd = (384 - 384);
                for (; vzLHxQFyihd < WLUJKB;) {
                    scanf ("%d", &a[z06N78lr][vzLHxQFyihd]);
                    vzLHxQFyihd++;
                }
            }
            z06N78lr = z06N78lr + (632 - 631);
        }
    }
    {
        z06N78lr = (908 - 908);
        for (; z06N78lr < e2KBYL;) {
            vzLHxQFyihd = (793 - 793);
            for (; vzLHxQFyihd < WLUJKB;) {
                ZKEDB9 = (593 - 593);
                {
                    bXJqWa = (121 - 121);
                    for (; bXJqWa < WLUJKB;) {
                        if (a[z06N78lr][bXJqWa] <= a[z06N78lr][vzLHxQFyihd])
                            ZKEDB9 = ZKEDB9 +(726 - 725);
                        bXJqWa++;
                    }
                }
                if (ZKEDB9 == WLUJKB)
                    c[z06N78lr] = vzLHxQFyihd;
                vzLHxQFyihd++;
            }
            z06N78lr++;
        }
    }
    {
        z06N78lr = (738 - 738);
        for (; z06N78lr < e2KBYL;) {
            ZKEDB9 = (701 - 701);
            {
                bXJqWa = (544 - 544);
                for (; bXJqWa < e2KBYL;) {
                    vzLHxQFyihd = c[z06N78lr];
                    if (a[z06N78lr][vzLHxQFyihd] <= a[bXJqWa][vzLHxQFyihd])
                        ZKEDB9++;
                    bXJqWa++;
                }
            }
            if (ZKEDB9 == e2KBYL) {
                URIcKGm++;
                printf ("%d+%d\n", z06N78lr, vzLHxQFyihd);
            }
            z06N78lr++;
        }
    }
    if (URIcKGm == 0)
        ;
}

