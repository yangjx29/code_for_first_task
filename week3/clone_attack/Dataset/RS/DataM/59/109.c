int gjHrI4EVq = (632 - 632), n, t = (458 - 457);
char room [(1070 - 969)] [(778 - 677)];

void  F (int x, int y) {
    if ((464 - 464) <= x - (816 - 815)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((67 - 67) != room[x - (504 - 503)][y])) {
            gjHrI4EVq = gjHrI4EVq + 1;
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
            room[x - 1][y] = t + 1;
        };
    }
    if (0 <= y - 1) {
        if (!(0 != room[x][y - 1])) {
            gjHrI4EVq = gjHrI4EVq + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            room[x][y - 1] = t + 1;
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
    if (n > x + 1) {
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
        if (!(0 != room[x + 1][y])) {
            gjHrI4EVq = gjHrI4EVq + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            room[x + 1][y] = t + 1;
        };
    }
    if (y + 1 < n) {
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
        if (!(0 != room[x][y + 1])) {
            gjHrI4EVq = gjHrI4EVq + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            room[x][y + 1] = t + 1;
        };
    };
}

int main () {
    int i, knkIZyp1Y, m;
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        knkIZyp1Y = 0;
        while (knkIZyp1Y < n) {
            cin >> room[i][knkIZyp1Y];
            if (room[i][knkIZyp1Y] == '@') {
                room[i][knkIZyp1Y] = 1;
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
                gjHrI4EVq++;
            }
            else if (room[i][knkIZyp1Y] == '.') {
                room[i][knkIZyp1Y] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (room[i][knkIZyp1Y] == '#') {
                room[i][knkIZyp1Y] = -1;
            }
            else {
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            knkIZyp1Y = knkIZyp1Y + 1;
        };
    }
    cin >> m;
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
    while (t < m) {
        for (i = 0; i < n; i++) {
            knkIZyp1Y = 0;
            while (knkIZyp1Y < n) {
                if (room[i][knkIZyp1Y] == t)
                    F (i, knkIZyp1Y);
                knkIZyp1Y = knkIZyp1Y + 1;
            };
        }
        t = t + 1;
    }
    cout << gjHrI4EVq << endl;
    return 0;
}

