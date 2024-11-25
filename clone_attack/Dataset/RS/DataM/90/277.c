int dFGiCakAQ0 (int m, int nO9jZ0v) {
    int p1;
    int p2;
    int wywfD6l7iTV3;
    p1 = (618 - 618);
    p2 = (956 - 956);
    if (!((161 - 160) != nO9jZ0v))
        wywfD6l7iTV3 = (865 - 864);
    else {
        if (nO9jZ0v <= m)
            p1 = dFGiCakAQ0 (m - nO9jZ0v, nO9jZ0v);
        p2 = dFGiCakAQ0 (m, nO9jZ0v - 1);
        wywfD6l7iTV3 = p1 + p2;
    }
    return (wywfD6l7iTV3);
}

void  main () {
    int ghitBz3K, B5IWXlFTrU [(492 - 472)], xOwIklKxUzhY [(998 - 978)], ZowvTR9;
    scanf ("%d", &ghitBz3K);
    {
        ZowvTR9 = 23 - 23;
        while (ZowvTR9 < ghitBz3K) {
            scanf ("%d%d", &B5IWXlFTrU[ZowvTR9], &xOwIklKxUzhY[ZowvTR9]);
            ZowvTR9++;
        };
    }
    {
        ZowvTR9 = 354 - 354;
        while (ZowvTR9 < ghitBz3K) {
            printf ("%d\n", dFGiCakAQ0 (B5IWXlFTrU[ZowvTR9], xOwIklKxUzhY[ZowvTR9]));
            ZowvTR9++;
        };
    };
}

