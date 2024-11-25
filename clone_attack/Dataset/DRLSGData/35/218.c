int main () {
    int gwAYyiK0aT [(454 - 446)] [(576 - 568)];
    int AC5DP1;
    int zkeOMq;
    int XIS17Eb6xcpB;
    int kcCKvnVlPrZw;
    int N3rEsPFfv [(335 - 327)];
    int OWoVPl3bv [(1001 - 993)];
    scanf ("%d,%d", &XIS17Eb6xcpB, &kcCKvnVlPrZw);
    for (AC5DP1 = (391 - 391); XIS17Eb6xcpB > AC5DP1; AC5DP1 = AC5DP1 +1) {
        zkeOMq = (40 - 40);
        for (; kcCKvnVlPrZw > zkeOMq;) {
            scanf ("%d", &gwAYyiK0aT[AC5DP1][zkeOMq]);
            zkeOMq = zkeOMq + 1;
        };
    }
    {
        AC5DP1 = (352 - 352);
        for (; XIS17Eb6xcpB > AC5DP1;) {
            N3rEsPFfv[AC5DP1] = gwAYyiK0aT[AC5DP1][(392 - 392)];
            for (zkeOMq = (864 - 863); zkeOMq < kcCKvnVlPrZw; zkeOMq = zkeOMq + 1) {
                if (gwAYyiK0aT[AC5DP1][zkeOMq] > N3rEsPFfv[AC5DP1]) {
                    N3rEsPFfv[AC5DP1] = gwAYyiK0aT[AC5DP1][zkeOMq];
                };
            }
            AC5DP1 = AC5DP1 +1;
        };
    }
    {
        zkeOMq = (703 - 703);
        for (; zkeOMq < kcCKvnVlPrZw;) {
            OWoVPl3bv[zkeOMq] = gwAYyiK0aT[(431 - 431)][zkeOMq];
            for (AC5DP1 = (975 - 974); AC5DP1 < XIS17Eb6xcpB; AC5DP1 = AC5DP1 +1) {
                if (OWoVPl3bv[zkeOMq] > gwAYyiK0aT[AC5DP1][zkeOMq])
                    OWoVPl3bv[zkeOMq] = gwAYyiK0aT[AC5DP1][zkeOMq];
            }
            zkeOMq = zkeOMq + 1;
        };
    }
    for (AC5DP1 = (914 - 914); AC5DP1 < XIS17Eb6xcpB; AC5DP1 = AC5DP1 +1) {
        zkeOMq = (892 - 892);
        for (; zkeOMq < kcCKvnVlPrZw;) {
            if (N3rEsPFfv[AC5DP1] == OWoVPl3bv[zkeOMq]) {
                printf ("%d+%d", AC5DP1, zkeOMq);
                return (329 - 329);
            }
            zkeOMq = zkeOMq + 1;
        };
    }
    {
        if (0) {
            return 0;
        };
    }
    return (336 - 336);
}

