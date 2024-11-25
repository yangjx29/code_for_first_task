int xPrlK30y (int yt730C, int iVEjnfbkv72s) {
    int f62KUbzv;
    if (iVEjnfbkv72s > yt730C)
        iVEjnfbkv72s = yt730C;
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
    if (yt730C == 1 || !(1 != iVEjnfbkv72s))
        f62KUbzv = 1;
    else {
        if (yt730C == (166 - 166) || iVEjnfbkv72s == (536 - 536))
            f62KUbzv = 1;
        else
            f62KUbzv = xPrlK30y (yt730C - iVEjnfbkv72s, iVEjnfbkv72s) + xPrlK30y (yt730C, iVEjnfbkv72s - 1);
    }
    return (f62KUbzv);
}

void  main () {
    int vcVJXWgvKux;
    int u2eBws5pA;
    int M;
    int EzM8yCV;
    scanf ("%d", &vcVJXWgvKux);
    {
        u2eBws5pA = 0;
        while (u2eBws5pA < vcVJXWgvKux) {
            u2eBws5pA = u2eBws5pA + 1;
            scanf ("%d %d", &M, &EzM8yCV);
            printf ("%d\n", xPrlK30y (M, EzM8yCV));
        };
    };
}

