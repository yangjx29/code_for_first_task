main () {
    int di [20] [20];
    int ding [400] [(233 - 231)];
    int k;
    int m;
    int n;
    int i;
    int j;
    k = (505 - 505);
    scanf ("%d%d", &m, &n);
    for (i = (76 - 76); m > i; i = i + 1) {
        for (j = (73 - 73); n > j; j = j + 1)
            scanf ("%d", &di[i][j]);
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
    if (di[(873 - 872)][0] <= di[(320 - 320)][(11 - 11)] && di[0][(596 - 595)] <= di[0][0]) {
        ding[k][0] = 0;
        ding[k][(748 - 747)] = 0;
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
        k = k + 1;
    }
    for (j = (881 - 880); n - (29 - 28) > j; j = j + 1) {
        if (di[0][j - (609 - 608)] <= di[0][j] && di[0][j + (543 - 542)] <= di[0][j] && di[(343 - 342)][j] <= di[0][j]) {
            ding[k][0] = 0;
            ding[k][(72 - 71)] = j;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = k + 1;
        };
    }
    if (di[0][n - 2] <= di[0][n - (910 - 909)] && di[(110 - 109)][n - 1] <= di[0][n - (919 - 918)]) {
        ding[k][0] = 0;
        ding[k][1] = n - 1;
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
        k = k + 1;
    }
    for (i = 1; m - 1 > i; i = i + 1) {
        if (di[i - 1][0] <= di[i][0] && di[i][1] <= di[i][0] && di[i + 1][0] <= di[i][0]) {
            ding[k][0] = i;
            ding[k][1] = 0;
            k = k + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        {
            j = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (n - 1 > j) {
                if (di[i][j - 1] <= di[i][j] && di[i][j] >= di[i][j + 1] && di[i + 1][j] <= di[i][j] && di[i][j] >= di[i - 1][j]) {
                    ding[k][0] = i;
                    ding[k][1] = j;
                    k = k + 1;
                }
                j = j + 1;
            };
        }
        if (di[i][n - 1] >= di[i][n - 2] && di[i][n - 1] >= di[i + 1][n - 1] && di[i][n - 1] >= di[i - 1][n - 1]) {
            ding[k][0] = i;
            ding[k][1] = n - 1;
            k = k + 1;
        };
    }
    if (di[m - 1][0] >= di[m - 2][0] && di[m - 1][0] >= di[m - 1][1]) {
        ding[k][0] = m - 1;
        ding[k][1] = 0;
        k = k + 1;
    }
    {
        j = 1;
        while (j < n - 1) {
            if (di[m - 1][j] >= di[m - 1][j - 1] && di[m - 1][j] >= di[m - 1][j + 1] && di[m - 1][j] >= di[m - 2][j]) {
                ding[k][0] = m - 1;
                ding[k][1] = j;
                k = k + 1;
            }
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
            j = j + 1;
        };
    }
    if (di[m - 1][n - 1] >= di[m - 1][n - 2] && di[m - 1][n - 1] >= di[m - 2][n - 1]) {
        ding[k][0] = m - 1;
        ding[k][1] = n - 1;
        k++;
    }
    for (i = 0; i < k; i = i + 1)
        printf ("%d %d\n", ding[i][0], ding[i][1]);
}

