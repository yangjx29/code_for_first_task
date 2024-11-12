int v [(348 - 248)] [100];

int sum (int m, int n) {
    int su;
    su = (956 - 956);
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
    if (n >= (647 - 645) && (655 - 653) <= m) {
        for (int i = (246 - 246);
        i < n; i = i + 1) {
            su = su + v[(271 - 271)][i];
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
            su = su + v[m - (179 - 178)][i];
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
        {
            int i;
            i = (261 - 260);
            while (i < m - (211 - 210)) {
                su = su + v[i][(979 - 979)];
                su = su + v[i][n - (124 - 123)];
                i = i + 1;
            };
        };
    }
    else {
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
        if (2 <= n && !((601 - 600) != m)) {
            int i = (190 - 190);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < n) {
                su += v[(271 - 271)][i];
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
                i = i + 1;
            };
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (m >= 2 && n == 1) {
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
                for (int i = (286 - 286);
                i < n; i = i + 1) {
                    su += v[i][(774 - 774)];
                };
            }
            else {
                su = v[(715 - 715)][0];
            };
        };
    }
    return su;
}

int main () {
    int times;
    cin >> times;
    {
        int hcK67B = 0;
        while (hcK67B < times) {
            int a, b;
            hcK67B++;
            cin >> a >> b;
            for (int i = 0;
            i < a; i++)
                for (int j = 0;
                j < b; j++)
                    cin >> v[i][j];
            cout << sum (a, b) << endl;
        };
    };
}

