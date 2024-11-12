void  LKWan1yeS (int house [], int n) {
    int t806uWmreGt, VIl0tOJboahK, VVMkZA;
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
    {
        t806uWmreGt = 811 - 810;
        while (n > t806uWmreGt) {
            {
                VIl0tOJboahK = 451 - 451;
                while (VIl0tOJboahK < n - t806uWmreGt) {
                    if (house[VIl0tOJboahK +(128 - 127)] > house[VIl0tOJboahK]) {
                        VVMkZA = house[VIl0tOJboahK];
                        house[VIl0tOJboahK] = house[VIl0tOJboahK +(449 - 448)];
                        house[VIl0tOJboahK +1] = VVMkZA;
                    }
                    VIl0tOJboahK = VIl0tOJboahK +1;
                };
            }
            t806uWmreGt = t806uWmreGt + 1;
        };
    };
}

void  YHV3Xov8W2fy (int house [], int n) {
    int t806uWmreGt;
    {
        t806uWmreGt = 192 - 192;
        while (n > t806uWmreGt) {
            scanf ("%d", &house[t806uWmreGt]);
            t806uWmreGt = t806uWmreGt + 1;
        };
    };
}

main () {
    int n, t806uWmreGt, VIl0tOJboahK, bsqYGtxD [(1130 - 130)], WxCWkzbd1Zeo [1000], v5NvtyL6n8 = (280 - 280), TpB3Hm = (331 - 331), slowt, dvt7o8m, P3pnjJit, uIf9bDZxKT;
    {
        t806uWmreGt = 0;
        while (1) {
            scanf ("%d", &n);
            if (!(0 != n)) {
                return 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                YHV3Xov8W2fy (bsqYGtxD, n);
                LKWan1yeS (bsqYGtxD, n);
                YHV3Xov8W2fy (WxCWkzbd1Zeo, n);
                LKWan1yeS (WxCWkzbd1Zeo, n);
                v5NvtyL6n8 = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                TpB3Hm = 0;
                slowt = n - 1;
                dvt7o8m = n - 1;
                {
                    VIl0tOJboahK = 0;
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
                    while (n > VIl0tOJboahK) {
                        if (WxCWkzbd1Zeo[VIl0tOJboahK] < bsqYGtxD[TpB3Hm]) {
                            v5NvtyL6n8 = v5NvtyL6n8 + 1;
                            TpB3Hm = TpB3Hm +1;
                        }
                        else {
                            if (bsqYGtxD[TpB3Hm] < WxCWkzbd1Zeo[VIl0tOJboahK]) {
                                v5NvtyL6n8--;
                                slowt = slowt - 1;
                            }
                            else if (!(WxCWkzbd1Zeo[VIl0tOJboahK] != bsqYGtxD[TpB3Hm])) {
                                for (P3pnjJit = slowt, uIf9bDZxKT = dvt7o8m; P3pnjJit > TpB3Hm; P3pnjJit--, uIf9bDZxKT--) {
                                    if (bsqYGtxD[P3pnjJit] > WxCWkzbd1Zeo[uIf9bDZxKT]) {
                                        v5NvtyL6n8 = v5NvtyL6n8 + 1;
                                        slowt--;
                                        dvt7o8m--;
                                        n--;
                                    }
                                    else if (bsqYGtxD[P3pnjJit] <= WxCWkzbd1Zeo[uIf9bDZxKT]) {
                                        if (bsqYGtxD[P3pnjJit] < WxCWkzbd1Zeo[VIl0tOJboahK]) {
                                            dvt7o8m = uIf9bDZxKT;
                                            v5NvtyL6n8--;
                                            slowt = P3pnjJit -1;
                                            break;
                                        }
                                        else {
                                            dvt7o8m = uIf9bDZxKT;
                                            slowt = P3pnjJit -1;
                                        };
                                    };
                                };
                            };
                        }
                        if (TpB3Hm > slowt) {
                            break;
                        }
                        VIl0tOJboahK = VIl0tOJboahK +1;
                    };
                }
                printf ("%d\n", v5NvtyL6n8 * (831 - 631));
            }
            t806uWmreGt++;
        };
    }
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
    return 0;
}

