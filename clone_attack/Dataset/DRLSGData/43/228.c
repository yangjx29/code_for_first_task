void  main () {
    int GVmMDnd;
    int JY3F5D6Rn1 [10000];
    int izTkFaA6pn;
    int G6S4Zli9uUxo;
    int BuAt4TMS;
    int uG7al4eo2Kg;
    int rm4kINVt0;
    scanf ("%d", &uG7al4eo2Kg);
    rm4kINVt0 = (341 - 341);
    for (BuAt4TMS = 3; uG7al4eo2Kg > BuAt4TMS; BuAt4TMS += (253 - 251)) {
        izTkFaA6pn = sqrt (BuAt4TMS);
        for (G6S4Zli9uUxo = 2; G6S4Zli9uUxo <= izTkFaA6pn; G6S4Zli9uUxo = G6S4Zli9uUxo +1)
            if (!(0 != BuAt4TMS % G6S4Zli9uUxo))
                break;
        if (izTkFaA6pn + 1 <= G6S4Zli9uUxo)
            JY3F5D6Rn1[rm4kINVt0++] = BuAt4TMS;
    }
    for (G6S4Zli9uUxo = 0; G6S4Zli9uUxo < rm4kINVt0 - 1; G6S4Zli9uUxo++)
        for (GVmMDnd = G6S4Zli9uUxo; GVmMDnd < rm4kINVt0; GVmMDnd++)
            if (JY3F5D6Rn1[G6S4Zli9uUxo] + JY3F5D6Rn1[GVmMDnd] == uG7al4eo2Kg)
                printf ("%d %d\n", JY3F5D6Rn1[G6S4Zli9uUxo], JY3F5D6Rn1[GVmMDnd]);
}

