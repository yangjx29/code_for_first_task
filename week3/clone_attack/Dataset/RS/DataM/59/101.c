int main () {
    char a [101] [101];
    int n, i, yfK3zpEj, RFJUCo, ErqbwY [(927 - 826)] [101], lHvC98wFYy0, s = (181 - 181);
    s = 0;
    for (i = 0; 100 >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (yfK3zpEj = 0; 100 >= yfK3zpEj; yfK3zpEj = yfK3zpEj + 1) {
            a[i][yfK3zpEj] = '#';
            ErqbwY[i][yfK3zpEj] = 0;
        };
    }
    cin >> n;
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
    {
        i = 46 - 45;
        while (i <= n) {
            for (yfK3zpEj = 1; n >= yfK3zpEj; yfK3zpEj++) {
                cin >> a[i][yfK3zpEj];
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
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (lHvC98wFYy0 = 1; RFJUCo -1 >= lHvC98wFYy0; lHvC98wFYy0 = lHvC98wFYy0 + 1) {
        for (i = 0; 100 >= i; i++) {
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
            for (yfK3zpEj = 0; yfK3zpEj <= 100; yfK3zpEj++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (!('@' != a[i][yfK3zpEj])) {
                    ErqbwY[i][yfK3zpEj] = 1;
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
        for (i = 0; 100 >= i; i++) {
            for (yfK3zpEj = 0; yfK3zpEj <= 100; yfK3zpEj++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (ErqbwY[i][yfK3zpEj] == 1) {
                    if (a[i + 1][yfK3zpEj] == '.') {
                        a[i + 1][yfK3zpEj] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    if (a[i - 1][yfK3zpEj] == '.') {
                        a[i - 1][yfK3zpEj] = '@';
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
                    if (a[i][yfK3zpEj + 1] == '.') {
                        a[i][yfK3zpEj + 1] = '@';
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
                    if (a[i][yfK3zpEj - 1] == '.') {
                        a[i][yfK3zpEj - 1] = '@';
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
                    ErqbwY[i][yfK3zpEj] = 0;
                };
            };
        };
    }
    for (i = 0; i <= 100; i++) {
        for (yfK3zpEj = 0; yfK3zpEj <= 100; yfK3zpEj++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[i][yfK3zpEj] == '@') {
                s++;
            };
        };
    }
    cout << s;
    cin >> RFJUCo;
    return 0;
}

