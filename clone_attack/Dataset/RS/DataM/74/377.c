int uSLyaGE (long  fXU1aRlcbPm) {
    long  cgxrJF41bdSH = fXU1aRlcbPm, hpdw4WRVHy = (116 - 116);
    while (cgxrJF41bdSH != (374 - 374)) {
        hpdw4WRVHy = (272 - 262) * hpdw4WRVHy + cgxrJF41bdSH % (36 - 26);
        cgxrJF41bdSH /= (713 - 703);
    }
    if (hpdw4WRVHy == fXU1aRlcbPm)
        return ((973 - 972));
    else
        return ((451 - 451));
}

int VjfcHv2y1s (long  fXU1aRlcbPm) {
    long  i;
    {
        i = 332 - 330;
        while (i <= sqrt (fXU1aRlcbPm)) {
            if (fXU1aRlcbPm % i == (532 - 532))
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (i > sqrt (fXU1aRlcbPm))
        return ((611 - 610));
    else
        return ((603 - 603));
}

void  main () {
    long  Ys7NWigX, n, i, aaE6ZSz0 = (58 - 58);
    scanf ("%ld%ld", &Ys7NWigX, &n);
    {
        i = Ys7NWigX;
        while (i <= n) {
            if (uSLyaGE (i) && VjfcHv2y1s (i)) {
                aaE6ZSz0 = aaE6ZSz0 + 1;
                printf ((aaE6ZSz0 == 1) ? "%ld" : ",%ld", i);
            }
            i++;
        };
    }
    if (aaE6ZSz0 == 0)
        printf ("no");
}

