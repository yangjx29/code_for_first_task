void  main () {
    int *mLCUxSn2P;
    int i;
    int n6FfGXJ;
    int lj6J0Xwv2FLZ;
    int JvpOs6l [100] = {0};
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
    scanf ("%d %d", &n6FfGXJ, &lj6J0Xwv2FLZ);
    mLCUxSn2P = (int *) malloc (n6FfGXJ * sizeof (int));
    for (i = 0; i <= n6FfGXJ - 1; i++)
        scanf ("%d", &JvpOs6l[i]);
    if (mLCUxSn2P = &JvpOs6l[n6FfGXJ - lj6J0Xwv2FLZ])
        printf ("%d", *mLCUxSn2P);
    {
        i = 1;
        while (i < n6FfGXJ) {
            if (n6FfGXJ - lj6J0Xwv2FLZ + i < n6FfGXJ)
                mLCUxSn2P = &JvpOs6l[n6FfGXJ - lj6J0Xwv2FLZ + i];
            else
                mLCUxSn2P = &JvpOs6l[i - lj6J0Xwv2FLZ];
            i++;
            printf (" %d", *mLCUxSn2P);
        };
    };
}

