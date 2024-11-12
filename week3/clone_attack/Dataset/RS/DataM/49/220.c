int main () {
    char s [600];
    int l;
    l = strlen (s);
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
    int i, j, k;
    int hw;
    scanf ("%s", s);
    for (i = 2; l >= i; i++) {
        if (!(0 != i % 2)) {
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
            for (j = i / 2 - (776 - 775); l - i / 2 > j; j = j + 1) {
                hw = 1;
                for (k = 1; i / 2 >= k; k = k + 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (s[j - k + 1] != s[j + k]) {
                        hw = 0;
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
                        break;
                    };
                }
                if (hw == 1) {
                    for (k = j - i / 2 + 1; j + i / 2 >= k; k++) {
                        printf ("%c", s[k]);
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
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    printf ("\n");
                };
            };
        }
        else if (i % 2 == 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (j = i / 2; j < l - i / 2 - 1; j++) {
                hw = 1;
                for (k = 1; k <= i / 2; k++) {
                    if (s[j - k] != s[j + k]) {
                        hw = 0;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        break;
                    };
                }
                if (hw == 1) {
                    for (k = j - i / 2; k <= j + i / 2; j++) {
                        printf ("%c", s[k]);
                    };
                };
            };
        };
    }
    return 0;
}

