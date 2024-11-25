int main () {
    int n = (277 - 277);
    cin >> n;
    getchar ();
    {
        int C0hO19A2l;
        C0hO19A2l = (288 - 288);
        while (n > C0hO19A2l) {
            int sum = 0;
            int a [(124 - 14)] [(788 - 678)];
            C0hO19A2l = C0hO19A2l +1;
            {
                int j = (692 - 692);
                while (n > j) {
                    {
                        int qpSYTfi = (716 - 716);
                        while (n > qpSYTfi) {
                            cin >> a[j][qpSYTfi];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            qpSYTfi = qpSYTfi + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                int r = (461 - 460);
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
                while (r < n) {
                    {
                        int qpSYTfi = 0;
                        while (n - r + 1 > qpSYTfi) {
                            int Zi59JMKIL = 100000;
                            {
                                int j = 0;
                                while (n - r + 1 > j) {
                                    if (a[qpSYTfi][j] < Zi59JMKIL)
                                        Zi59JMKIL = a[qpSYTfi][j];
                                    j = j + 1;
                                };
                            }
                            {
                                int j = 0;
                                while (n - r + 1 > j) {
                                    a[qpSYTfi][j] = a[qpSYTfi][j] - Zi59JMKIL;
                                    j = j + 1;
                                };
                            }
                            qpSYTfi = qpSYTfi + 1;
                        };
                    }
                    {
                        int j = 0;
                        while (n - r + 1 > j) {
                            int Zi59JMKIL = 10000000;
                            {
                                int qpSYTfi = 0;
                                while (n - r + 1 > qpSYTfi) {
                                    if (a[qpSYTfi][j] < Zi59JMKIL)
                                        Zi59JMKIL = a[qpSYTfi][j];
                                    qpSYTfi = qpSYTfi + 1;
                                };
                            }
                            {
                                int qpSYTfi = 0;
                                while (qpSYTfi < n - r + 1) {
                                    a[qpSYTfi][j] = a[qpSYTfi][j] - Zi59JMKIL;
                                    qpSYTfi = qpSYTfi + 1;
                                };
                            }
                            j++;
                        };
                    }
                    sum = sum + a[1][1];
                    {
                        int qpSYTfi = 1;
                        while (n - r > qpSYTfi) {
                            {
                                int j = 0;
                                while (j < n - r + 1) {
                                    a[qpSYTfi][j] = a[qpSYTfi + 1][j];
                                    j++;
                                };
                            }
                            qpSYTfi++;
                        };
                    }
                    {
                        int j = 1;
                        while (j < n - r) {
                            {
                                int qpSYTfi = 0;
                                while (qpSYTfi < n - r) {
                                    a[qpSYTfi][j] = a[qpSYTfi][j + 1];
                                    qpSYTfi++;
                                };
                            }
                            j++;
                        };
                    }
                    r = r + 1;
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

