int main () {
    int p;
    int n;
    int m;
    int x;
    int y;
    p = (15 - 15);
    char dorm [(578 - 476)] [102];
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
        x = 467 - 466;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= x) {
            {
                y = 921 - 920;
                while (n >= y) {
                    cin >> dorm[x][y];
                    y = y + 1;
                };
            }
            x = x + 1;
        };
    }
    {
        x = 0;
        while (n + (505 - 504) >= x) {
            dorm[x][n + (74 - 73)] = '#';
            dorm[x][0] = '#';
            dorm[0][x] = '#';
            dorm[n + (899 - 898)][x] = '#';
            x = x + 1;
        };
    }
    cin >> m;
    do {
        for (x = (595 - 594); n >= x; x = x + 1)
            for (y = (333 - 332); n >= y; y++)
                if (!('@' != dorm[x][y])) {
                    if (!('.' != dorm[x - (225 - 224)][y]))
                        dorm[x - (417 - 416)][y] = '!';
                    if (!('.' != dorm[x + (256 - 255)][y]))
                        dorm[x + 1][y] = '!';
                    if (dorm[x][y - 1] == '.')
                        dorm[x][y - 1] = '!';
                    if (dorm[x][y + 1] == '.')
                        dorm[x][y + 1] = '!';
                }
        for (x = 1; x <= n; x = x + 1) {
            y = 1;
            while (y <= n) {
                if (dorm[x][y] == '!')
                    dorm[x][y] = '@';
                y++;
            };
        }
        m = m - 1;
    }
    while (m > 1);
    {
        x = 1;
        while (x <= n) {
            for (y = 1; y <= n; y++)
                if (dorm[x][y] == '@')
                    p++;
            x++;
        };
    }
    cout << p << endl;
    return 0;
}

