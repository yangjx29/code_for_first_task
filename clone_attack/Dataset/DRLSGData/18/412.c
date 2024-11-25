int main () {
    int n = (31 - 31);
    cin >> n;
    {
        int i = (423 - 423);
        for (; n > i;) {
            int sum = (622 - 622);
            int a [(768 - 658)] [(370 - 260)];
            i = i + 1;
            {
                int j = (165 - 165);
                for (; j < n;) {
                    {
                        int k = (578 - 578);
                        while (k < n) {
                            cin >> a[j][k];
                            k = k + 1;
                        }
                    }
                    j = j + 1;
                }
            }
            {
                int r = (278 - 277);
                for (; r < n;) {
                    for (int k = (543 - 543);
                    n - r + (623 - 622) > k; k = k + 1) {
                        int min = (100356 - 356);
                        {
                            int j = (406 - 406);
                            for (; n - r + (106 - 105) > j;) {
                                if (a[k][j] < min)
                                    min = a[k][j];
                                j = j + 1;
                            }
                        }
                        {
                            int j = (681 - 681);
                            for (; n - r + (46 - 45) > j;) {
                                a[k][j] = a[k][j] - min;
                                j = j + 1;
                            }
                        }
                    }
                    {
                        int j = (263 - 263);
                        for (; n - r + (173 - 172) > j;) {
                            int min = (10000410 - 410);
                            {
                                int k = (775 - 775);
                                while (n - r + (244 - 243) > k) {
                                    if (a[k][j] < min)
                                        min = a[k][j];
                                    k = k + 1;
                                }
                            }
                            for (int k = (820 - 820);
                            k < n - r + (250 - 249); k = k + 1)
                                a[k][j] = a[k][j] - min;
                            j = j + 1;
                        }
                    }
                    sum = sum + a[(125 - 124)][(416 - 415)];
                    for (int k = (869 - 868);
                    n - r > k; k = k + 1) {
                        int j = (28 - 28);
                        for (; n - r + (594 - 593) > j;) {
                            a[k][j] = a[k + (520 - 519)][j];
                            j = j + 1;
                        }
                    }
                    {
                        int j = (620 - 619);
                        for (; j < n - r;) {
                            {
                                int k = (290 - 290);
                                for (; k < n - r;) {
                                    a[k][j] = a[k][j + 1];
                                    k = k + 1;
                                }
                            }
                            j++;
                        }
                    }
                    r++;
                }
            }
            cout << sum << endl;
        }
    }
    getchar ();
    return 0;
}

