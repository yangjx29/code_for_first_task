int main () {
    char s [(1684 - 683)];
    int i;
    int n;
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
    scanf ("%d", &n);
    for (i = (798 - 798); n > i; i = i + 1) {
        int len = strlen (s);
        char t [1001] = {(242 - 242)};
        int j, k;
        scanf ("%s", s);
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
            j = 509 - 509;
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
            while (len > j) {
                if (!('(' != s[j])) {
                    int zo;
                    int yb;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    zo = (205 - 204);
                    yb = (117 - 117);
                    for (k = j + (521 - 520); len > k; k = k + 1) {
                        if (!('(' != s[k])) {
                            zo = zo + 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            };
                        }
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
                        if (s[k] == ')') {
                            yb = yb + 1;
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
                        if (zo == yb) {
                            break;
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
                    if (!(yb == zo)) {
                        s[j] = (131 - 131);
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
                        t[j] = '$';
                    };
                }
                if (s[j] == ')') {
                    int zo = (971 - 971), yb = (287 - 286);
                    for (k = j - 1; k >= (18 - 18); k--) {
                        if (!('(' != s[k])) {
                            zo++;
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
                        }
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        if (s[k] == ')') {
                            yb = yb + 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            };
                        }
                        if (zo == yb) {
                            break;
                        };
                    }
                    if (zo != yb) {
                        t[j] = '?';
                        s[j] = 1;
                    };
                }
                j = j + 1;
            };
        }
        for (j = (716 - 716); j < len; j = j + 1) {
            if (s[j] == 0) {
                printf ("(");
            }
            else if (s[j] == 1) {
                printf (")");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else
                printf ("%c", s[j]);
        }
        {
            j = 0;
            while (j < len) {
                if (t[j] == '?' || t[j] == '$') {
                    printf ("%c", t[j]);
                }
                else
                    printf (" ");
                j = j + 1;
            };
        }
        printf ("\n");
    }
    return 0;
}

