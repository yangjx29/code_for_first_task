void  main () {
    int n;
    int mPipDj4GRU;
    int ZQMinlX9UxzR [n];
    int tOzNjlswn;
    int ireBnyh;
    tOzNjlswn = ZQMinlX9UxzR[1];
    ireBnyh = 0;
    scanf ("%d", &n);
    {
        mPipDj4GRU = 0;
        while (mPipDj4GRU < n) {
            scanf ("%d", &ZQMinlX9UxzR[mPipDj4GRU]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            mPipDj4GRU = mPipDj4GRU + 1;
        };
    }
    {
        mPipDj4GRU = 0;
        while (mPipDj4GRU < n) {
            if (tOzNjlswn < ZQMinlX9UxzR[mPipDj4GRU])
                tOzNjlswn = ZQMinlX9UxzR[mPipDj4GRU];
            mPipDj4GRU = mPipDj4GRU + 1;
        };
    }
    for (mPipDj4GRU = 0; mPipDj4GRU < n; mPipDj4GRU = mPipDj4GRU + 1) {
        if (ireBnyh < ZQMinlX9UxzR[mPipDj4GRU] && ZQMinlX9UxzR[mPipDj4GRU] != tOzNjlswn)
            ireBnyh = ZQMinlX9UxzR[mPipDj4GRU];
    }
    printf ("%d\n%d", tOzNjlswn, ireBnyh);
}

