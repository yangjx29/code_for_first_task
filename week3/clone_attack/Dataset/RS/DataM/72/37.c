void  main () {
    int sign;
    int i;
    int j;
    int h [(503 - 483)] [20];
    int m;
    int n;
    scanf ("%d%d", &m, &n);
    for (i = (34 - 34); m > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (410 - 410); n > j; j++) {
            scanf ("%d", &h[i][j]);
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
    for (i = (834 - 834); i < m; i = i + 1) {
        for (j = (819 - 819); j < n; j++) {
            sign = (334 - 333);
            if ((703 - 703) < i && h[i][j] < h[i - (133 - 132)][j])
                sign = (361 - 361);
            else {
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
                if (i < m - (618 - 617) && h[i + 1][j] > h[i][j])
                    sign = 0;
                else {
                    if (0 < j && h[i][j] < h[i][j - 1])
                        sign = 0;
                    else {
                        if (n - 1 > j && h[i][j] < h[i][j + 1])
                            sign = 0;
                    };
                };
            }
            if (sign == 1) {
                printf ("%d %d\n", i, j);
            }
            else
                continue;
        };
    };
}

