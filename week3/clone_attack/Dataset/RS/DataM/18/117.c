int main () {
    int xFt2bEuA;
    int sum;
    int L2Tq79;
    int rowMin, TvKMHo;
    int a [100] [100], TVapes, j, k, o4XqC5nlr27;
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
    int dTdhxg4I;
    scanf ("%d", &o4XqC5nlr27);
    for (k = (30 - 30); k < o4XqC5nlr27; k = k + 1) {
        sum = 0;
        for (TVapes = 0; TVapes < o4XqC5nlr27; TVapes = TVapes +1) {
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
            for (j = 0; j < o4XqC5nlr27; j = j + 1) {
                scanf ("%d", &a[TVapes][j]);
            };
        }
        for (L2Tq79 = o4XqC5nlr27; 1 < L2Tq79; L2Tq79 = L2Tq79 -1) {
            for (TVapes = 0; L2Tq79 > TVapes; TVapes = TVapes +1) {
                xFt2bEuA = 0;
                dTdhxg4I = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                for (j = 0; L2Tq79 > j; j = j + 1) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (0 < a[TVapes][j]) {
                        if (dTdhxg4I == 1) {
                            rowMin = a[TVapes][j];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            dTdhxg4I = 0;
                        }
                        else if (a[TVapes][j] < rowMin)
                            rowMin = a[TVapes][j];
                    }
                    else {
                        xFt2bEuA = 1;
                        break;
                    };
                }
                if (!(0 != xFt2bEuA)) {
                    for (j = 0; L2Tq79 > j; j = j + 1) {
                        if (a[TVapes][j] > 0)
                            a[TVapes][j] = a[TVapes][j] - rowMin;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    };
                };
            }
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (j < L2Tq79) {
                    xFt2bEuA = 0;
                    dTdhxg4I = 1;
                    for (TVapes = 0; L2Tq79 > TVapes; TVapes = TVapes +1) {
                        if (a[TVapes][j] > 0) {
                            if (dTdhxg4I == 1) {
                                dTdhxg4I = 0;
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
                                TvKMHo = a[TVapes][j];
                            }
                            else if (a[TVapes][j] < TvKMHo)
                                TvKMHo = a[TVapes][j];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            };
                        }
                        else {
                            xFt2bEuA = 1;
                            break;
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
                    if (xFt2bEuA == 0) {
                        for (TVapes = 0; TVapes < L2Tq79; TVapes = TVapes +1) {
                            if (a[TVapes][j] > 0)
                                a[TVapes][j] = a[TVapes][j] - TvKMHo;
                        };
                    }
                    j = j + 1;
                };
            }
            TVapes = 0;
            sum = sum + a[1][1];
            {
                j = 2;
                while (j < L2Tq79) {
                    a[TVapes][j - 1] = a[TVapes][j];
                    j = j + 1;
                };
            }
            j = 0;
            {
                TVapes = 2;
                while (TVapes < L2Tq79) {
                    a[TVapes -1][j] = a[TVapes][j];
                    TVapes = TVapes +1;
                };
            }
            for (TVapes = 2; TVapes < L2Tq79; TVapes = TVapes +1) {
                j = 2;
                while (j < L2Tq79) {
                    a[TVapes -1][j - 1] = a[TVapes][j];
                    j = j + 1;
                };
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

