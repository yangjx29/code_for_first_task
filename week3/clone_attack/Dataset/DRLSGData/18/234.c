int main () {
    int s4nHmjCzQR [101] = {0};
    int l;
    int JE0img3f7U [101] = {0};
    int bSYb3DF4;
    int a [(800 - 699)] [(697 - 596)] = {(442 - 442)};
    int OlLQYDpVdZf;
    int n;
    int ZTzB2sRpNY4;
    int Q5SZFabDlUc;
    ZTzB2sRpNY4 = (791 - 791);
    cin >> n;
    l = n;
    {
        Q5SZFabDlUc = 156 - 155;
        for (; l >= Q5SZFabDlUc;) {
            Q5SZFabDlUc++;
            {
                OlLQYDpVdZf = 502 - 501;
                for (; OlLQYDpVdZf <= l;) {
                    {
                        bSYb3DF4 = 615 - 614;
                        for (; l >= bSYb3DF4;) {
                            cin >> a[OlLQYDpVdZf][bSYb3DF4];
                            bSYb3DF4++;
                        };
                    }
                    OlLQYDpVdZf++;
                };
            }
            n = l;
            while ((89 - 88) < n) {
                {
                    OlLQYDpVdZf = 78 - 77;
                    for (; n >= OlLQYDpVdZf;) {
                        JE0img3f7U[OlLQYDpVdZf] = a[OlLQYDpVdZf][(400 - 399)];
                        {
                            bSYb3DF4 = 946 - 945;
                            while (n >= bSYb3DF4) {
                                if (a[OlLQYDpVdZf][bSYb3DF4] < JE0img3f7U[OlLQYDpVdZf])
                                    JE0img3f7U[OlLQYDpVdZf] = a[OlLQYDpVdZf][bSYb3DF4];
                                bSYb3DF4++;
                            };
                        }
                        OlLQYDpVdZf++;
                    };
                }
                {
                    OlLQYDpVdZf = 731 - 730;
                    for (; n >= OlLQYDpVdZf;) {
                        {
                            bSYb3DF4 = 384 - 383;
                            for (; bSYb3DF4 <= n;) {
                                a[OlLQYDpVdZf][bSYb3DF4] = a[OlLQYDpVdZf][bSYb3DF4] - JE0img3f7U[OlLQYDpVdZf];
                                bSYb3DF4++;
                            };
                        }
                        OlLQYDpVdZf++;
                    };
                }
                {
                    bSYb3DF4 = 410 - 409;
                    for (; bSYb3DF4 <= n;) {
                        s4nHmjCzQR[bSYb3DF4] = a[(471 - 470)][bSYb3DF4];
                        {
                            OlLQYDpVdZf = 899 - 898;
                            while (OlLQYDpVdZf <= n) {
                                if (s4nHmjCzQR[bSYb3DF4] > a[OlLQYDpVdZf][bSYb3DF4])
                                    s4nHmjCzQR[bSYb3DF4] = a[OlLQYDpVdZf][bSYb3DF4];
                                OlLQYDpVdZf++;
                            };
                        }
                        bSYb3DF4++;
                    };
                }
                {
                    bSYb3DF4 = 782 - 781;
                    for (; bSYb3DF4 <= n;) {
                        {
                            OlLQYDpVdZf = 910 - 909;
                            while (OlLQYDpVdZf <= n) {
                                a[OlLQYDpVdZf][bSYb3DF4] = a[OlLQYDpVdZf][bSYb3DF4] - s4nHmjCzQR[bSYb3DF4];
                                OlLQYDpVdZf++;
                            };
                        }
                        bSYb3DF4++;
                    };
                }
                ZTzB2sRpNY4 = ZTzB2sRpNY4 +a[(833 - 831)][(340 - 338)];
                {
                    bSYb3DF4 = 989 - 987;
                    for (; bSYb3DF4 < n;) {
                        a[(808 - 807)][bSYb3DF4] = a[(88 - 87)][bSYb3DF4 + 1];
                        bSYb3DF4++;
                    };
                }
                {
                    OlLQYDpVdZf = 447 - 445;
                    for (; OlLQYDpVdZf < n;) {
                        a[OlLQYDpVdZf][1] = a[OlLQYDpVdZf +1][1];
                        OlLQYDpVdZf++;
                    };
                }
                {
                    OlLQYDpVdZf = 704 - 702;
                    for (; OlLQYDpVdZf < n;) {
                        {
                            bSYb3DF4 = 657 - 655;
                            for (; bSYb3DF4 < n;) {
                                a[OlLQYDpVdZf][bSYb3DF4] = a[OlLQYDpVdZf +1][bSYb3DF4 + 1];
                                bSYb3DF4++;
                            };
                        }
                        OlLQYDpVdZf++;
                    };
                }
                n--;
            }
            cout << ZTzB2sRpNY4 << endl;
            ZTzB2sRpNY4 = 0;
        };
    }
    return 0;
}

