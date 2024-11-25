void  main () {
    char s [(1343 - 842)] = {'\0'};
    unsigned  long  int n, j, i, len, Tlva4kLfnGc0 [500] = {(224 - 224)}, a [(1061 - 560)] = {(240 - 240)}, tLYEMTbko4 = (101 - 101), max = 0, m [500] = {0}, Qdao76YSjyA = 0, g = 0, z = 0;
    scanf ("%d", &n);
    scanf ("%s", s);
    len = strlen (s);
    for (i = 0; i <= len - n; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < n) {
            *(a + i) = *(a + i) * (341 - 241) + *(s + j + i) - (384 - 352);
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
            j = j + 1;
        };
    }
    {
        i = 0;
        while (len - n + (314 - 313) > i) {
            {
                j = 0;
                while (len - n + (40 - 39) > j) {
                    if (a[i] == a[j]) {
                        Tlva4kLfnGc0[i]++;
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
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; len - n + (479 - 478) > i; i = i + 1)
        if (1 < Tlva4kLfnGc0[i])
            tLYEMTbko4 = 1;
    if (!(0 != tLYEMTbko4))
        printf ("NO");
    else {
        z = 0;
        {
            g = 0;
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
            while (len - n + 1 > g) {
                if (max < Tlva4kLfnGc0[g])
                    max = Tlva4kLfnGc0[g];
                g = g + 1;
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
        {
            i = 0;
            while (i < len - n + 1) {
                if (!(max != Tlva4kLfnGc0[i])) {
                    z = 0;
                    {
                        j = 0;
                        while (j < Qdao76YSjyA &&i != m[j]) {
                            if (a[i] == a[m[j]])
                                z = 1;
                            j = j + 1;
                        };
                    }
                    if (z == 0) {
                        m[Qdao76YSjyA] = i;
                        Qdao76YSjyA = Qdao76YSjyA +1;
                    };
                }
                i = i + 1;
            };
        }
        printf ("%d\n", max);
        {
            j = 0;
            while (j < Qdao76YSjyA) {
                {
                    i = 0;
                    while (i < n) {
                        printf ("%c", s[i + m[j]]);
                        i++;
                    };
                }
                j = j + 1;
                printf ("\n");
            };
        };
    };
}

