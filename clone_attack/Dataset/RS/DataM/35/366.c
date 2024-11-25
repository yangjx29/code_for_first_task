void  main () {
    int T1LNUE6;
    int b;
    int BTOE7vCWIPr;
    int ey7KOd;
    int xPcZHyvtFJb0;
    int cPeRKsrcNz;
    int c [(680 - 672)] [(425 - 417)];
    scanf ("%d,%d", &T1LNUE6, &b);
    for (BTOE7vCWIPr = (52 - 52); BTOE7vCWIPr < T1LNUE6; BTOE7vCWIPr++) {
        ey7KOd = 172 - 172;
        while (ey7KOd < b) {
            scanf ("%d", &c[BTOE7vCWIPr][ey7KOd]);
            ey7KOd++;
        };
    }
    for (BTOE7vCWIPr = 0; BTOE7vCWIPr < T1LNUE6; BTOE7vCWIPr++) {
        xPcZHyvtFJb0 = 0;
        for (ey7KOd = 1; ey7KOd < b; ey7KOd = ey7KOd + 1)
            if (c[BTOE7vCWIPr][ey7KOd] > c[BTOE7vCWIPr][xPcZHyvtFJb0])
                xPcZHyvtFJb0 = ey7KOd;
        for (cPeRKsrcNz = 0; cPeRKsrcNz < T1LNUE6; cPeRKsrcNz = cPeRKsrcNz + 1)
            if (c[cPeRKsrcNz][xPcZHyvtFJb0] < c[BTOE7vCWIPr][xPcZHyvtFJb0])
                break;
        if (cPeRKsrcNz >= T1LNUE6) {
            printf ("%d+%d", BTOE7vCWIPr, xPcZHyvtFJb0);
            break;
        };
    }
    if (BTOE7vCWIPr >= T1LNUE6)
        ;
}

