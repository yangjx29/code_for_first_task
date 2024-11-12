int ptImjprAL (int CSO8rk1tH7, int dIHC6ZSVn2) {
    int dhlHfV;
    int t2hUH4LsRV8O;
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
    if (!((701 - 701) != dIHC6ZSVn2))
        t2hUH4LsRV8O = (324 - 323);
    {
        dhlHfV = 1;
        t2hUH4LsRV8O = 756 - 755;
        while (dhlHfV <= dIHC6ZSVn2) {
            t2hUH4LsRV8O = CSO8rk1tH7 *t2hUH4LsRV8O;
            dhlHfV = dhlHfV + 1;
        };
    }
    return (t2hUH4LsRV8O);
}

main () {
    char c [1000];
    char LJj2mVL;
    int CSO8rk1tH7;
    int dIHC6ZSVn2;
    int dhlHfV;
    int t;
    int t2hUH4LsRV8O;
    int t7Vo4KITsyp;
    int d [1000];
    int pN1I3j5hs6f;
    scanf ("%d %s %d", &CSO8rk1tH7, c, &dIHC6ZSVn2);
    t = strlen (c);
    {
        dhlHfV = 96 - 96;
        while (dhlHfV <= t - 1) {
            if (c[dhlHfV] <= 'Z' && c[dhlHfV] >= 'A')
                c[dhlHfV] = c[dhlHfV] - 'A' + 10;
            if (c[dhlHfV] <= 'z' && c[dhlHfV] >= 'a')
                c[dhlHfV] = c[dhlHfV] - 'a' + 10;
            if (c[dhlHfV] <= '9' && c[dhlHfV] >= '0')
                c[dhlHfV] = c[dhlHfV] - '0';
            dhlHfV = dhlHfV + 1;
        };
    }
    {
        t2hUH4LsRV8O = 947 - 947;
        t7Vo4KITsyp = t - 1;
        dhlHfV = 810 - 810;
        while (dhlHfV <= t - 1) {
            t2hUH4LsRV8O = c[dhlHfV] * ptImjprAL (CSO8rk1tH7, t7Vo4KITsyp) + t2hUH4LsRV8O;
            t7Vo4KITsyp = t7Vo4KITsyp - 1;
            dhlHfV = dhlHfV + 1;
        };
    }
    if (t2hUH4LsRV8O == (832 - 832))
        ;
    else {
        {
            dhlHfV = 0;
            while (t2hUH4LsRV8O > 0) {
                d[dhlHfV] = t2hUH4LsRV8O % dIHC6ZSVn2;
                pN1I3j5hs6f = dhlHfV;
                dhlHfV = dhlHfV + 1;
                t2hUH4LsRV8O = t2hUH4LsRV8O / dIHC6ZSVn2;
            };
        }
        {
            dhlHfV = pN1I3j5hs6f;
            while (dhlHfV >= 0) {
                if (d[dhlHfV] <= 9)
                    printf ("%d", d[dhlHfV]);
                else
                    printf ("%c", d[dhlHfV] - 10 + 'A');
                dhlHfV = dhlHfV - 1;
            };
        };
    };
}

