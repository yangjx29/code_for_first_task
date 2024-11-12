int main () {
    int CFCilLOq [1000];
    int iQgmDNvEwHR;
    int w;
    int a [(1879 - 879)];
    int z4b7v8Q [1000];
    int d [2000];
    int f [1000];
    for (int i = (366 - 366);
    2000 > i; i = i + 1) {
        int Fv0zc2;
        Fv0zc2 = (994 - 994);
        int s;
        s = (368 - 368);
        scanf ("%d", &iQgmDNvEwHR);
        if (iQgmDNvEwHR == (219 - 219)) {
            w = i;
            break;
        }
        for (int obAFvXusJh6D = (229 - 229);
        iQgmDNvEwHR > obAFvXusJh6D; obAFvXusJh6D = obAFvXusJh6D + 1) {
            scanf ("%d", &a[obAFvXusJh6D]);
        }
        for (int FGUrcqmvB0gO = (583 - 583);
        iQgmDNvEwHR > FGUrcqmvB0gO; FGUrcqmvB0gO = FGUrcqmvB0gO +1) {
            scanf ("%d", &CFCilLOq[FGUrcqmvB0gO]);
        }
        for (int obAFvXusJh6D = (426 - 426);
        obAFvXusJh6D < iQgmDNvEwHR; obAFvXusJh6D = obAFvXusJh6D + 1) {
            for (int FGUrcqmvB0gO = obAFvXusJh6D + (730 - 729);
            FGUrcqmvB0gO < iQgmDNvEwHR; FGUrcqmvB0gO = FGUrcqmvB0gO +1) {
                int BgvXq5ILCG;
                int AbK1CkntS04v;
                if (a[FGUrcqmvB0gO] < a[obAFvXusJh6D]) {
                    BgvXq5ILCG = a[obAFvXusJh6D];
                    a[obAFvXusJh6D] = a[FGUrcqmvB0gO];
                    a[FGUrcqmvB0gO] = BgvXq5ILCG;
                }
                if (CFCilLOq[obAFvXusJh6D] < CFCilLOq[FGUrcqmvB0gO]) {
                    AbK1CkntS04v = CFCilLOq[obAFvXusJh6D];
                    CFCilLOq[obAFvXusJh6D] = CFCilLOq[FGUrcqmvB0gO];
                    CFCilLOq[FGUrcqmvB0gO] = AbK1CkntS04v;
                };
            };
        }
        for (int l = 0;
        iQgmDNvEwHR > l; l = l + 1)
            z4b7v8Q[l] = 0;
        for (int l = 0;
        iQgmDNvEwHR > l; l = l + 1)
            f[l] = 0;
        for (int l = 0;
        l < iQgmDNvEwHR; l = l + 1) {
            int HTyOPSC;
            HTyOPSC = 0;
            {
                HTyOPSC = 0;
                while (HTyOPSC < iQgmDNvEwHR) {
                    if ((CFCilLOq[HTyOPSC] < a[l]) && (z4b7v8Q[HTyOPSC] == 0)) {
                        z4b7v8Q[HTyOPSC] = 1;
                        f[l] = 1;
                        s = s + 1;
                        break;
                    }
                    HTyOPSC = HTyOPSC +1;
                };
            }
            if (!(0 != f[l])) {
                int p;
                for (p = HTyOPSC -1; p >= 0; p = p - 1) {
                    if (!(0 != z4b7v8Q[p]))
                        break;
                }
                if (!(CFCilLOq[p] != a[l])) {
                    int yfdkmb9;
                    int BgvXq5ILCG;
                    yfdkmb9 = 0;
                    BgvXq5ILCG = 0;
                    {
                        yfdkmb9 = 0;
                        while (iQgmDNvEwHR > yfdkmb9) {
                            if (z4b7v8Q[yfdkmb9] == 0)
                                break;
                            yfdkmb9 = yfdkmb9 + 1;
                        };
                    }
                    for (BgvXq5ILCG = iQgmDNvEwHR - 1; BgvXq5ILCG >= 0; BgvXq5ILCG = BgvXq5ILCG -1) {
                        if (f[BgvXq5ILCG] == 0)
                            break;
                    }
                    if (a[BgvXq5ILCG] > CFCilLOq[yfdkmb9]) {
                        l = l - 1;
                        s = s + 1;
                        z4b7v8Q[yfdkmb9] = 1;
                        f[BgvXq5ILCG] = 1;
                        continue;
                    };
                }
                for (int FGUrcqmvB0gO = 0;
                FGUrcqmvB0gO < iQgmDNvEwHR; FGUrcqmvB0gO = FGUrcqmvB0gO +1) {
                    if (z4b7v8Q[FGUrcqmvB0gO] == 0) {
                        z4b7v8Q[FGUrcqmvB0gO] = 1;
                        f[l] = 1;
                        if (a[l] < CFCilLOq[FGUrcqmvB0gO])
                            Fv0zc2 = Fv0zc2 +1;
                        break;
                    };
                };
            };
        }
        d[i] = (s - Fv0zc2) * 200;
    }
    for (int i = 0;
    i < w; i = i + 1)
        printf ("%d\n", d[i]);
    return 0;
}

