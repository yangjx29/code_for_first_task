void  main () {
    char ZxO5oPjnX [65] = {0};
    char ewgX7ly [65];
    int C6QYBE5Pscp;
    int b;
    int KmtfEK5uoFSp;
    int aw8HYU3IjmA;
    int expb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    long  zD89rKpviHjx;
    zD89rKpviHjx = 0;
    scanf ("%d %s %d", &C6QYBE5Pscp, ZxO5oPjnX, &b);
    aw8HYU3IjmA = strlen (ZxO5oPjnX);
    for (KmtfEK5uoFSp = 0; !('\0' == ZxO5oPjnX[KmtfEK5uoFSp]); KmtfEK5uoFSp = KmtfEK5uoFSp +1) {
        if ('a' <= ZxO5oPjnX[KmtfEK5uoFSp])
            ZxO5oPjnX[KmtfEK5uoFSp] += -87;
        else if (ZxO5oPjnX[KmtfEK5uoFSp] >= 'A')
            ZxO5oPjnX[KmtfEK5uoFSp] = ZxO5oPjnX[KmtfEK5uoFSp] + -55;
        else
            ZxO5oPjnX[KmtfEK5uoFSp] = ZxO5oPjnX[KmtfEK5uoFSp] + -48;
        zD89rKpviHjx = zD89rKpviHjx + ZxO5oPjnX[KmtfEK5uoFSp] * (int) pow (C6QYBE5Pscp, aw8HYU3IjmA - 1 - KmtfEK5uoFSp);
    }
    if (zD89rKpviHjx == 0)
        printf ("0");
    else {
        expb = (int) (log (zD89rKpviHjx) / log (b)) + 1;
        for (KmtfEK5uoFSp = 0; KmtfEK5uoFSp < expb; KmtfEK5uoFSp = KmtfEK5uoFSp +1) {
            ewgX7ly[KmtfEK5uoFSp] = (zD89rKpviHjx % (int) (pow (b, expb - KmtfEK5uoFSp))) / (int) pow (b, expb - 1 - KmtfEK5uoFSp);
            if (ewgX7ly[KmtfEK5uoFSp] >= 10)
                ewgX7ly[KmtfEK5uoFSp] = ewgX7ly[KmtfEK5uoFSp] + 55;
            else
                ewgX7ly[KmtfEK5uoFSp] = ewgX7ly[KmtfEK5uoFSp] + 48;
            printf ("%c", ewgX7ly[KmtfEK5uoFSp]);
        };
    }
    printf ("\n");
}

