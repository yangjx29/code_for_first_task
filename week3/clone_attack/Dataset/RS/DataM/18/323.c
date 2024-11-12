int main () {
    int n = (979 - 979), OR7AjBZJm = (612 - 612), j = 0, k = 0, h = 0, juUKBO = 0, sum = 0;
    int pzwhg3CZq [n + (562 - 561)] [n + (555 - 554)];
    cin >> n;
    {
        OR7AjBZJm = 157 - 156;
        while (OR7AjBZJm <= n) {
            OR7AjBZJm++;
            sum = 0;
            for (k = 0; k < n; k++) {
                for (h = 0; h < n; h = h + 1) {
                    cin >> pzwhg3CZq[k][h];
                };
            }
            for (juUKBO = n; juUKBO >= 2; juUKBO = juUKBO - 1) {
                for (j = 0; j <= juUKBO - 1; j = j + 1) {
                    pzwhg3CZq[j][juUKBO] = pzwhg3CZq[j][0];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    {
                        h = 0;
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
                        while (h <= juUKBO - 1) {
                            if (pzwhg3CZq[j][h] < pzwhg3CZq[j][juUKBO])
                                pzwhg3CZq[j][juUKBO] = pzwhg3CZq[j][h];
                            h++;
                        };
                    };
                }
                for (j = 0; j <= juUKBO - 1; j = j + 1) {
                    for (h = 0; h <= juUKBO - 1; h = h + 1) {
                        pzwhg3CZq[j][h] = pzwhg3CZq[j][h] - pzwhg3CZq[j][juUKBO];
                    };
                }
                for (j = 0; j <= n - 1; j++) {
                    pzwhg3CZq[juUKBO][j] = pzwhg3CZq[0][j];
                    for (h = 0; h <= juUKBO - 1; h++) {
                        if (pzwhg3CZq[h][j] < pzwhg3CZq[juUKBO][j])
                            pzwhg3CZq[juUKBO][j] = pzwhg3CZq[h][j];
                    };
                }
                for (j = 0; j <= juUKBO - 1; j++) {
                    for (h = 0; h <= juUKBO - 1; h++) {
                        pzwhg3CZq[h][j] = pzwhg3CZq[h][j] - pzwhg3CZq[juUKBO][j];
                    };
                }
                sum = sum + pzwhg3CZq[1][1];
                if (juUKBO > 2) {
                    {
                        j = 2;
                        while (j <= juUKBO - 1) {
                            pzwhg3CZq[0][j - 1] = pzwhg3CZq[0][j];
                            pzwhg3CZq[j - 1][0] = pzwhg3CZq[j][0];
                            j++;
                        };
                    }
                    for (j = 1; j <= juUKBO - 2; j++) {
                        for (h = 1; h <= juUKBO - 2; h++) {
                            pzwhg3CZq[j][h] = pzwhg3CZq[j + 1][h + 1];
                        };
                    };
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

