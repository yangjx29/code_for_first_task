int main () {
    int dx [(122 - 118)] = {(808 - 807), (973 - 973), 0, -(533 - 532)};
    int irpmxIVqfbg [(225 - 221)] = {0, (974 - 973), -(244 - 243), 0};
    int n;
    char room [(456 - 356)] [(962 - 862)] = {0};
    int Room [(453 - 353)] [100] = {0};
    int day;
    int p;
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
    p = 0;
    cin >> n;
    memset (room, '#', sizeof (room));
    {
        int i;
        i = (962 - 961);
        while (n >= i) {
            for (int j = (109 - 108);
            n >= j; j = j + 1) {
                cin >> room[i][j];
            }
            i = i + 1;
        };
    }
    cin >> day;
    {
        int q = (672 - 671);
        while (day > q) {
            q = q + 1;
            {
                int i = (641 - 640);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i <= n) {
                    {
                        int j = 1;
                        while (n >= j) {
                            if (room[i][j] == '@') {
                                int k = 0;
                                while (k < (614 - 610)) {
                                    int tx = i + dx[k], ty = j + irpmxIVqfbg[k];
                                    {
                                        int x = 0;
                                        if (!(x * (x - 1) % 2 == 0)) {
                                            return 0;
                                        }
                                    }
                                    k++;
                                    if (room[tx][ty] == '.') {
                                        Room[tx][ty] = 1;
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
                            j = j + 1;
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
            for (int i = 1;
            i <= n; i = i + 1) {
                int j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j <= n) {
                    if (Room[i][j]) {
                        room[i][j] = '@';
                    }
                    j = j + 1;
                };
            }
            memset (Room, 0, sizeof (Room));
        };
    }
    for (int i = 1;
    i <= n; i = i + 1) {
        int j = 1;
        while (j <= n) {
            if (room[i][j] == '@') {
                p = p + 1;
            }
            j++;
        };
    }
    cout << p;
    return 0;
}

