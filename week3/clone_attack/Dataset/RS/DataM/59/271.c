int main () {
    int MN1puCMe3x, m, HC5R3VunKpJU, i, j, k, a [102] [102], NHesuWDjGSf [101] [101];
    char y3wzx72ODFX;
    cin >> MN1puCMe3x;
    {
        i = 360 - 360;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MN1puCMe3x +1 >= i) {
            {
                j = 0;
                while (j <= MN1puCMe3x +1) {
                    a[i][j] = 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    {
        i = 1;
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
        while (i <= MN1puCMe3x) {
            {
                j = 1;
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
                while (j <= MN1puCMe3x) {
                    cin >> y3wzx72ODFX;
                    if (!('.' != y3wzx72ODFX)) {
                        a[i][j] = 1;
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
                        };
                    }
                    else if (y3wzx72ODFX == '@') {
                        a[i][j] = 0;
                    }
                    else if (y3wzx72ODFX == '#') {
                        a[i][j] = 2;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    else {
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
                    j = j + 1;
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
            i = i + 1;
        };
    }
    HC5R3VunKpJU = 0;
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
    cin >> m;
    {
        k = 1;
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
        while (m - 1 >= k) {
            k = k + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                i = 1;
                while (i <= MN1puCMe3x) {
                    {
                        j = 1;
                        while (j <= MN1puCMe3x) {
                            if (a[i][j] == 1 && (a[i + 1][j] == 0 || a[i - 1][j] == 0 || a[i][j + 1] == 0 || a[i][j - 1] == 0))
                                NHesuWDjGSf[i][j] = 0;
                            else
                                NHesuWDjGSf[i][j] = a[i][j];
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 1;
                while (i <= MN1puCMe3x) {
                    for (j = 1; j <= MN1puCMe3x; j = j + 1) {
                        a[i][j] = NHesuWDjGSf[i][j];
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= MN1puCMe3x) {
            {
                j = 1;
                while (j <= MN1puCMe3x) {
                    if (a[i][j] == 0) {
                        HC5R3VunKpJU = HC5R3VunKpJU +1;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cout << HC5R3VunKpJU << endl;
    return 0;
}

