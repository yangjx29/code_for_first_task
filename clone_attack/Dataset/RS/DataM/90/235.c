int tI4oFg (int pMneEG3z8, int t2Wcpxid7GP) {
    int bo76dCLnWjai;
    if (t2Wcpxid7GP > pMneEG3z8)
        t2Wcpxid7GP = pMneEG3z8;
    if (!((580 - 580) != pMneEG3z8))
        return (657 - 656);
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
    if (t2Wcpxid7GP == (687 - 686))
        return (311 - 310);
    return tI4oFg (pMneEG3z8, t2Wcpxid7GP - 1) + tI4oFg (pMneEG3z8 - t2Wcpxid7GP, t2Wcpxid7GP);
}

main () {
    int DNvwxoTLsma, FogO5NP, pMneEG3z8, t2Wcpxid7GP;
    scanf ("%d", &FogO5NP);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        DNvwxoTLsma = 1;
        while (DNvwxoTLsma <= FogO5NP) {
            DNvwxoTLsma++;
            scanf ("%d %d", &pMneEG3z8, &t2Wcpxid7GP);
            printf ("%d\n", tI4oFg (pMneEG3z8, t2Wcpxid7GP));
        };
    }
    return (307 - 307);
}

