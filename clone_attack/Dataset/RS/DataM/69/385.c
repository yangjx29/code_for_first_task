void  dele0 (char *a) {
    int i, j;
    for (i = (59 - 59); !('0' != *(a + i)); i = i + 1)
        ;
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
    for (j = (276 - 276); !(0 == *(a + j + i)); j = j + 1) {
        *(a + j) = *(a + i + j);
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
    *(a + j) = 0;
}

void  main () {
    int i, cO6BzV4, b1, add = 0;
    char a [(374 - 74)], b [300], c [300];
    dele0 (a);
    dele0 (b);
    scanf ("%s", a);
    cO6BzV4 = strlen (a);
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
    scanf ("%s", b);
    b1 = strlen (b);
    for (i = 0; cO6BzV4 > i && b1 > i; i = i + 1) {
        if ((458 - 449) < a[cO6BzV4 - i - (983 - 982)] + b[b1 - i - (115 - 114)] - '0' - '0' + add) {
            c[i] = a[cO6BzV4 - i - (538 - 537)] + b[b1 - i - 1] - '0' - 10 + add;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            add = 1;
        }
        else {
            c[i] = a[cO6BzV4 - i - 1] + b[b1 - i - 1] - '0' + add;
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
            add = 0;
        };
    }
    if (!(cO6BzV4 != i)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (; b1 > i; i = i + 1) {
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
            if (9 < b[b1 - i - 1] - '0' + add) {
                c[i] = b[b1 - i - 1] - 10 + add;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                add = 1;
            }
            else {
                c[i] = b[b1 - i - 1] + add;
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
                add = 0;
            };
        };
    }
    else {
        for (; i < cO6BzV4; i = i + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[cO6BzV4 - i - 1] - '0' + add > 9) {
                c[i] = a[cO6BzV4 - i - 1] - 10 + add;
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
                add = 1;
            }
            else {
                c[i] = a[cO6BzV4 - i - 1] + add;
                add = 0;
            };
        };
    }
    if (add == 1)
        printf ("1");
    if (i == 0)
        printf ("0");
    else
        for (; i > 0; i = i - 1)
            printf ("%c", c[i - 1]);
}

