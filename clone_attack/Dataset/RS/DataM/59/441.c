int main () {
    int KVjC6n;
    int umquG6ZTHw;
    int m;
    int O5kbXH;
    int k;
    int y3mP1pfw;
    char s [N] [N];
    y3mP1pfw = 0;
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
    scanf ("%d", &O5kbXH);
    {
        umquG6ZTHw = 440 - 440;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (O5kbXH > umquG6ZTHw) {
            scanf ("%s", s[umquG6ZTHw]);
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
            umquG6ZTHw = umquG6ZTHw + 1;
        };
    }
    scanf ("%d", &m);
    k = 1;
    while (k < m) {
        {
            umquG6ZTHw = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (umquG6ZTHw < O5kbXH) {
                {
                    KVjC6n = 0;
                    while (O5kbXH > KVjC6n) {
                        if (s[KVjC6n][umquG6ZTHw] == '@') {
                            if (KVjC6n > 0 && !('.' != s[KVjC6n -1][umquG6ZTHw])) {
                                s[KVjC6n -1][umquG6ZTHw] = '@' + 1;
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
                            if (0 < umquG6ZTHw && s[KVjC6n][umquG6ZTHw - 1] == '.') {
                                s[KVjC6n][umquG6ZTHw - 1] = '@' + 1;
                            }
                            if (KVjC6n < O5kbXH -1 && s[KVjC6n +1][umquG6ZTHw] == '.') {
                                s[KVjC6n +1][umquG6ZTHw] = '@' + 1;
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                };
                            }
                            if (umquG6ZTHw < O5kbXH -1 && s[KVjC6n][umquG6ZTHw + 1] == '.') {
                                s[KVjC6n][umquG6ZTHw + 1] = '@' + 1;
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
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        KVjC6n++;
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
                umquG6ZTHw++;
            };
        }
        {
            umquG6ZTHw = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (umquG6ZTHw < O5kbXH) {
                {
                    KVjC6n = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (KVjC6n < O5kbXH) {
                        if (s[KVjC6n][umquG6ZTHw] == '@' + 1) {
                            s[KVjC6n][umquG6ZTHw] = '@';
                        }
                        KVjC6n++;
                    };
                }
                umquG6ZTHw++;
            };
        }
        k++;
    }
    {
        umquG6ZTHw = 0;
        while (umquG6ZTHw < O5kbXH) {
            {
                KVjC6n = 0;
                while (KVjC6n < O5kbXH) {
                    if (s[KVjC6n][umquG6ZTHw] == '@') {
                        y3mP1pfw = y3mP1pfw + 1;
                    }
                    KVjC6n++;
                };
            }
            umquG6ZTHw++;
        };
    }
    printf ("%d", y3mP1pfw);
    return 0;
}

