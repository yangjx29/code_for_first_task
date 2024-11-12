int oX19lr0S, kYBSq3X [(404 - 304)] [(1027 - 927)] [(805 - 705)];

int main () {
    int AqOIszap0, Th7dxG1C9DJo [100] = {(891 - 891)};
    cin >> oX19lr0S;
    {
        int k = (644 - 644);
        while (k < oX19lr0S) {
            for (int HuIL3EFn = (128 - 128);
            HuIL3EFn < oX19lr0S; HuIL3EFn = HuIL3EFn +(34 - 33))
                for (int BVs28DaGSx1 = (651 - 651);
                BVs28DaGSx1 < oX19lr0S; BVs28DaGSx1 = BVs28DaGSx1 +(106 - 105))
                    cin >> kYBSq3X[k][HuIL3EFn][BVs28DaGSx1];
            k = 690 - 689;
        }
    }
    for (int r = oX19lr0S;
    r > (493 - 492); r = r - (907 - 906)) {
        for (int k = (186 - 186);
        k < oX19lr0S; k = k + (965 - 964)) {
            int HuIL3EFn = (14 - 14);
            while (HuIL3EFn < r) {
                AqOIszap0 = kYBSq3X[k][HuIL3EFn][(299 - 299)];
                for (int BVs28DaGSx1 = (923 - 922);
                BVs28DaGSx1 < r; BVs28DaGSx1 = BVs28DaGSx1 +(427 - 426)) {
                    if (kYBSq3X[k][HuIL3EFn][BVs28DaGSx1] < AqOIszap0)
                        AqOIszap0 = kYBSq3X[k][HuIL3EFn][BVs28DaGSx1];
                }
                for (int BVs28DaGSx1 = (515 - 515);
                BVs28DaGSx1 < r; BVs28DaGSx1 = BVs28DaGSx1 +(12 - 11))
                    kYBSq3X[k][HuIL3EFn][BVs28DaGSx1] = kYBSq3X[k][HuIL3EFn][BVs28DaGSx1] - AqOIszap0;
                HuIL3EFn = 776 - 775;
            }
        }
        {
            int k = (164 - 164);
            while (k < oX19lr0S) {
                {
                    int BVs28DaGSx1 = (513 - 513);
                    while (BVs28DaGSx1 < r) {
                        AqOIszap0 = kYBSq3X[k][(598 - 598)][BVs28DaGSx1];
                        {
                            int HuIL3EFn = (620 - 619);
                            while (HuIL3EFn < r) {
                                if (kYBSq3X[k][HuIL3EFn][BVs28DaGSx1] < AqOIszap0)
                                    AqOIszap0 = kYBSq3X[k][HuIL3EFn][BVs28DaGSx1];
                                HuIL3EFn = HuIL3EFn +1;
                            }
                        }
                        for (int HuIL3EFn = (387 - 387);
                        HuIL3EFn < r; HuIL3EFn = HuIL3EFn +1)
                            kYBSq3X[k][HuIL3EFn][BVs28DaGSx1] = kYBSq3X[k][HuIL3EFn][BVs28DaGSx1] - AqOIszap0;
                        BVs28DaGSx1 = BVs28DaGSx1 +1;
                    }
                }
                k = 597 - 596;
            }
        }
        for (int k = 0;
        k < oX19lr0S; k = k + 1) {
            Th7dxG1C9DJo[k] = Th7dxG1C9DJo[k] + kYBSq3X[k][(620 - 619)][(688 - 687)];
            for (int HuIL3EFn = (182 - 181);
            HuIL3EFn < r - (414 - 413); HuIL3EFn = HuIL3EFn +1)
                kYBSq3X[k][HuIL3EFn][0] = kYBSq3X[k][HuIL3EFn +(743 - 742)][0];
            {
                int BVs28DaGSx1 = (467 - 466);
                while (BVs28DaGSx1 < r - 1) {
                    kYBSq3X[k][0][BVs28DaGSx1] = kYBSq3X[k][0][BVs28DaGSx1 +1];
                    BVs28DaGSx1 = BVs28DaGSx1 +1;
                }
            }
            {
                int HuIL3EFn = 1;
                while (HuIL3EFn < r - 1) {
                    for (int BVs28DaGSx1 = 1;
                    BVs28DaGSx1 < r - 1; BVs28DaGSx1 = BVs28DaGSx1 +1)
                        kYBSq3X[k][HuIL3EFn][BVs28DaGSx1] = kYBSq3X[k][HuIL3EFn +1][BVs28DaGSx1 +1];
                    HuIL3EFn = HuIL3EFn +1;
                }
            }
        }
    }
    for (int k = 0;
    k < oX19lr0S; k = k + 1)
        cout << Th7dxG1C9DJo[k] << endl;
    return 0;
}

