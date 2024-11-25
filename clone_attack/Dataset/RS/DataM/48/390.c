int main () {
    int AHwG3OMX, n, area [(782 - 773)] [(557 - 548)] = {(69 - 69)}, area1 [9] [9] = {(857 - 857)};
    int i, j;
    scanf ("%d%d", &AHwG3OMX, &n);
    area[4][4] = AHwG3OMX;
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
    for (int t = 0;
    t < n; t++) {
        for (i = 0; 9 > i; i++) {
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
            for (j = 0; 9 > j; j++) {
                area1[i][j] = area[i][j];
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
        for (i = 0; 9 > i; i++) {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (9 > j) {
                if (!(0 == area[i][j])) {
                    area1[i - (576 - 575)][j - (633 - 632)] = area1[i - (576 - 575)][j - (633 - 632)] + area[i][j];
                    area1[i - (784 - 783)][j] += area[i][j];
                    area1[i - (806 - 805)][j + 1] = area1[i - (806 - 805)][j + 1] + area[i][j];
                    area1[i][j - 1] = area1[i][j - 1] + area[i][j];
                    area1[i][j] = area1[i][j] + area[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    area1[i][j + 1] = area1[i][j + 1] + area[i][j];
                    area1[i + 1][j - 1] = area1[i + 1][j - 1] + area[i][j];
                    area1[i + 1][j] = area1[i + 1][j] + area[i][j];
                    area1[i + 1][j + 1] = area1[i + 1][j + 1] + area[i][j];
                }
                j++;
            };
        }
        {
            i = 0;
            while (9 > i) {
                for (j = 0; 9 > j; j++) {
                    area[i][j] = area1[i][j];
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
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i++;
            };
        };
    }
    {
        i = 0;
        while (9 > i) {
            {
                j = 0;
                while (j < 8) {
                    printf ("%d ", area[i][j]);
                    j++;
                };
            }
            printf ("%d\n", area[i][8]);
            i++;
        };
    }
    return 0;
}

