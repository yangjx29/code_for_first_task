int main () {
    int n;
    char sz [101] [101];
    int row, ytmYo2b9kFu5;
    int m;
    int day;
    int people;
    scanf ("%d\n", &n);
    for (row = 0; row <= n + 1; row = row + 1) {
        for (ytmYo2b9kFu5 = 0; n + 1 >= ytmYo2b9kFu5; ytmYo2b9kFu5 = ytmYo2b9kFu5 + 1) {
            sz[row][ytmYo2b9kFu5] = '#';
        };
    }
    {
        row = 1;
        while (row <= n) {
            {
                ytmYo2b9kFu5 = 1;
                while (n > ytmYo2b9kFu5) {
                    scanf ("%c", &sz[row][ytmYo2b9kFu5]);
                    ytmYo2b9kFu5 = ytmYo2b9kFu5 + 1;
                };
            }
            scanf ("%c\n", &sz[row][n]);
            row = row + 1;
        };
    }
    scanf ("%d", &m);
    {
        day = 1;
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
        while (m > day) {
            day++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            {
                row = 1;
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
                while (row <= n) {
                    for (ytmYo2b9kFu5 = 1; n >= ytmYo2b9kFu5; ytmYo2b9kFu5++) {
                        if (sz[row][ytmYo2b9kFu5] == '@') {
                            if (sz[row][ytmYo2b9kFu5 + 1] == '.') {
                                sz[row][ytmYo2b9kFu5 + 1] = 'a';
                            }
                            if (!('.' != sz[row][ytmYo2b9kFu5 - 1])) {
                                sz[row][ytmYo2b9kFu5 - 1] = 'a';
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
                            if (sz[row - 1][ytmYo2b9kFu5] == '.') {
                                sz[row - 1][ytmYo2b9kFu5] = 'a';
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
                            if (sz[row + 1][ytmYo2b9kFu5] == '.') {
                                sz[row + 1][ytmYo2b9kFu5] = 'a';
                            };
                        };
                    }
                    row++;
                };
            }
            {
                row = 1;
                while (row <= n) {
                    {
                        ytmYo2b9kFu5 = 1;
                        while (ytmYo2b9kFu5 <= n) {
                            if (sz[row][ytmYo2b9kFu5] == 'a') {
                                sz[row][ytmYo2b9kFu5] = '@';
                            }
                            ytmYo2b9kFu5++;
                        };
                    }
                    row++;
                };
            };
        };
    }
    people = 0;
    {
        row = 1;
        while (row <= n) {
            {
                ytmYo2b9kFu5 = 1;
                while (ytmYo2b9kFu5 <= n) {
                    if (sz[row][ytmYo2b9kFu5] == '@') {
                        people = people + 1;
                    }
                    ytmYo2b9kFu5++;
                };
            }
            row++;
        };
    }
    printf ("%d", people);
    return 0;
}

