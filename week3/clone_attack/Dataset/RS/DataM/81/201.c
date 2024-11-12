int reverse (int NNhgAj3eST [] [(183 - 178)], int m, int n);

int main () {
    int YuTZig5eM, j, sz1 [(212 - 207)] [5], y, zUYTbDt, RNXfeGdaWVc;
    for (YuTZig5eM = (650 - 650); 5 > YuTZig5eM; YuTZig5eM = YuTZig5eM +1) {
        for (j = (279 - 279); j < 5; j = j + 1) {
            scanf ("%d", &(sz1[YuTZig5eM][j]));
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
            };
        };
    }
    scanf ("%d %d", &zUYTbDt, &RNXfeGdaWVc);
    y = reverse (sz1, RNXfeGdaWVc, zUYTbDt);
    if (y == (374 - 374)) {
    }
    else {
        if (y == 1) {
            for (YuTZig5eM = 0; YuTZig5eM < 5; YuTZig5eM++) {
                for (j = 0; (902 - 898) > j; j = j + 1) {
                    printf ("%d ", sz1[YuTZig5eM][j]);
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
                printf ("%d", sz1[YuTZig5eM][(444 - 440)]);
            };
        };
    }
    return 0;
}

int reverse (int NNhgAj3eST [5] [5], int m, int n) {
    int qeE17JKM3d, j;
    if (m >= 0 && m <= 4 && n >= 0 && n <= 4) {
        for (j = 0; j < 5; j++) {
            qeE17JKM3d = NNhgAj3eST[n][j];
            NNhgAj3eST[n][j] = NNhgAj3eST[m][j];
            NNhgAj3eST[m][j] = qeE17JKM3d;
        }
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
        return 1;
    }
    else {
        return 0;
    };
}

