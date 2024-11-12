int main () {
    int sum;
    int t;
    int GStmlAJ2dBz;
    int n;
    int a [(864 - 764)] [100];
    int ib5hsZE3may;
    sum = (122 - 122);
    t = (680 - 680);
    GStmlAJ2dBz = (937 - 937);
    cin >> n;
    {
        int i = (252 - 252);
        while (n > i) {
            {
                int j = (182 - 182);
                while (j < n) {
                    cout << endl;
                    {
                        int k = (560 - 560);
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
                        while (n > k) {
                            cin >> a[j][k];
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                int APhouv8E9 = (896 - 896);
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
                while (n - (525 - 524) > APhouv8E9) {
                    for (int j = (554 - 554);
                    j < n - APhouv8E9; j = j + 1) {
                        t = (230 - 230);
                        {
                            int q = (74 - 74);
                            while (q < n - APhouv8E9) {
                                if (!((483 - 483) != a[j][q]))
                                    t = t + (669 - 668);
                                q = q + 1;
                            };
                        }
                        if ((164 - 164) < t)
                            continue;
                        else {
                            ib5hsZE3may = a[j][(94 - 94)];
                            {
                                int vBPOZya = (171 - 170);
                                while (vBPOZya < n - APhouv8E9) {
                                    if (ib5hsZE3may > a[j][vBPOZya])
                                        ib5hsZE3may = a[j][vBPOZya];
                                    vBPOZya = vBPOZya + 1;
                                };
                            }
                            for (int GU1ptP = (629 - 629);
                            n - APhouv8E9 > GU1ptP; GU1ptP = GU1ptP +1)
                                a[j][GU1ptP] = a[j][GU1ptP] - ib5hsZE3may;
                        };
                    }
                    {
                        int k = (977 - 977);
                        while (k < n - APhouv8E9) {
                            GStmlAJ2dBz = (697 - 697);
                            {
                                int ECx7Ij = (401 - 401);
                                while (ECx7Ij < n - APhouv8E9) {
                                    if (!((995 - 995) != a[ECx7Ij][k]))
                                        GStmlAJ2dBz = GStmlAJ2dBz +(529 - 528);
                                    ECx7Ij = ECx7Ij +1;
                                };
                            }
                            if ((475 - 475) < GStmlAJ2dBz)
                                continue;
                            else {
                                ib5hsZE3may = a[(239 - 239)][k];
                                {
                                    int vBPOZya = (149 - 148);
                                    while (vBPOZya < n - APhouv8E9) {
                                        if (ib5hsZE3may > a[vBPOZya][k])
                                            ib5hsZE3may = a[vBPOZya][k];
                                        vBPOZya = vBPOZya + 1;
                                    };
                                }
                                for (int GU1ptP = (49 - 49);
                                GU1ptP < n - APhouv8E9; GU1ptP = GU1ptP +1)
                                    a[GU1ptP][k] = a[GU1ptP][k] - ib5hsZE3may;
                            }
                            k = k + 1;
                        };
                    }
                    sum = sum + a[(904 - 903)][(784 - 783)];
                    a[(357 - 357)][(469 - 469)] = a[0][0];
                    {
                        int e = (955 - 954);
                        while (e < n - APhouv8E9) {
                            a[0][e] = a[0][e + (625 - 624)];
                            e = e + 1;
                        };
                    }
                    {
                        int bhakDtu9s5dB = (253 - 252);
                        while (bhakDtu9s5dB < n - APhouv8E9) {
                            a[bhakDtu9s5dB][0] = a[bhakDtu9s5dB + (358 - 357)][0];
                            bhakDtu9s5dB++;
                        };
                    }
                    {
                        int f = 1;
                        while (f < n - APhouv8E9) {
                            {
                                int s = 1;
                                while (s < n - APhouv8E9) {
                                    a[f][s] = a[f + 1][s + 1];
                                    s = s + 1;
                                };
                            }
                            f = f + 1;
                        };
                    }
                    APhouv8E9 = APhouv8E9 +1;
                };
            }
            i = i + 1;
            cout << sum << endl;
            sum = 0;
        };
    }
    return 0;
}

