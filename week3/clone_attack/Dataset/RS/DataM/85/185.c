void  main () {
    char c [20] [50];
    int i;
    int j;
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
    int E3Kv6iz;
    scanf ("%d", &n);
    for (i = 0; n - 1 >= i; i++) {
        scanf ("%s", c[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
        while (n - 1 >= i) {
            if (!(('a' <= c[i][0] && 'z' >= c[i][0]) || ('A' <= c[i][0] && 'Z' >= c[i][0]) || c[i][0] == '_')) {
                E3Kv6iz = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                j = 1;
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
                while (!('\0' == c[i][j])) {
                    if (!((c[i][j] >= 'a' && c[i][j] <= 'z') || (c[i][j] >= 'A' && c[i][j] <= 'Z') || (c[i][j] >= '0' && c[i][j] <= '9') || c[i][j] == '_')) {
                        E3Kv6iz = 0;
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
                    j++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    E3Kv6iz = 1;
                };
            }
            i++;
            if (E3Kv6iz == 1) {
                printf ("yes\n");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            if (E3Kv6iz == 0) {
                printf ("no\n");
            };
        };
    };
}

