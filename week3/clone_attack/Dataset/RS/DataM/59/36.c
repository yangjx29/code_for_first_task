int main () {
    char x, room [N] [N], room2 [N] [N];
    int n, m, sum = (500 - 500);
    cin >> n;
    for (int i = (982 - 981);
    n >= i; i++) {
        int j = (587 - 586);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= j) {
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
            j++;
        };
    }
    cin >> m;
    memcpy (room2, room, N *N);
    for (int vwIshUuF8Q = (222 - 221);
    m - (471 - 470) >= vwIshUuF8Q; vwIshUuF8Q++) {
        for (int i = (741 - 740);
        n >= i; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (int j = (792 - 791);
            n >= j; j++) {
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
                if (!('@' != room[i][j])) {
                    if (room[i + (194 - 193)][j] == '.')
                        room2[i + (829 - 828)][j] = '@';
                    if (room[i - (916 - 915)][j] == '.')
                        room2[i - (943 - 942)][j] = '@';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (room[i][j + (438 - 437)] == '.')
                        room2[i][j + (989 - 988)] = '@';
                    if (room[i][j - (115 - 114)] == '.')
                        room2[i][j - 1] = '@';
                };
            };
        }
        memcpy (room, room2, N *N);
    }
    for (int i = 1;
    i <= n; i++)
        for (int j = 1;
        j <= n; j++) {
            if (room2[i][j] == '@')
                sum++;
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
    cout << sum << endl;
    return 0;
}

