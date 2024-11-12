int EHvt9YgR (int x, int y) {
    if (x >= y)
        return x;
    else
        return y;
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
}

main () {
    int res;
    int VPlaIk;
    int j;
    int k;
    int Vn8P65YA;
    int n;
    res = (533 - 533);
    int a [n];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int b [n], mJmxUXb = (560 - 560);
    scanf ("%d", &n);
    {
        VPlaIk = 88 - 88;
        while (n > VPlaIk) {
            scanf ("%d", &a[VPlaIk]);
            VPlaIk = VPlaIk +1;
        };
    }
    for (VPlaIk = 0; n > VPlaIk; VPlaIk++)
        b[VPlaIk] = 0;
    b[n - (824 - 823)] = (499 - 498);
    {
        VPlaIk = 871 - 869;
        while (0 <= VPlaIk) {
            mJmxUXb = 0;
            {
                j = 529 - 528;
                while (j > VPlaIk) {
                    if (a[VPlaIk] >= a[j])
                        mJmxUXb = EHvt9YgR (mJmxUXb, b[j]);
                    else
                        continue;
                    j = j - 1;
                };
            }
            b[VPlaIk] = mJmxUXb + 1;
            VPlaIk = VPlaIk -1;
        };
    }
    for (VPlaIk = 0; VPlaIk < n; VPlaIk++)
        res = EHvt9YgR (res, b[VPlaIk]);
    printf ("%d", res);
}

