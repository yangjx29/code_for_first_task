int main () {
    int n, i, j, m, kXW69xBAmd0, num = (513 - 513), Ylokn8QvbSg, y;
    char a [n] [n];
    int b [n] [n];
    cin >> n;
    {
        i = 971 - 971;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            {
                j = 359 - 359;
                while (n > j) {
                    cin >> a[i][j];
                    if (!('@' != a[i][j])) {
                        b[i][j] = (924 - 923);
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
                        num = num + 1;
                    }
                    else
                        b[i][j] = (692 - 692);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
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
            i = i + 1;
        };
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
    cin >> m;
    for (kXW69xBAmd0 = (902 - 901); m >= kXW69xBAmd0; kXW69xBAmd0++) {
        for (i = 0; i < n; i = i + 1) {
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
            while (j < n) {
                if (!('@' != a[i][j]) && b[i][j] >= 2) {
                    if (0 < i && !('.' != a[i - (583 - 582)][j])) {
                        num = num + 1;
                        a[i - (586 - 585)][j] = '@';
                        b[i - (557 - 556)][j]++;
                    }
                    if (i < n - (593 - 592) && !('.' != a[i + (850 - 849)][j])) {
                        a[i + 1][j] = '@';
                        b[i + 1][j]++;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        num = num + 1;
                    }
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
                    if (j < n - 1 && a[i][j + 1] == '.') {
                        a[i][j + 1] = '@';
                        b[i][j + 1]++;
                        num++;
                    }
                    if (j > 0 && a[i][j - 1] == '.') {
                        num++;
                        a[i][j - 1] = '@';
                        b[i][j - 1]++;
                    };
                }
                j++;
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
        for (Ylokn8QvbSg = 0; Ylokn8QvbSg < n; Ylokn8QvbSg = Ylokn8QvbSg +1)
            for (y = 0; y < n; y = y + 1) {
                if (b[Ylokn8QvbSg][y] != 0)
                    b[Ylokn8QvbSg][y]++;
            };
    }
    cout << num;
    return 0;
}

