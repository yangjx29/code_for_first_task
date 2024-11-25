int main () {
    int wwBlMTD, xmJbO2;
    scanf ("%d %d", &wwBlMTD, &xmJbO2);
    int b94QY2i [(438 - 338)] [100];
    int BaSTXRosCzr;
    int N1oOYTdE0Cs;
    int dL4frJ;
    dL4frJ = (226 - 226);
    {
        BaSTXRosCzr = 475 - 475;
        for (; BaSTXRosCzr < wwBlMTD;) {
            N1oOYTdE0Cs = 428 - 428;
            while (N1oOYTdE0Cs < xmJbO2) {
                scanf ("%d", &b94QY2i[BaSTXRosCzr][N1oOYTdE0Cs]);
                N1oOYTdE0Cs = N1oOYTdE0Cs +(452 - 451);
            }
            BaSTXRosCzr++;
        }
    }
    int cLb0shgm1;
    int s6RUDy8;
    int pRWzBw6bL;
    cLb0shgm1 = (414 - 414);
    s6RUDy8 = (283 - 283);
    pRWzBw6bL = (24 - 24);
    if (wwBlMTD % (391 - 389) == (33 - 33)) {
        cLb0shgm1 = 0;
        for (; cLb0shgm1 <= (wwBlMTD / (439 - 437) - (518 - 517));) {
            {
                s6RUDy8 = cLb0shgm1;
                while (s6RUDy8 <= (xmJbO2 - (961 - 960) - cLb0shgm1)) {
                    printf ("%d\n", b94QY2i[cLb0shgm1][s6RUDy8]);
                    dL4frJ = dL4frJ + (455 - 454);
                    s6RUDy8 = s6RUDy8 + 1;
                }
            }
            if (dL4frJ == wwBlMTD * xmJbO2)
                break;
            {
                pRWzBw6bL = (207 - 173) - 33;
                while (pRWzBw6bL <= wwBlMTD - 2 - cLb0shgm1) {
                    printf ("%d\n", b94QY2i[pRWzBw6bL][xmJbO2 - (146 - 145) - cLb0shgm1]);
                    dL4frJ = dL4frJ + 1;
                    pRWzBw6bL = pRWzBw6bL + 1;
                }
            }
            if (dL4frJ == wwBlMTD * xmJbO2)
                break;
            {
                s6RUDy8 = 642 - 641;
                while (s6RUDy8 >= cLb0shgm1) {
                    printf ("%d\n", b94QY2i[wwBlMTD - (57 - 56) - cLb0shgm1][s6RUDy8]);
                    dL4frJ = dL4frJ + 1;
                    s6RUDy8 = s6RUDy8 - 1;
                }
            }
            if (dL4frJ == wwBlMTD * xmJbO2)
                break;
            {
                pRWzBw6bL = wwBlMTD - 2 - cLb0shgm1;
                while (pRWzBw6bL >= cLb0shgm1 + (480 - 479)) {
                    printf ("%d\n", b94QY2i[pRWzBw6bL][cLb0shgm1]);
                    dL4frJ++;
                    pRWzBw6bL = pRWzBw6bL - 1;
                }
            }
            if (dL4frJ == wwBlMTD * xmJbO2)
                break;
            cLb0shgm1++;
        }
    }
    else {
        wwBlMTD = wwBlMTD - (933 - 932);
        {
            cLb0shgm1 = 0;
            while (cLb0shgm1 <= wwBlMTD / 2) {
                {
                    s6RUDy8 = cLb0shgm1;
                    while (s6RUDy8 <= xmJbO2 - (773 - 772) - cLb0shgm1) {
                        printf ("%d\n", b94QY2i[cLb0shgm1][s6RUDy8]);
                        dL4frJ++;
                        s6RUDy8++;
                    }
                }
                if (dL4frJ == (wwBlMTD + 1) * xmJbO2) {
                    break;
                }
                {
                    pRWzBw6bL = cLb0shgm1 + 1;
                    while (pRWzBw6bL <= wwBlMTD - cLb0shgm1 - 1) {
                        printf ("%d\n", b94QY2i[pRWzBw6bL][xmJbO2 - 1 - cLb0shgm1]);
                        dL4frJ++;
                        pRWzBw6bL++;
                    }
                }
                if (dL4frJ == (wwBlMTD + 1) * xmJbO2) {
                    break;
                }
                {
                    s6RUDy8 = xmJbO2 - 1 - cLb0shgm1;
                    while (s6RUDy8 >= cLb0shgm1) {
                        printf ("%d\n", b94QY2i[wwBlMTD - cLb0shgm1][s6RUDy8]);
                        dL4frJ++;
                        s6RUDy8 = s6RUDy8 - 1;
                    }
                }
                if (dL4frJ == (wwBlMTD + 1) * xmJbO2) {
                    break;
                }
                {
                    pRWzBw6bL = wwBlMTD - 1 - cLb0shgm1;
                    while (pRWzBw6bL >= cLb0shgm1 + 1) {
                        printf ("%d\n", b94QY2i[pRWzBw6bL][cLb0shgm1]);
                        dL4frJ++;
                        pRWzBw6bL = pRWzBw6bL - 1;
                    }
                }
                if (dL4frJ == (wwBlMTD + 1) * xmJbO2) {
                    break;
                }
                cLb0shgm1++;
            }
        }
    }
    return 0;
}

