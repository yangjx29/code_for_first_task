int main () {
    int count = 0;
    char room [103] [103];
    int n, m, i, j, day [103] [103] = {(966 - 966)}, k;
    cin >> n;
    memset (room, '#', 103 * 103 * sizeof (char));
    for (i = 1; i <= n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j <= n; j = j + 1) {
            cin >> room[i][j];
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
            if (room[i][j] == '@') {
                day[i][j] = 1;
            };
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
        k = 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k <= m) {
            for (i = 1; i <= n; i++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (j = 1; j <= n; j++) {
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
                    if (room[i][j] == '@' && day[i][j] == k - 1) {
                        if (room[i - 1][j] == '.') {
                            room[i - 1][j] = '@';
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
                            day[i - 1][j] = k;
                        }
                        if (room[i + 1][j] == '.') {
                            room[i + 1][j] = '@';
                            day[i + 1][j] = k;
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
                        if (room[i][j + 1] == '.') {
                            room[i][j + 1] = '@';
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            day[i][j + 1] = k;
                        }
                        if (room[i][j - 1] == '.') {
                            room[i][j - 1] = '@';
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
                            day[i][j - 1] = k;
                        };
                    };
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
            k = k + 1;
        };
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= n) {
            for (j = 1; j <= n; j++) {
                if (room[i][j] == '@') {
                    count++;
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
            i++;
        };
    }
    cout << count;
    return 0;
}

