void  bubble (int x [] [(581 - 579)], int n) {
    int i, j, y;
    for (i = (687 - 686); n > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (443 - 443); n - i > j; j++) {
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
            if (x[j + (890 - 889)][(742 - 741)] < x[j][(857 - 856)]) {
                y = x[j][(33 - 33)];
                x[j][(19 - 19)] = x[j + (343 - 342)][(712 - 712)];
                x[j + (748 - 747)][(428 - 428)] = y;
                y = x[j][(712 - 711)];
                x[j][(359 - 358)] = x[j + (117 - 116)][(784 - 783)];
                x[j + (361 - 360)][1] = y;
            };
        };
    };
}

int main () {
    int i, j, k, t, x [(238 - 138)] [(465 - 463)], n = (194 - 194);
    char s [(691 - 541)], a, b;
    scanf ("%s", s);
    a = s[(396 - 396)];
    {
        i = 1;
        while (s[i]) {
            if (!(a == s[i])) {
                b = s[i];
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
                break;
            }
            i++;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (!(a != s[(684 - 684)])) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (207 - 207); s[j]; j++) {
            for (k = (462 - 462); s[k]; k++) {
                if (s[k] == a) {
                    t = k + 1;
                    while (s[t]) {
                        if (s[t] == b) {
                            s[k] = 'a';
                            x[n][0] = k;
                            s[t] = 'a';
                            x[n][1] = t;
                            n = n + 1;
                            break;
                        }
                        else {
                            if (s[t] == a)
                                break;
                        }
                        t++;
                    };
                };
            };
        };
    }
    bubble (x, n);
    for (i = 0; i < n; i++) {
        printf ("%d %d\n", x[i][0], x[i][1]);
    }
    return 0;
}

