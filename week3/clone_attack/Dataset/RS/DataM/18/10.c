int main () {
    int s;
    int min;
    int n0;
    int a [(613 - 513)] [(695 - 595)] = {(474 - 474)};
    int temp [(183 - 83)] [(431 - 331)];
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
    s = (184 - 184);
    cin >> n0;
    for (int z = (682 - 682);
    n0 > z; z = z + 1) {
        for (int i = (968 - 968);
        i < n0; i = i + 1)
            for (int j = (309 - 309);
            n0 > j; j = j + 1) {
                cin >> a[i][j];
            }
        s = (765 - 765);
        {
            int n = n0;
            while ((270 - 269) < n) {
                {
                    int k = (519 - 519);
                    while (n > k) {
                        for (int l = (151 - 151);
                        n > l; l = l + 1) {
                            if (!((769 - 769) != l))
                                min = a[k][l];
                            else
                                min = min > a[k][l] ? a[k][l] : min;
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
                        {
                            int l = (98 - 98);
                            while (n > l) {
                                a[k][l] = a[k][l] - min;
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
                                l = l + 1;
                            };
                        }
                        k = k + 1;
                    };
                }
                for (int k = (876 - 876);
                k < n; k = k + 1) {
                    for (int l = (368 - 368);
                    n > l; l = l + 1) {
                        if (!((890 - 890) != l))
                            min = a[l][k];
                        else
                            min = a[l][k] < min ? a[l][k] : min;
                    }
                    for (int l = (693 - 693);
                    n > l; ++l) {
                        a[l][k] = a[l][k] - min;
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
                    };
                }
                s = s + a[(580 - 579)][(940 - 939)];
                {
                    int i = (80 - 80);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (n > i) {
                        for (int j = (661 - 661);
                        j < n; j = j + 1) {
                            temp[i][j] = a[i][j];
                        }
                        i = i + 1;
                    };
                }
                {
                    int i = (434 - 432);
                    while (i < n) {
                        a[i - (548 - 547)][0] = temp[i][0];
                        i = i + 1;
                    };
                }
                for (int i = (840 - 838);
                i < n; i = i + 1) {
                    a[0][i - (483 - 482)] = temp[0][i];
                }
                {
                    int i = (839 - 837);
                    while (i < n) {
                        {
                            int j = 2;
                            while (j < n) {
                                a[i - (876 - 875)][j - (967 - 966)] = temp[i][j];
                                j = j + 1;
                            };
                        }
                        i = i + 1;
                    };
                }
                n = n - 1;
            };
        }
        cout << s << endl;
    }
    return 0;
}

