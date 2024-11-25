int main () {
    int nab2pRteIj = 0;
    int HX9Q0R3dGYEO;
    int n;
    char room [n + 2] [n + 2];
    int room1 [n + 2] [n + 2];
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
        int DtD6p8h = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= DtD6p8h) {
            {
                int t = 1;
                while (n >= t) {
                    cin >> room[DtD6p8h][t];
                    if (!('@' != room[DtD6p8h][t]))
                        room1[DtD6p8h][t] = 1;
                    else
                        room1[DtD6p8h][t] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    t = t + 1;
                };
            }
            DtD6p8h = DtD6p8h +1;
        };
    }
    for (int DtD6p8h = 0;
    n + 1 >= DtD6p8h; DtD6p8h = DtD6p8h +1) {
        room[0][DtD6p8h] = '#';
        room[n + 1][DtD6p8h] = '#';
        room[DtD6p8h][0] = '#';
        room[DtD6p8h][n + 1] = '#';
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
        room1[0][DtD6p8h] = 0;
        room1[n + 1][DtD6p8h] = 0;
        room1[DtD6p8h][0] = 0;
        room1[DtD6p8h][n + 1] = 0;
    }
    {
        int xaorUgwQdXFE = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (HX9Q0R3dGYEO -1 >= xaorUgwQdXFE) {
            xaorUgwQdXFE = xaorUgwQdXFE + 1;
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
                int DtD6p8h = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (n >= DtD6p8h) {
                    for (int t = 1;
                    n >= t; t = t + 1) {
                        if (room1[DtD6p8h][t] == 1) {
                            if (!('#' == room[DtD6p8h +1][t]))
                                room[DtD6p8h +1][t] = '@';
                            if (room[DtD6p8h -1][t] != '#')
                                room[DtD6p8h -1][t] = '@';
                            if (room[DtD6p8h][t + 1] != '#')
                                room[DtD6p8h][t + 1] = '@';
                            if (room[DtD6p8h][t - 1] != '#')
                                room[DtD6p8h][t - 1] = '@';
                        };
                    }
                    DtD6p8h = DtD6p8h +1;
                };
            }
            {
                int DtD6p8h = 1;
                while (DtD6p8h <= n) {
                    for (int t = 1;
                    t <= n; t = t + 1) {
                        if (room[DtD6p8h][t] == '@')
                            room1[DtD6p8h][t] = 1;
                    }
                    DtD6p8h = DtD6p8h +1;
                };
            };
        };
    }
    {
        int DtD6p8h = 1;
        while (DtD6p8h <= n) {
            for (int t = 1;
            t <= n; t = t + 1) {
                if (room[DtD6p8h][t] == '@')
                    nab2pRteIj = nab2pRteIj + 1;
            }
            DtD6p8h = DtD6p8h +1;
        };
    }
    cout << nab2pRteIj;
    cin >> HX9Q0R3dGYEO;
    return 0;
}

