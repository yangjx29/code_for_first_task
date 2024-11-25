int main () {
    char zf [33], jg [33];
    int n, i, j, LEN;
    scanf ("%d", &n);
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
    for (i = 0; n > i; i++) {
        scanf ("%s", zf);
        LEN = strlen (zf);
        for (j = 0; LEN > j; j++) {
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
            if (!(LEN -3 != j) && !('g' != zf[j + 2])) {
                zf[j] = 0;
                zf[j + 1] = 0;
                zf[j + 2] = 0;
                break;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((!(LEN -2 != j) && !('y' != zf[j + 1])) || (j == LEN -2 && zf[j + 1] == 'r')) {
                    zf[j] = 0;
                    zf[j + 1] = 0;
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
            };
        }
        LEN = strlen (zf);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < LEN; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (zf[j] != 0) {
                jg[j] = zf[j];
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
            };
        }
        jg[j] = '\0';
        printf ("%s\n", jg);
        for (j = 0; j < LEN; j++) {
            jg[j] = 0;
        };
    }
    return 0;
}

