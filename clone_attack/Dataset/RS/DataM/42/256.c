void  main () {
    int chongfu;
    int q1sxCeXUVZI;
    int *pVfQ54t;
    int B3SXy1t [100000];
    int YIo27XbzV;
    chongfu = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &q1sxCeXUVZI);
    {
        pVfQ54t = B3SXy1t;
        while (B3SXy1t +q1sxCeXUVZI > pVfQ54t) {
            scanf ("%d", pVfQ54t);
            pVfQ54t = pVfQ54t + 1;
        };
    }
    scanf ("%d", &YIo27XbzV);
    for (pVfQ54t = B3SXy1t; pVfQ54t < B3SXy1t +q1sxCeXUVZI; pVfQ54t = pVfQ54t + 1) {
        if (!(YIo27XbzV != *pVfQ54t))
            chongfu = chongfu + 1;
        else {
            if (*pVfQ54t != YIo27XbzV)
                *(pVfQ54t - chongfu) = *pVfQ54t;
        };
    }
    {
        pVfQ54t = B3SXy1t;
        while (pVfQ54t < B3SXy1t +q1sxCeXUVZI - chongfu - 1) {
            printf ("%d ", *pVfQ54t);
            pVfQ54t = pVfQ54t + 1;
        };
    }
    printf ("%d", *(B3SXy1t +q1sxCeXUVZI - chongfu - 1));
}

