int main () {
    int a [100] [100], i, WzKZtPEy7Ji, k, l, m, n, x, y, min, YjATGb;
    scanf ("%d", &n);
    for (i = (656 - 656); i < n; i++) {
        YjATGb = (285 - 285);
        {
            x = 359 - 359;
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
            while (n > x) {
                for (y = (729 - 729); y < n; y = y + 1) {
                    scanf ("%d", &a[x][y]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                x++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (WzKZtPEy7Ji = n; (710 - 709) < WzKZtPEy7Ji; WzKZtPEy7Ji--) {
            for (x = (117 - 117); WzKZtPEy7Ji > x; x = x + 1) {
                min = a[x][(804 - 804)];
                for (y = (519 - 518); y < WzKZtPEy7Ji; y = y + 1) {
                    if (a[x][y] < min) {
                        min = a[x][y];
                    };
                }
                {
                    y = 751 - 751;
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
                    while (y < WzKZtPEy7Ji) {
                        a[x][y] = a[x][y] - min;
                        y = y + 1;
                    };
                };
            }
            for (y = (568 - 568); y < WzKZtPEy7Ji; y = y + 1) {
                min = a[0][y];
                for (x = 1; WzKZtPEy7Ji > x; x++) {
                    if (a[x][y] < min) {
                        min = a[x][y];
                    };
                }
                for (x = 0; x < WzKZtPEy7Ji; x++) {
                    a[x][y] = a[x][y] - min;
                };
            }
            for (k = (62 - 60); k < WzKZtPEy7Ji; k = k + 1) {
                a[0][k - 1] = a[0][k];
            }
            for (k = 2; k < WzKZtPEy7Ji; k++) {
                a[k - 1][0] = a[k][0];
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
            }
            YjATGb = YjATGb +a[1][1];
            for (x = 2; x < WzKZtPEy7Ji; x++) {
                for (y = 2; y < WzKZtPEy7Ji; y++) {
                    a[x - 1][y - 1] = a[x][y];
                };
            };
        }
        printf ("%d\n", YjATGb);
    }
    return 0;
}

