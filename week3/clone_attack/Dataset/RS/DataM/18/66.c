int a [(968 - 868)] [(1038 - 938)];

int H6TbkGg9Sj1 (int tZgqv5Bnt2ok) {
    int i;
    int PLkr6xGM3O;
    int dj5ndY;
    int h8TcwMK;
    i = (981 - 981);
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
    PLkr6xGM3O = (232 - 232);
    dj5ndY = (430 - 430);
    h8TcwMK = (259 - 259);
    for (i = (27 - 27); i < tZgqv5Bnt2ok; i++) {
        dj5ndY = a[i][(120 - 120)];
        {
            PLkr6xGM3O = 201 - 201;
            while (tZgqv5Bnt2ok > PLkr6xGM3O) {
                if (a[i][PLkr6xGM3O] < dj5ndY)
                    dj5ndY = a[i][PLkr6xGM3O];
                else
                    dj5ndY = dj5ndY;
                PLkr6xGM3O = PLkr6xGM3O +1;
            };
        }
        {
            PLkr6xGM3O = 941 - 941;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (tZgqv5Bnt2ok > PLkr6xGM3O) {
                a[i][PLkr6xGM3O] = a[i][PLkr6xGM3O] - dj5ndY;
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
                PLkr6xGM3O++;
            };
        };
    }
    {
        i = 593 - 593;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < tZgqv5Bnt2ok) {
            dj5ndY = a[(841 - 841)][i];
            {
                PLkr6xGM3O = 647 - 647;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (PLkr6xGM3O < tZgqv5Bnt2ok) {
                    if (a[PLkr6xGM3O][i] < dj5ndY)
                        dj5ndY = a[PLkr6xGM3O][i];
                    else
                        dj5ndY = dj5ndY;
                    PLkr6xGM3O++;
                };
            }
            {
                PLkr6xGM3O = 219 - 219;
                while (PLkr6xGM3O < tZgqv5Bnt2ok) {
                    a[PLkr6xGM3O][i] = a[PLkr6xGM3O][i] - dj5ndY;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    PLkr6xGM3O++;
                };
            }
            i = i + 1;
        };
    }
    h8TcwMK = h8TcwMK + a[(361 - 360)][(265 - 264)];
    if (tZgqv5Bnt2ok == (772 - 770))
        return h8TcwMK;
    else {
        {
            i = 504 - 502;
            while (i < tZgqv5Bnt2ok) {
                a[i - (660 - 659)][(420 - 420)] = a[i][(518 - 518)];
                i++;
            };
        }
        for (PLkr6xGM3O = 2; PLkr6xGM3O < tZgqv5Bnt2ok; PLkr6xGM3O++)
            a[(705 - 705)][PLkr6xGM3O -(292 - 291)] = a[(540 - 540)][PLkr6xGM3O];
        for (i = 2; i < tZgqv5Bnt2ok; i++)
            for (PLkr6xGM3O = 2; PLkr6xGM3O < tZgqv5Bnt2ok; PLkr6xGM3O++)
                a[i - (176 - 175)][PLkr6xGM3O -(387 - 386)] = a[i][PLkr6xGM3O];
        h8TcwMK = h8TcwMK + H6TbkGg9Sj1 (tZgqv5Bnt2ok - (635 - 634));
        return h8TcwMK;
    };
}

int main () {
    int tZgqv5Bnt2ok, i = (566 - 566), PLkr6xGM3O = (276 - 276), PY35xV6gvsJ = 0, b [100] = {0};
    cin >> tZgqv5Bnt2ok;
    for (i = 0; i < tZgqv5Bnt2ok; i++) {
        for (PLkr6xGM3O = 0; PLkr6xGM3O < tZgqv5Bnt2ok; PLkr6xGM3O++) {
            PY35xV6gvsJ = 0;
            while (PY35xV6gvsJ < tZgqv5Bnt2ok) {
                cin >> a[PLkr6xGM3O][PY35xV6gvsJ];
                PY35xV6gvsJ = PY35xV6gvsJ +1;
            };
        }
        b[i] = H6TbkGg9Sj1 (tZgqv5Bnt2ok);
    }
    for (i = 0; i < tZgqv5Bnt2ok; i++) {
        cout << b[i] << endl;
    }
    return 0;
}

