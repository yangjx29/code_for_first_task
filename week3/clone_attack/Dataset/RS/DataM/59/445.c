int main () {
    int RgfkYQAHF9Z;
    int j;
    int k;
    int n;
    int count;
    int OwAl70Q3f6;
    char a [2] [100] [101];
    count = 0;
    scanf ("%d", &n);
    scanf ("%d", &OwAl70Q3f6);
    getchar ();
    {
        RgfkYQAHF9Z = 468 - 468;
        while (n > RgfkYQAHF9Z) {
            gets (a [0] [RgfkYQAHF9Z]);
            strcpy (a[(659 - 658)][RgfkYQAHF9Z], a[0][RgfkYQAHF9Z]);
            RgfkYQAHF9Z++;
        };
    }
    {
        k = 0;
        while ((OwAl70Q3f6 -1) > k) {
            {
                RgfkYQAHF9Z = 0;
                while (n > RgfkYQAHF9Z) {
                    for (j = 0; n > j; j++) {
                        if (!('@' != a[0][RgfkYQAHF9Z][j])) {
                            if (n > RgfkYQAHF9Z +1) {
                                if (!('.' != a[0][RgfkYQAHF9Z +1][j])) {
                                    a[1][RgfkYQAHF9Z +1][j] = '@';
                                };
                            }
                            if (0 <= RgfkYQAHF9Z -1) {
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                if (!('.' != a[0][RgfkYQAHF9Z -1][j])) {
                                    a[1][RgfkYQAHF9Z -1][j] = '@';
                                    {
                                        int x = 0, y;
                                        if (!(x * (x - 1) % 2 == 0)) {
                                            float n = 0.0;
                                            if (n > 10)
                                                return;
                                            else
                                                n = 0;
                                        }
                                    };
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
                            if (n > j + 1) {
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                }
                                if (!('.' != a[0][RgfkYQAHF9Z][j + 1])) {
                                    a[1][RgfkYQAHF9Z][j + 1] = '@';
                                };
                            }
                            if (j - 1 >= 0) {
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        int m = 0;
                                        int n = 0;
                                        m = m * n + n - m + n * 2;
                                        return 0;
                                    }
                                }
                                if (a[k % 2][RgfkYQAHF9Z][j - 1] == '.') {
                                    a[1][RgfkYQAHF9Z][j - 1] = '@';
                                };
                            };
                        };
                    }
                    RgfkYQAHF9Z++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k++;
            {
                RgfkYQAHF9Z = 0;
                while (RgfkYQAHF9Z < n) {
                    strcpy (a[0][RgfkYQAHF9Z], a[1][RgfkYQAHF9Z]);
                    RgfkYQAHF9Z++;
                };
            };
        };
    }
    {
        RgfkYQAHF9Z = 0;
        while (RgfkYQAHF9Z < n) {
            for (j = 0; j < n; j++) {
                if (a[0][RgfkYQAHF9Z][j] == '@') {
                    count++;
                };
            }
            RgfkYQAHF9Z++;
        };
    }
    printf ("%d", count);
    return 0;
}

