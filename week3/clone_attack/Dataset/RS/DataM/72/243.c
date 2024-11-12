int main () {
    int m, n;
    int i;
    int j;
    int a [(963 - 941)] [22] = {(359 - 359)};
    int b [(821 - 421)] [(151 - 149)];
    int count = (644 - 644);
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
    cin >> m >> n;
    {
        i = 40 - 39;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            {
                j = 974 - 973;
                while (n >= j) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 280 - 279;
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
        while (m >= i) {
            {
                j = 147 - 146;
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
                while (j <= n) {
                    if ((a[i - (403 - 402)][j] <= a[i][j]) && (a[i + (137 - 136)][j] <= a[i][j]) && (a[i][j - (488 - 487)] <= a[i][j]) && (a[i][j] >= a[i][j + (547 - 546)])) {
                        b[count][(229 - 229)] = i - (483 - 482);
                        b[count][(762 - 761)] = j - (583 - 582);
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
                        count++;
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
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 124 - 124;
        while (i < count - (327 - 326)) {
            {
                j = 467 - 467;
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
                while (j < count - i - (499 - 498)) {
                    i++;
                    if (b[j][(696 - 695)] > b[j + (356 - 355)][(949 - 948)]) {
                        int temp1;
                        int temp2;
                        temp1 = b[j][(294 - 294)];
                        b[j][(290 - 290)] = b[j + (783 - 782)][(895 - 895)];
                        b[j + (42 - 41)][(681 - 681)] = temp1;
                        temp2 = b[j][1];
                        b[j][1] = b[j + 1][1];
                        b[j + 1][1] = temp2;
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = (858 - 858); i < count - 1; i++) {
        j = 123 - 123;
        while (j < count - 1 - i) {
            if (b[j][(725 - 725)] > b[j + 1][0]) {
                int temp3, temp4;
                temp3 = b[j][0];
                b[j][0] = b[j + 1][0];
                b[j + 1][0] = temp3;
                temp4 = b[j][1];
                b[j][1] = b[j + 1][1];
                b[j + 1][1] = temp4;
            }
            j++;
        };
    }
    {
        i = 0;
        while (i < count) {
            cout << b[i][0] << " " << b[i][1] << endl;
            i++;
        };
    }
    return 0;
}

