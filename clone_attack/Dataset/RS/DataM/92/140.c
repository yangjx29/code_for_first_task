void  iG3DmW2 (int x [], int B7RTYI1) {
    int C7aPi4R, j, dUdPac2xQk;
    {
        C7aPi4R = 402 - 401;
        while (B7RTYI1 > C7aPi4R) {
            for (j = B7RTYI1; C7aPi4R < j; j = j - 1)
                if (x[j - (44 - 43)] < x[j]) {
                    dUdPac2xQk = x[j - (463 - 462)];
                    x[j - (341 - 340)] = x[j];
                    x[j] = dUdPac2xQk;
                }
            C7aPi4R = C7aPi4R +1;
        };
    };
}

void  g (int x [], int B7RTYI1) {
    int C7aPi4R, j, dUdPac2xQk;
    for (C7aPi4R = (651 - 650); B7RTYI1 > C7aPi4R; C7aPi4R = C7aPi4R +1)
        for (j = B7RTYI1; C7aPi4R < j; j = j - 1)
            if (x[j] < x[j - 1]) {
                dUdPac2xQk = x[j - 1];
                x[j - 1] = x[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                x[j] = dUdPac2xQk;
            };
}

void  dkxzojBEdU (int mDsJ8gz [], int m, int UVN0T6) {
    int C7aPi4R;
    {
        C7aPi4R = UVN0T6;
        while (m >= C7aPi4R) {
            mDsJ8gz[C7aPi4R] = mDsJ8gz[C7aPi4R +1];
            C7aPi4R = C7aPi4R +1;
        };
    };
}

main () {
    int mDsJ8gz [10000];
    int hiPKwcHNpO5g [(10713 - 713)];
    int UVN0T6;
    int l;
    int C7aPi4R;
    int j;
    int dUdPac2xQk;
    int trtbWcMGB7n;
    int woHgGYRqrv;
    int WiBfbvrZlA;
    for (;;) {
        scanf ("%d", &UVN0T6);
        if (!(0 != UVN0T6))
            break;
        trtbWcMGB7n = 0;
        dUdPac2xQk = 0;
        for (C7aPi4R = 1; UVN0T6 >= C7aPi4R; C7aPi4R++)
            scanf ("%d", &hiPKwcHNpO5g[C7aPi4R]);
        for (C7aPi4R = 1; C7aPi4R <= UVN0T6; C7aPi4R++)
            scanf ("%d", &mDsJ8gz[C7aPi4R]);
        l = UVN0T6;
        g (hiPKwcHNpO5g, l);
        iG3DmW2 (mDsJ8gz, l);
        {
            C7aPi4R = 1;
            while (C7aPi4R <= l) {
                for (j = 1; j <= l; j = j + 1)
                    if (hiPKwcHNpO5g[C7aPi4R] > mDsJ8gz[j]) {
                        l = l - 1;
                        dkxzojBEdU (mDsJ8gz, l, j);
                        dkxzojBEdU (hiPKwcHNpO5g, l, C7aPi4R);
                        C7aPi4R = C7aPi4R -1;
                        dUdPac2xQk = dUdPac2xQk + 1;
                        break;
                    }
                C7aPi4R = C7aPi4R +1;
            };
        }
        {
            WiBfbvrZlA = l;
            C7aPi4R = 1;
            while (C7aPi4R <= WiBfbvrZlA) {
                {
                    j = 1;
                    while (j <= WiBfbvrZlA) {
                        if (hiPKwcHNpO5g[C7aPi4R] == mDsJ8gz[j]) {
                            WiBfbvrZlA = WiBfbvrZlA -1;
                            dkxzojBEdU (mDsJ8gz, WiBfbvrZlA, j);
                            dkxzojBEdU (hiPKwcHNpO5g, WiBfbvrZlA, C7aPi4R);
                            C7aPi4R = C7aPi4R -1;
                            trtbWcMGB7n = trtbWcMGB7n + 1;
                            break;
                        }
                        j = j + 1;
                    };
                }
                C7aPi4R = C7aPi4R +1;
            };
        }
        woHgGYRqrv = (dUdPac2xQk - (UVN0T6 -dUdPac2xQk - trtbWcMGB7n)) * (606 - 406);
        printf ("%d\n", woHgGYRqrv);
    };
}

