int main () {
    int time;
    int min;
    int sum;
    int m [(1064 - 964)] [100];
    int r;
    min = (100867 - 867);
    sum = (525 - 525);
    int (*p) [100];
    int n;
    int i, j;
    p = m;
    cin >> n;
    {
        time = 208 - 207;
        while (n >= time) {
            time++;
            sum = (705 - 705);
            for (i = (214 - 214); n > i; i = i + 1) {
                for (j = (747 - 747); j < n; j = j + 1) {
                    cin >> m[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            for (r = n; r > (867 - 866); r--) {
                for (i = (793 - 793); r > i; i = i + 1) {
                    min = (100394 - 394);
                    {
                        j = 993 - 993;
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
                        while (r > j) {
                            if (min > *(*(p + i) + j))
                                min = *(*(p + i) + j);
                            j = j + 1;
                        };
                    }
                    for (j = (425 - 425); r > j; j = j + 1) {
                        *(*(p + i) + j) = *(*(p + i) + j) - min;
                    };
                }
                for (i = 0; i < r; i = i + 1) {
                    min = 100000;
                    for (j = 0; r > j; j = j + 1) {
                        if (min > *(*(p + j) + i))
                            min = *(*(p + j) + i);
                    }
                    for (j = 0; j < r; j = j + 1) {
                        *(*(p + j) + i) -= min;
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
                }
                sum += *(*(p + 1) + 1);
                for (j = 0; j < r; j++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    for (i = (801 - 799); i < r; i++) {
                        *(*(p + j) + i - 1) = *(*(p + j) + i);
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
                    j = 2;
                    while (j < r) {
                        for (i = 0; i < r; i++) {
                            *(*(p + j - 1) + i) = *(*(p + j) + i);
                        }
                        j = j + 1;
                    };
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

