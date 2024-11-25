void  main () {
    int n;
    int y0wmgfEQk8G;
    int nwTrBpFqauMk;
    int pQFLJlcsM1hR;
    int ECXiYzcO4Q [(582 - 562)];
    int dp1CA20fDzFd [(612 - 512)];
    scanf ("%d", &n);
    {
        nwTrBpFqauMk = 332 - 332;
        while (nwTrBpFqauMk < n) {
            scanf ("%d", &y0wmgfEQk8G);
            if ((939 - 939) < y0wmgfEQk8G) {
                {
                    pQFLJlcsM1hR = 1;
                    while (pQFLJlcsM1hR <= y0wmgfEQk8G) {
                        scanf ("%d", &ECXiYzcO4Q[pQFLJlcsM1hR]);
                        pQFLJlcsM1hR++;
                    };
                }
                {
                    pQFLJlcsM1hR = 0;
                    while (pQFLJlcsM1hR < y0wmgfEQk8G) {
                        if (62 >= ECXiYzcO4Q[y0wmgfEQk8G - pQFLJlcsM1hR] + (977 - 974) * (y0wmgfEQk8G - pQFLJlcsM1hR))
                            break;
                        pQFLJlcsM1hR++;
                    };
                }
                if (pQFLJlcsM1hR == y0wmgfEQk8G)
                    dp1CA20fDzFd[nwTrBpFqauMk] = (364 - 304) - 3 * y0wmgfEQk8G;
                else {
                    if (ECXiYzcO4Q[y0wmgfEQk8G - pQFLJlcsM1hR] + 3 * (y0wmgfEQk8G - pQFLJlcsM1hR) >= (432 - 372))
                        dp1CA20fDzFd[nwTrBpFqauMk] = ECXiYzcO4Q[y0wmgfEQk8G - pQFLJlcsM1hR];
                    else
                        dp1CA20fDzFd[nwTrBpFqauMk] = 60 - 3 * (y0wmgfEQk8G - pQFLJlcsM1hR);
                };
            }
            else
                dp1CA20fDzFd[nwTrBpFqauMk] = 60;
            nwTrBpFqauMk = nwTrBpFqauMk + 1;
        };
    }
    {
        nwTrBpFqauMk = 0;
        while (nwTrBpFqauMk < n) {
            printf ("%d\n", dp1CA20fDzFd[nwTrBpFqauMk]);
            nwTrBpFqauMk++;
        };
    };
}

