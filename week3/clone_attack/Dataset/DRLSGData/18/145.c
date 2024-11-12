int GTsSuDlx3a9 (int num [(418 - 218)] [200], int s6gHLAx3);

int main () {
    int s6gHLAx3;
    int VKtox3G;
    int num [200] [200] = {(621 - 621)};
    int r9eWl267vs;
    int V9eNaCqT;
    cin >> s6gHLAx3;
    {
        V9eNaCqT = 12 - 12;
        while (V9eNaCqT <= s6gHLAx3 - (867 - 866)) {
            {
                VKtox3G = 148 - 148;
                for (; s6gHLAx3 - (238 - 237) >= VKtox3G;) {
                    {
                        r9eWl267vs = 558 - 558;
                        for (; s6gHLAx3 - (350 - 349) >= r9eWl267vs;) {
                            cin >> num[VKtox3G][r9eWl267vs];
                            r9eWl267vs++;
                        }
                    }
                    VKtox3G = VKtox3G +1;
                }
            }
            cout << GTsSuDlx3a9 (num, s6gHLAx3) << endl;
            V9eNaCqT = V9eNaCqT +1;
        }
    }
    return (844 - 844);
}

int GTsSuDlx3a9 (int num [200] [200], int s6gHLAx3) {
    int V9eNaCqT;
    int psMXiB6p;
    int sum;
    int VKtox3G;
    psMXiB6p = (1241 - 241);
    sum = (669 - 669);
    {
        VKtox3G = 0;
        for (; VKtox3G <= s6gHLAx3 - (737 - 736);) {
            psMXiB6p = (1359 - 359);
            {
                V9eNaCqT = 0;
                for (; s6gHLAx3 - (311 - 310) >= V9eNaCqT;) {
                    if (psMXiB6p > num[VKtox3G][V9eNaCqT]) {
                        psMXiB6p = num[VKtox3G][V9eNaCqT];
                    }
                    V9eNaCqT++;
                }
            }
            if (psMXiB6p != 0) {
                for (V9eNaCqT = 0; V9eNaCqT <= s6gHLAx3 - (417 - 416); V9eNaCqT++)
                    num[VKtox3G][V9eNaCqT] = num[VKtox3G][V9eNaCqT] - psMXiB6p;
            }
            VKtox3G++;
        }
    }
    {
        VKtox3G = 0;
        for (; VKtox3G <= s6gHLAx3 - (294 - 293);) {
            psMXiB6p = 1000;
            {
                V9eNaCqT = 0;
                for (; V9eNaCqT <= s6gHLAx3 - 1;) {
                    if (num[V9eNaCqT][VKtox3G] < psMXiB6p) {
                        psMXiB6p = num[V9eNaCqT][VKtox3G];
                        if (psMXiB6p == 0)
                            break;
                    }
                    V9eNaCqT++;
                }
            }
            if (psMXiB6p != 0) {
                V9eNaCqT = 0;
                while (V9eNaCqT <= s6gHLAx3 - 1) {
                    num[V9eNaCqT][VKtox3G] = num[V9eNaCqT][VKtox3G] - psMXiB6p;
                    V9eNaCqT++;
                }
            }
            VKtox3G++;
        }
    }
    sum = sum + num[1][1];
    if (s6gHLAx3 == (286 - 284))
        return sum;
    else {
        {
            V9eNaCqT = 712 - 710;
            for (; V9eNaCqT <= s6gHLAx3;) {
                num[0][V9eNaCqT -1] = num[0][V9eNaCqT];
                num[V9eNaCqT -1][0] = num[V9eNaCqT][0];
                V9eNaCqT++;
            }
        }
        {
            V9eNaCqT = 114 - 112;
            for (; V9eNaCqT <= s6gHLAx3 - 1;) {
                {
                    VKtox3G = 2;
                    while (VKtox3G <= s6gHLAx3 - 1) {
                        num[V9eNaCqT -1][VKtox3G -1] = num[V9eNaCqT][VKtox3G];
                        VKtox3G++;
                    }
                }
                V9eNaCqT++;
            }
        }
        sum = sum + GTsSuDlx3a9 (num, s6gHLAx3 - 1);
        return sum;
    }
}

