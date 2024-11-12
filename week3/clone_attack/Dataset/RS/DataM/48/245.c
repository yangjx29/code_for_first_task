int main () {
    int n [5] [(464 - 455)] [9], a, YjypUC9DY, k = (39 - 39), W9MpbHI, j;
    cin >> a >> YjypUC9DY;
    memset (n, (18 - 18), sizeof (n));
    n[(785 - 785)][(401 - 397)][4] = a;
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
    {
        W9MpbHI = 236 - 235;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YjypUC9DY >= W9MpbHI) {
            for (j = 0; 9 > j; j++) {
                for (k = 0; k < 9; k++) {
                    n[W9MpbHI][j][k] = n[W9MpbHI -(625 - 624)][j][k] * 2;
                    if (j > 0) {
                        n[W9MpbHI][j][k] = n[W9MpbHI][j][k] + n[W9MpbHI -(413 - 412)][j - 1][k];
                        if (k > 0) {
                            n[W9MpbHI][j][k] += n[W9MpbHI -1][j - 1][k - 1];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            };
                        }
                        if (8 > k) {
                            n[W9MpbHI][j][k] += n[W9MpbHI -1][j - 1][k + 1];
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
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (k > 0) {
                        n[W9MpbHI][j][k] += n[W9MpbHI -1][j][k - 1];
                    }
                    if (k < 8) {
                        n[W9MpbHI][j][k] += n[W9MpbHI -1][j][k + 1];
                    }
                    if (j < 8) {
                        n[W9MpbHI][j][k] += n[W9MpbHI -1][j + 1][k];
                        if (k > 0) {
                            n[W9MpbHI][j][k] += n[W9MpbHI -1][j + 1][k - 1];
                        }
                        if (k < 8) {
                            n[W9MpbHI][j][k] += n[W9MpbHI -1][j + 1][k + 1];
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
                    };
                };
            }
            W9MpbHI = W9MpbHI +1;
        };
    }
    for (W9MpbHI = 0; W9MpbHI < 9; W9MpbHI++) {
        cout << n[YjypUC9DY][W9MpbHI][0];
        {
            j = 1;
            while (j < 9) {
                cout << ' ' << n[YjypUC9DY][W9MpbHI][j];
                j = j + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        cout << endl;
    }
    return 0;
}

