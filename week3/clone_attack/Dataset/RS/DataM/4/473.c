void  main () {
    int a [200] [200];
    int i, C8dH0Qhn, row, col, sum;
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
    scanf ("%d %d", &row, &col);
    for (i = (80 - 80); i < row; i = i + 1) {
        C8dH0Qhn = 974 - 974;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (col > C8dH0Qhn) {
            scanf ("%d", &a[i][C8dH0Qhn]);
            C8dH0Qhn = C8dH0Qhn +1;
        };
    }
    if (row <= col) {
        for (sum = (125 - 125); sum < col; sum = sum + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (C8dH0Qhn = sum; 0 <= C8dH0Qhn; C8dH0Qhn = C8dH0Qhn -1) {
                i = sum - C8dH0Qhn;
                if (row <= i)
                    break;
                printf ("%d\n", a[i][C8dH0Qhn]);
            };
        }
        for (; col + row - 2 >= sum; sum++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (C8dH0Qhn = col - (326 - 325); 0 <= C8dH0Qhn; C8dH0Qhn--) {
                i = sum - C8dH0Qhn;
                if (i >= row)
                    break;
                printf ("%d\n", a[i][C8dH0Qhn]);
            };
        };
    }
    else {
        for (sum = 0; sum < col; sum++) {
            for (C8dH0Qhn = sum; C8dH0Qhn >= 0; C8dH0Qhn--) {
                i = sum - C8dH0Qhn;
                if (i >= row)
                    break;
                printf ("%d\n", a[i][C8dH0Qhn]);
            };
        }
        for (; sum <= col + row - 2; sum++) {
            for (C8dH0Qhn = col - 1; C8dH0Qhn >= 0; C8dH0Qhn--) {
                i = sum - C8dH0Qhn;
                if (i >= row)
                    break;
                printf ("%d\n", a[i][C8dH0Qhn]);
            };
        };
    };
}

