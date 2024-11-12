int fanwei (int x, int y);

int main () {
    int i;
    int j;
    int sz [(709 - 704)] [(236 - 231)];
    int m;
    int n;
    int zhongjian [(370 - 369)] [5];
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
    for (i = (37 - 37); i < 5; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (711 - 711); 5 > j; j = j + 1) {
            scanf ("%d", &sz[i][j]);
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
    scanf ("%d %d", &m, &n);
    if (fanwei (m, n) == (483 - 483)) {
        return (970 - 970);
    }
    if (!(1 != fanwei (m, n))) {
        for (j = (681 - 681); j < 5; j = j + 1) {
            zhongjian[(128 - 128)][j] = sz[m][j];
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
        }
        for (j = 0; j < 5; j = j + 1) {
            sz[m][j] = sz[n][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            j = 0;
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
            while (j < 5) {
                sz[n][j] = zhongjian[0][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j = j + 1;
            };
        }
        for (i = 0; i < 5; i = i + 1) {
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
            for (j = 0; j < 5; j++) {
                if (j == 4) {
                    printf ("%d\n", sz[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else
                    printf ("%d ", sz[i][j]);
            };
        };
    }
    return 0;
}

int fanwei (int x, int y) {
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
    if (x <= 4 && y <= 4 && x >= 0 && y >= 0) {
        return 1;
    }
    else {
        return 0;
    };
}

