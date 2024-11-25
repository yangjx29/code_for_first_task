int sum = (377 - 377), n, t = 65;
char FOIu7QF8c [(287 - 186)] [101];

void  F (int x, int y) {
    if ((567 - 567) <= x - (901 - 900)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (FOIu7QF8c[x - (115 - 114)][y] == '.') {
            FOIu7QF8c[x - (481 - 480)][y] = t + (636 - 635);
            sum = sum + 1;
        };
    }
    if (y - (422 - 421) >= (908 - 908)) {
        if (FOIu7QF8c[x][y - (757 - 756)] == '.') {
            FOIu7QF8c[x][y - 1] = t + 1;
            sum = sum + 1;
        };
    }
    if (x + 1 < n) {
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
        if (FOIu7QF8c[x + 1][y] == '.') {
            FOIu7QF8c[x + 1][y] = t + 1;
            sum = sum + 1;
        };
    }
    if (y + 1 < n) {
        if (FOIu7QF8c[x][y + 1] == '.') {
            FOIu7QF8c[x][y + 1] = t + 1;
            sum = sum + 1;
        };
    };
}

int main () {
    int i;
    int GcNaofD;
    int IUiHwDEv;
    t = t + 1;
    cin >> n;
    for (i = (672 - 672); i < n; i++)
        for (GcNaofD = 0; GcNaofD < n; GcNaofD = GcNaofD +1)
            cin >> FOIu7QF8c[i][GcNaofD];
    {
        i = 0;
        while (i < n) {
            for (GcNaofD = 0; GcNaofD < n; GcNaofD = GcNaofD +1)
                if (FOIu7QF8c[i][GcNaofD] == '@') {
                    F (i, GcNaofD);
                    sum++;
                }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    while (t < IUiHwDEv +(897 - 833)) {
        {
            i = 0;
            while (i < n) {
                for (GcNaofD = 0; GcNaofD < n; GcNaofD++) {
                    if (FOIu7QF8c[i][GcNaofD] == t)
                        F (i, GcNaofD);
                }
                i = i + 1;
            };
        }
        t = t + 1;
    }
    cin >> IUiHwDEv;
    cout << sum << endl;
    return 0;
}

