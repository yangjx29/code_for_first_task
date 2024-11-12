main () {
    int i, dsrfbZFv, k, m, vgnXws6KJp;
    int XVN5qgF [10] [10] = {0}, unV6XaEfcWQ2 [10] [10] = {0};
    scanf ("%d%d", &m, &vgnXws6KJp);
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
    XVN5qgF[5][5] = m;
    {
        k = 0;
        while (k < vgnXws6KJp) {
            k = k + 1;
            for (i = 1; i <= 9; i = i + 1) {
                dsrfbZFv = 1;
                while (9 >= dsrfbZFv) {
                    if (!(0 == XVN5qgF[i][dsrfbZFv])) {
                        int s = 2 * XVN5qgF[i][dsrfbZFv];
                        int JCtgd1q8Ph = XVN5qgF[i][dsrfbZFv];
                        unV6XaEfcWQ2[i][dsrfbZFv] += s;
                        unV6XaEfcWQ2[i][dsrfbZFv + 1] = unV6XaEfcWQ2[i][dsrfbZFv + 1] + JCtgd1q8Ph;
                        unV6XaEfcWQ2[i][dsrfbZFv - 1] = unV6XaEfcWQ2[i][dsrfbZFv - 1] + JCtgd1q8Ph;
                        unV6XaEfcWQ2[i + 1][dsrfbZFv + 1] += JCtgd1q8Ph;
                        unV6XaEfcWQ2[i + 1][dsrfbZFv - 1] = unV6XaEfcWQ2[i + 1][dsrfbZFv - 1] + JCtgd1q8Ph;
                        unV6XaEfcWQ2[i + 1][dsrfbZFv] = unV6XaEfcWQ2[i + 1][dsrfbZFv] + JCtgd1q8Ph;
                        unV6XaEfcWQ2[i - 1][dsrfbZFv] += JCtgd1q8Ph;
                        unV6XaEfcWQ2[i - 1][dsrfbZFv + 1] = unV6XaEfcWQ2[i - 1][dsrfbZFv + 1] + JCtgd1q8Ph;
                        unV6XaEfcWQ2[i - 1][dsrfbZFv - 1] = unV6XaEfcWQ2[i - 1][dsrfbZFv - 1] + JCtgd1q8Ph;
                    }
                    dsrfbZFv = dsrfbZFv + 1;
                };
            }
            for (int p = 1;
            9 >= p; p = p + 1) {
                for (int q = 1;
                q <= 9; q = q + 1) {
                    XVN5qgF[p][q] = unV6XaEfcWQ2[p][q];
                    unV6XaEfcWQ2[p][q] = 0;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= 9) {
            for (dsrfbZFv = 1; dsrfbZFv <= 9; dsrfbZFv = dsrfbZFv + 1) {
                printf ("%d", XVN5qgF[i][dsrfbZFv]);
                if (dsrfbZFv == 9) {
                }
                else {
                };
            }
            i = i + 1;
        };
    };
}

