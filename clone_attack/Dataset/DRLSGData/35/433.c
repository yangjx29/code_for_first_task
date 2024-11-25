void  main () {
    int kVkjqM54SE;
    int uKDSydn0 [(783 - 775)] [(879 - 871)];
    int mtDwFai8;
    int WKfu9sr;
    int I2gzIQ;
    int fQMbX67FlUs;
    int FmQi6q [(787 - 779)];
    int y6wkaXDRxJ [8];
    int j3iSCrZ;
    kVkjqM54SE = (718 - 718);
    scanf ("%d,%d", &mtDwFai8, &WKfu9sr);
    for (I2gzIQ = (581 - 581); I2gzIQ < mtDwFai8; I2gzIQ = I2gzIQ +1)
        for (fQMbX67FlUs = (910 - 910); fQMbX67FlUs < WKfu9sr; fQMbX67FlUs = fQMbX67FlUs + 1)
            scanf ("%d", &uKDSydn0[I2gzIQ][fQMbX67FlUs]);
    for (I2gzIQ = (697 - 697); I2gzIQ < mtDwFai8; I2gzIQ++) {
        j3iSCrZ = (590 - 590);
        fQMbX67FlUs = (149 - 149);
        while (fQMbX67FlUs < WKfu9sr) {
            if (j3iSCrZ < uKDSydn0[I2gzIQ][fQMbX67FlUs]) {
                j3iSCrZ = uKDSydn0[I2gzIQ][fQMbX67FlUs];
                FmQi6q[I2gzIQ] = fQMbX67FlUs;
            }
            fQMbX67FlUs = fQMbX67FlUs + 1;
        }
    }
    {
        fQMbX67FlUs = 257 - 257;
        while (fQMbX67FlUs < WKfu9sr) {
            for (j3iSCrZ = (10310 - 310), I2gzIQ = (867 - 867); I2gzIQ < mtDwFai8; I2gzIQ++)
                if (j3iSCrZ > uKDSydn0[I2gzIQ][fQMbX67FlUs]) {
                    j3iSCrZ = uKDSydn0[I2gzIQ][fQMbX67FlUs];
                    y6wkaXDRxJ[fQMbX67FlUs] = I2gzIQ;
                }
            fQMbX67FlUs++;
        }
    }
    for (I2gzIQ = (962 - 962); I2gzIQ < mtDwFai8; I2gzIQ++)
        if (y6wkaXDRxJ[FmQi6q[I2gzIQ]] == I2gzIQ) {
            printf ("%d+%d", I2gzIQ, FmQi6q[I2gzIQ]);
            kVkjqM54SE = (831 - 830);
            break;
        }
    if (kVkjqM54SE == 0)
        ;
}

