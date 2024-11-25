int main () {
    int i, j, d;
    int n;
    int w26Rt98;
    int count = 0;
    char Onpc2IfvlPow [n + 2] [n + 2];
    char gPVzup9a [n + 2] [n + 2];
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
    for (i = 0; i <= n + (315 - 314); i = i + 1) {
        for (j = 0; j <= n + 1; j = j + 1) {
            Onpc2IfvlPow[i][j] = '#';
            gPVzup9a[i][j] = '#';
        };
    }
    for (i = 1; i <= n; i = i + 1) {
        for (j = 1; j <= n; j = j + 1) {
            cin >> Onpc2IfvlPow[i][j];
            gPVzup9a[i][j] = Onpc2IfvlPow[i][j];
        };
    }
    cin >> w26Rt98;
    {
        d = 1;
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
        while (d <= w26Rt98) {
            if (d % 2 == 1) {
                i = 1;
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
                while (i <= n) {
                    for (j = 1; j <= n; j = j + 1) {
                        if (Onpc2IfvlPow[i][j] == '@') {
                            gPVzup9a[i][j] = '@';
                            if (gPVzup9a[i - 1][j] != '#')
                                gPVzup9a[i - 1][j] = '@';
                            if (gPVzup9a[i + 1][j] != '#')
                                gPVzup9a[i + 1][j] = '@';
                            if (gPVzup9a[i][j - 1] != '#')
                                gPVzup9a[i][j - 1] = '@';
                            if (gPVzup9a[i][j + 1] != '#')
                                gPVzup9a[i][j + 1] = '@';
                        };
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
                    i = i + 1;
                };
            }
            if (d % 2 == 0) {
                i = 1;
                while (i <= n) {
                    for (j = 1; j <= n; j = j + 1) {
                        if (gPVzup9a[i][j] == '@') {
                            Onpc2IfvlPow[i][j] = '@';
                            if (Onpc2IfvlPow[i - 1][j] != '#')
                                Onpc2IfvlPow[i - 1][j] = '@';
                            if (Onpc2IfvlPow[i + 1][j] != '#')
                                Onpc2IfvlPow[i + 1][j] = '@';
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
                            if (Onpc2IfvlPow[i][j - 1] != '#')
                                Onpc2IfvlPow[i][j - 1] = '@';
                            if (Onpc2IfvlPow[i][j + 1] != '#')
                                Onpc2IfvlPow[i][j + 1] = '@';
                        };
                    }
                    i = i + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            d = d + 1;
        };
    }
    for (i = 1; i <= n; i = i + 1) {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= n) {
            if (w26Rt98 % 2 == 1) {
                if (Onpc2IfvlPow[i][j] == '@')
                    count = count + 1;
            }
            if (w26Rt98 % 2 == 0) {
                if (gPVzup9a[i][j] == '@')
                    count = count + 1;
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
    cout << count << endl;
}

