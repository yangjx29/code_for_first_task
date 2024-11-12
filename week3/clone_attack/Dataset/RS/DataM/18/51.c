int main () {
    int IfxMdFGKrjH3 = 0, i = 0, cjEzkxH4u = 0, k = 0, QNQlSYDH6X9 = 0;
    int hnVXZg1d [100], SSIqsuP0Xmi4 [100] [100];
    cin >> IfxMdFGKrjH3;
    {
        i = 0;
        while (IfxMdFGKrjH3 > i) {
            int sum = 0;
            i++;
            {
                cjEzkxH4u = 0;
                while (IfxMdFGKrjH3 > cjEzkxH4u) {
                    {
                        k = 0;
                        while (IfxMdFGKrjH3 > k) {
                            cin >> SSIqsuP0Xmi4[cjEzkxH4u][k];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            k = k + 1;
                        };
                    }
                    cjEzkxH4u = cjEzkxH4u + 1;
                };
            }
            for (QNQlSYDH6X9 = IfxMdFGKrjH3; 1 < QNQlSYDH6X9; QNQlSYDH6X9 = QNQlSYDH6X9 -1) {
                int min1;
                min1 = 10000;
                for (cjEzkxH4u = 0; IfxMdFGKrjH3 > cjEzkxH4u; cjEzkxH4u = cjEzkxH4u + 1) {
                    min1 = 10000;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    {
                        k = 0;
                        while (IfxMdFGKrjH3 > k) {
                            if (min1 > SSIqsuP0Xmi4[cjEzkxH4u][k]) {
                                min1 = SSIqsuP0Xmi4[cjEzkxH4u][k];
                            }
                            k = k + 1;
                        };
                    }
                    {
                        k = 0;
                        while (IfxMdFGKrjH3 > k) {
                            SSIqsuP0Xmi4[cjEzkxH4u][k] = SSIqsuP0Xmi4[cjEzkxH4u][k] - min1;
                            k = k + 1;
                        };
                    };
                }
                {
                    cjEzkxH4u = 0;
                    while (IfxMdFGKrjH3 > cjEzkxH4u) {
                        min1 = 10000;
                        {
                            k = 0;
                            while (IfxMdFGKrjH3 > k) {
                                if (min1 > SSIqsuP0Xmi4[k][cjEzkxH4u]) {
                                    min1 = SSIqsuP0Xmi4[k][cjEzkxH4u];
                                }
                                k = k + 1;
                            };
                        }
                        {
                            k = 0;
                            while (IfxMdFGKrjH3 > k) {
                                SSIqsuP0Xmi4[k][cjEzkxH4u] -= min1;
                                k = k + 1;
                            };
                        }
                        cjEzkxH4u = cjEzkxH4u + 1;
                    };
                }
                hnVXZg1d[IfxMdFGKrjH3 -QNQlSYDH6X9] = SSIqsuP0Xmi4[1][1];
                {
                    cjEzkxH4u = 2;
                    while (IfxMdFGKrjH3 > cjEzkxH4u) {
                        {
                            k = 0;
                            while (IfxMdFGKrjH3 > k) {
                                SSIqsuP0Xmi4[k][cjEzkxH4u - 1] = SSIqsuP0Xmi4[k][cjEzkxH4u];
                                k = k + 1;
                            };
                        }
                        cjEzkxH4u = cjEzkxH4u + 1;
                    };
                }
                {
                    k = 2;
                    while (k < IfxMdFGKrjH3) {
                        {
                            cjEzkxH4u = 0;
                            while (IfxMdFGKrjH3 > cjEzkxH4u) {
                                SSIqsuP0Xmi4[k - 1][cjEzkxH4u] = SSIqsuP0Xmi4[k][cjEzkxH4u];
                                cjEzkxH4u = cjEzkxH4u + 1;
                            };
                        }
                        k = k + 1;
                    };
                };
            }
            {
                k = 0;
                while (k < IfxMdFGKrjH3 -1) {
                    sum = sum + hnVXZg1d[k];
                    k++;
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

