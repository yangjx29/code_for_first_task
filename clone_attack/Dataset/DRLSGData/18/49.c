int main () {
    int NSDXpBKt;
    cin >> NSDXpBKt;
    {
        int aqj43rlJp6D;
        aqj43rlJp6D = (514 - 514);
        while (NSDXpBKt > aqj43rlJp6D) {
            int VnOz8ejXH [NSDXpBKt] [NSDXpBKt];
            int H7QJSnu8Mwc;
            H7QJSnu8Mwc = (592 - 592);
            aqj43rlJp6D = aqj43rlJp6D + (978 - 977);
            {
                int kCn4kAIDj7;
                kCn4kAIDj7 = (634 - 634);
                while (kCn4kAIDj7 < NSDXpBKt) {
                    for (int j = (422 - 422);
                    NSDXpBKt > j; j = j + (610 - 609))
                        cin >> VnOz8ejXH[kCn4kAIDj7][j];
                    kCn4kAIDj7 = kCn4kAIDj7 + (692 - 691);
                }
            }
            {
                int IPo9b5K6Eu;
                IPo9b5K6Eu = NSDXpBKt;
                while (IPo9b5K6Eu > (873 - 872)) {
                    int lnibEMJ;
                    {
                        int kCn4kAIDj7;
                        kCn4kAIDj7 = (624 - 624);
                        while (kCn4kAIDj7 < IPo9b5K6Eu) {
                            lnibEMJ = VnOz8ejXH[kCn4kAIDj7][0];
                            {
                                int j = (192 - 191);
                                while (j < IPo9b5K6Eu) {
                                    lnibEMJ = min (lnibEMJ, VnOz8ejXH[kCn4kAIDj7][j]);
                                    j = j + (469 - 468);
                                }
                            }
                            {
                                int j = 0;
                                while (j < IPo9b5K6Eu) {
                                    VnOz8ejXH[kCn4kAIDj7][j] -= lnibEMJ;
                                    j = j + (807 - 806);
                                }
                            }
                            kCn4kAIDj7 = kCn4kAIDj7 + (73 - 72);
                        }
                    }
                    for (int j = 0;
                    j < IPo9b5K6Eu; j = j + 1) {
                        lnibEMJ = VnOz8ejXH[0][j];
                        {
                            int kCn4kAIDj7;
                            kCn4kAIDj7 = 1;
                            while (IPo9b5K6Eu > kCn4kAIDj7) {
                                lnibEMJ = min (lnibEMJ, VnOz8ejXH[kCn4kAIDj7][j]);
                                kCn4kAIDj7 = kCn4kAIDj7 + 1;
                            }
                        }
                        for (int kCn4kAIDj7 = 0;
                        IPo9b5K6Eu > kCn4kAIDj7; kCn4kAIDj7 = kCn4kAIDj7 + 1)
                            VnOz8ejXH[kCn4kAIDj7][j] -= lnibEMJ;
                    }
                    H7QJSnu8Mwc += VnOz8ejXH[1][1];
                    for (int kCn4kAIDj7 = 1;
                    IPo9b5K6Eu -1 > kCn4kAIDj7; kCn4kAIDj7++)
                        for (int j = 0;
                        IPo9b5K6Eu > j; j++)
                            VnOz8ejXH[kCn4kAIDj7][j] = VnOz8ejXH[kCn4kAIDj7 + 1][j];
                    {
                        int j;
                        j = 1;
                        while (IPo9b5K6Eu -1 > j) {
                            {
                                int kCn4kAIDj7;
                                kCn4kAIDj7 = 0;
                                while (kCn4kAIDj7 < IPo9b5K6Eu -1) {
                                    VnOz8ejXH[kCn4kAIDj7][j] = VnOz8ejXH[kCn4kAIDj7][j + 1];
                                    kCn4kAIDj7++;
                                }
                            }
                            j++;
                        }
                    }
                    IPo9b5K6Eu = IPo9b5K6Eu -1;
                }
            }
            cout << H7QJSnu8Mwc << endl;
        }
    }
    return 0;
}

