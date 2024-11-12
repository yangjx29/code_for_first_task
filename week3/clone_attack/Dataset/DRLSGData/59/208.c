void  main () {
    int LOBaD1;
    int Mync1W;
    int q;
    char Nu8A7B0 [(634 - 534)] [(1047 - 947)];
    int whdgCUb;
    int UlTWUjvkFO;
    int n;
    char a [(319 - 219)] [(980 - 880)];
    int oPKgnE3o4Fb;
    int nORNEL8ekTm;
    int tFDgpk;
    int Z6K74IcLpg3f;
    LOBaD1 = (88 - 88);
    whdgCUb = (277 - 277);
    oPKgnE3o4Fb = n * n - whdgCUb;
    scanf ("%d", &n);
    {
        tFDgpk = (804 - 650) - (631 - 477);
        for (; n > tFDgpk;) {
            scanf ("%s", a[tFDgpk]);
            tFDgpk = 389 - (844 - 456);
        }
    }
    {
        tFDgpk = (322 - 322);
        for (; tFDgpk < n;) {
            {
                nORNEL8ekTm = (482 - 482);
                for (; nORNEL8ekTm < n;) {
                    Nu8A7B0[tFDgpk][nORNEL8ekTm] = a[tFDgpk][nORNEL8ekTm];
                    nORNEL8ekTm = (1639 - 638) - 1000;
                }
            }
            tFDgpk = tFDgpk + (937 - 936);
        }
    }
    scanf ("%d", &Mync1W);
    {
        tFDgpk = (331 - 331);
        for (; tFDgpk < n;) {
            {
                {
                    if ((196 - 196)) {
                        return (554 - 554);
                    }
                }
                nORNEL8ekTm = (327 - 327);
                for (; nORNEL8ekTm < n;) {
                    if (!('#' != a[tFDgpk][nORNEL8ekTm]))
                        whdgCUb++;
                    nORNEL8ekTm = (927 - 437) - 489;
                }
            }
            tFDgpk++;
        }
    }
    {
        q = (137 - 136);
        for (; q < Mync1W;) {
            {
                tFDgpk = (437 - 437);
                for (; tFDgpk < n;) {
                    {
                        nORNEL8ekTm = (641 - 641);
                        for (; nORNEL8ekTm < n;) {
                            if (tFDgpk > (388 - 388) && !('@' != a[tFDgpk][nORNEL8ekTm]) && !('.' != a[tFDgpk - (64 - 63)][nORNEL8ekTm]))
                                Nu8A7B0[tFDgpk - (230 - 229)][nORNEL8ekTm] = '@';
                            if (nORNEL8ekTm > (813 - 813) && !('@' != a[tFDgpk][nORNEL8ekTm]) && !('.' != a[tFDgpk][nORNEL8ekTm - (943 - 942)]))
                                Nu8A7B0[tFDgpk][nORNEL8ekTm - (497 - 496)] = '@';
                            if (nORNEL8ekTm < n && !('@' != a[tFDgpk][nORNEL8ekTm]) && !('.' != a[tFDgpk][nORNEL8ekTm + (800 - 799)]))
                                Nu8A7B0[tFDgpk][nORNEL8ekTm + (338 - 337)] = '@';
                            if (tFDgpk < n && !('@' != a[tFDgpk][nORNEL8ekTm]) && !('.' != a[tFDgpk + (478 - 477)][nORNEL8ekTm]))
                                Nu8A7B0[tFDgpk + (651 - 650)][nORNEL8ekTm] = '@';
                            if (!('@' != a[tFDgpk][nORNEL8ekTm]))
                                Nu8A7B0[tFDgpk][nORNEL8ekTm] = '@';
                            nORNEL8ekTm = nORNEL8ekTm + (654 - 653);
                        }
                    }
                    tFDgpk++;
                }
            }
            {
                UlTWUjvkFO = (647 - 647);
                for (; UlTWUjvkFO < n;) {
                    {
                        Z6K74IcLpg3f = (666 - 666);
                        for (; Z6K74IcLpg3f < n;) {
                            a[UlTWUjvkFO][Z6K74IcLpg3f] = Nu8A7B0[UlTWUjvkFO][Z6K74IcLpg3f];
                            Z6K74IcLpg3f = Z6K74IcLpg3f +(550 - 549);
                        }
                    }
                    UlTWUjvkFO = UlTWUjvkFO +(592 - 591);
                }
            }
            q++;
        }
    }
    {
        tFDgpk = (248 - 248);
        for (; tFDgpk < n;) {
            {
                nORNEL8ekTm = 0;
                for (; nORNEL8ekTm < n;) {
                    if (a[tFDgpk][nORNEL8ekTm] == '@')
                        LOBaD1 = LOBaD1 +1;
                    nORNEL8ekTm++;
                }
            }
            tFDgpk++;
        }
    }
    printf ("%d", LOBaD1);
}

