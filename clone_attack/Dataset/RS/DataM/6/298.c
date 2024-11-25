int main () {
    int UWpXjog, i, j, k, m, n, u [100] [100], s, d, x;
    scanf ("%d", &k);
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
        UWpXjog = 1;
        while (k >= UWpXjog) {
            UWpXjog++;
            d = 0;
            s = 0;
            scanf ("%d%d", &m, &n);
            {
                i = 0;
                while (m > i) {
                    {
                        j = 0;
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
                        while (n > j) {
                            scanf ("%d", &u[i][j]);
                            j = j + 1;
                        };
                    }
                    i++;
                };
            }
            {
                i = 0;
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
                while (m > i) {
                    {
                        j = 0;
                        while (n > j) {
                            s = s + u[i][j];
                            j++;
                        };
                    }
                    i++;
                };
            }
            {
                i = 1;
                while (m - 1 > i) {
                    {
                        j = 1;
                        while (j < n - 1) {
                            d += u[i][j];
                            j++;
                        };
                    }
                    i++;
                };
            }
            x = s - d;
            printf ("%d\n", x);
        };
    }
    return 0;
}

