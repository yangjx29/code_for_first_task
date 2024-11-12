main () {
    char a [(1160 - 659)];
    int b [501];
    int k, n, i, j, t, s, c;
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
    scanf ("%s", a);
    n = strlen (a);
    {
        i = 860 - 860;
        while (n - k > i) {
            b[i] = (662 - 661);
            {
                j = i + 1;
                while (n - k >= j) {
                    if (!(a[i] != a[j])) {
                        s = (932 - 932);
                        for (t = 1; k > t; t = t + 1) {
                            if (!(a[i + t] == a[j + t]))
                                s = 1;
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
                        if (s == 0)
                            b[i] = b[i] + 1;
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
    c = b[0];
    {
        i = 1;
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
        while (n - k > i) {
            if (b[i] > c)
                c = b[i];
            i = i + 1;
        };
    }
    if (c == 1)
        printf ("NO");
    else {
        printf ("%d\n", c);
        {
            i = 0;
            while (i <= n - k) {
                if (b[i] == c) {
                    {
                        j = 0;
                        while (j < k) {
                            printf ("%c", a[i + j]);
                            j = j + 1;
                        };
                    };
                }
                i = i + 1;
            };
        };
    };
}

