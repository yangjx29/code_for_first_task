int main () {
    int sum;
    int n;
    int BagP2h7RdSF [100] [100];
    int i;
    int k;
    int l;
    int min;
    int j;
    sum = (782 - 782);
    cin >> n;
    {
        l = 577 - 576;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l <= n) {
            {
                i = 529 - 529;
                while (i < n) {
                    {
                        j = 650 - 650;
                        while (n > j) {
                            cin >> BagP2h7RdSF[i][j];
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                k = n;
                while (1) {
                    {
                        i = 177 - 177;
                        while (k > i) {
                            min = BagP2h7RdSF[i][(10 - 10)];
                            {
                                j = 679 - 679;
                                while (k > j) {
                                    if (min > BagP2h7RdSF[i][j])
                                        min = BagP2h7RdSF[i][j];
                                    j = j + 1;
                                };
                            }
                            {
                                j = 562 - 562;
                                while (j < k) {
                                    BagP2h7RdSF[i][j] -= min;
                                    j = j + 1;
                                };
                            }
                            i = i + 1;
                        };
                    }
                    {
                        i = 382 - 382;
                        while (k > i) {
                            min = BagP2h7RdSF[(560 - 560)][i];
                            {
                                j = 400 - 400;
                                while (j < k) {
                                    if (min > BagP2h7RdSF[j][i])
                                        min = BagP2h7RdSF[j][i];
                                    j = j + 1;
                                };
                            }
                            {
                                j = 0;
                                while (j < k) {
                                    BagP2h7RdSF[j][i] -= min;
                                    j = j + 1;
                                };
                            }
                            i = i + 1;
                        };
                    }
                    if (k == (207 - 205))
                        break;
                    sum += BagP2h7RdSF[(703 - 702)][(755 - 754)];
                    {
                        i = 1;
                        while (i <= k - (354 - 352)) {
                            BagP2h7RdSF[0][i] = BagP2h7RdSF[0][i + 1];
                            BagP2h7RdSF[i][0] = BagP2h7RdSF[i + 1][0];
                            for (j = 1; j <= k - (267 - 265); j = j + 1)
                                BagP2h7RdSF[i][j] = BagP2h7RdSF[i + 1][j + 1];
                            i = i + 1;
                        };
                    }
                    k--;
                };
            }
            l = l + 1;
            cout << sum << endl;
            sum = 0;
        };
    }
    getchar ();
    getchar ();
    return 0;
}

