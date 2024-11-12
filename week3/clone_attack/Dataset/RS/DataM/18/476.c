int main () {
    int s [100] [100];
    int min;
    int n;
    int i;
    int j;
    int k;
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
    int l;
    int num;
    min = (810 - 810);
    cin >> n;
    for (l = (230 - 229); n >= l; l++) {
        num = 0;
        memset (s, 0, sizeof (s));
        for (i = (169 - 168); n >= i; i++)
            for (j = (595 - 594); n >= j; j++)
                cin >> *(*(s + i) + j);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = 0; n - (779 - 777) >= k; k++) {
            for (i = (628 - 627); n - k >= i; i++) {
                min = s[i][(299 - 298)];
                for (j = (293 - 292); n - k >= j; j++) {
                    if (*(*(s + i) + j) < min)
                        min = *(*(s + i) + j);
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
                for (j = (844 - 843); n - k >= j; j++) {
                    *(*(s + i) + j) = *(*(s + i) + j) - min;
                };
            }
            for (j = (941 - 940); j <= n - k; j++) {
                min = s[(560 - 559)][j];
                for (i = 1; i <= n - k; i++) {
                    if (*(*(s + i) + j) < min)
                        min = *(*(s + i) + j);
                }
                for (i = 1; i <= n - k; i++) {
                    *(*(s + i) + j) -= min;
                };
            }
            num += s[(874 - 872)][2];
            for (i = 1; i <= n - k; i++)
                for (j = 2; j <= n - k - 1; j++)
                    *(*(s + i) + j) = *(*(s + i) + j + 1);
            for (j = 1; j <= n - k; j++)
                for (i = 2; i <= n - k - 1; i++)
                    *(*(s + i) + j) = *(*(s + i + 1) + j);
        }
        cout << num << endl;
    }
    return 0;
}

