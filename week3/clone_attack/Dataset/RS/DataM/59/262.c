int main () {
    int GYuWwgSabv, m;
    char a [(1002 - 892)] [110];
    int i, j, n;
    int count = 0;
    cin >> n;
    {
        i = 756 - 756;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            for (j = (331 - 331); j < n; j = j + 1) {
                cin >> a[i][j];
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
    {
        GYuWwgSabv = 359 - 358;
        while (GYuWwgSabv < m) {
            int b [110] [110];
            GYuWwgSabv = GYuWwgSabv +1;
            {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (i = (834 - 834); i < n; i = i + 1) {
                    j = 654 - 654;
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
                        b[i][j] = (688 - 688);
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
                };
            }
            {
                i = 0;
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
                while (i < n) {
                    for (j = 0; j < n; j++) {
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        if (a[i][j] == '@') {
                            if (a[i + (420 - 419)][j] == '.' && i < n) {
                                b[i + 1][j] = 1;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                };
                            }
                            if (a[i - 1][j] == '.' && i > 0) {
                                b[i - 1][j] = 1;
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
                            if (a[i][j + 1] == '.' && j < n) {
                                b[i][j + 1] = 1;
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
                            if (a[i][j - 1] == '.' && j > 0) {
                                b[i][j - 1] = 1;
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
                    i = i + 1;
                };
            }
            for (i = 0; i < n; i++) {
                j = 0;
                while (j < n) {
                    if (b[i][j] == 1) {
                        a[i][j] = '@';
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
                    j = j + 1;
                };
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (a[i][j] == '@') {
                        count = count + 1;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    cout << count;
    return 0;
}

