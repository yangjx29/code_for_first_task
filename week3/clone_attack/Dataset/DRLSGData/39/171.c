struct   student {
    char ylUIGbv [30];
    int rtR12p0Y;
}
WBPW3lY [999];

void  main () {
    int xx1Y8kcJ, k0yIEOTLe2uP, cP3qe2fgJOb = 0, CmcAqvnfG = 0;
    char LJOTgym72b, wcLHa3e8RE;
    char *BACPo4REJ;
    int Yy4tS7oF, Mx9RozLw, R4kdwMcbrQ;
    scanf ("%d", &xx1Y8kcJ);
    {
        k0yIEOTLe2uP = 0;
        for (; xx1Y8kcJ > k0yIEOTLe2uP;) {
            scanf ("%s %d %d %c %c %d", &WBPW3lY[k0yIEOTLe2uP].ylUIGbv, &Yy4tS7oF, &Mx9RozLw, &LJOTgym72b, &wcLHa3e8RE, &R4kdwMcbrQ);
            WBPW3lY[k0yIEOTLe2uP].rtR12p0Y = 0;
            if (80 < Yy4tS7oF &&R4kdwMcbrQ > 0)
                WBPW3lY[k0yIEOTLe2uP].rtR12p0Y += 8000;
            if (85 < Yy4tS7oF &&Mx9RozLw > 80)
                WBPW3lY[k0yIEOTLe2uP].rtR12p0Y += 4000;
            if (Yy4tS7oF > 90)
                WBPW3lY[k0yIEOTLe2uP].rtR12p0Y += 2000;
            if (85 < Yy4tS7oF &&wcLHa3e8RE == 'Y')
                WBPW3lY[k0yIEOTLe2uP].rtR12p0Y += 1000;
            if (80 < Mx9RozLw &&LJOTgym72b == 'Y')
                WBPW3lY[k0yIEOTLe2uP].rtR12p0Y += 850;
            k0yIEOTLe2uP = k0yIEOTLe2uP + 1;
        }
    }
    {
        k0yIEOTLe2uP = 0;
        for (; k0yIEOTLe2uP < xx1Y8kcJ;) {
            cP3qe2fgJOb += WBPW3lY[k0yIEOTLe2uP].rtR12p0Y;
            if (CmcAqvnfG < WBPW3lY[k0yIEOTLe2uP].rtR12p0Y) {
                CmcAqvnfG = WBPW3lY[k0yIEOTLe2uP].rtR12p0Y;
                BACPo4REJ = WBPW3lY[k0yIEOTLe2uP].ylUIGbv;
            }
            k0yIEOTLe2uP = k0yIEOTLe2uP + 1;
        }
    }
    printf ("%s\n%d\n%d", BACPo4REJ, CmcAqvnfG, cP3qe2fgJOb);
}

