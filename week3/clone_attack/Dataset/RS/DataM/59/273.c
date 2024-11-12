int main () {
    int dx [(391 - 387)] = {0, 0, (631 - 630), -(420 - 419)};
    int i;
    int j;
    int k;
    int n, m, cKg86YQDC = (457 - 457);
    char room [(215 - 114)] [(1027 - 926)];
    int dy [4] = {(732 - 731), -(448 - 447), 0, 0};
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
    cin >> n;
    {
        i = 216 - 215;
        while (n >= i) {
            for (j = (856 - 855); j <= n; j++) {
                cin >> room[i][j];
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
    cin >> m;
    for (; m > (168 - 167); m = m - 1) {
        {
            i = 135 - 134;
            while (i <= n) {
                {
                    j = 1;
                    while (j <= n) {
                        if (room[i][j] == '@') {
                            for (k = 0; 4 > k; k = k + 1) {
                                if (room[i + dx[k]][j + dy[k]] == '.')
                                    room[i + dx[k]][j + dy[k]] = '!';
                            };
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        for (i = 1; i <= n; i = i + 1) {
            j = 1;
            while (j <= n) {
                if (room[i][j] == '!')
                    room[i][j] = '@';
                j = j + 1;
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (room[i][j] == '@')
                        cKg86YQDC++;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cout << cKg86YQDC;
    return 0;
}

