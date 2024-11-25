int main () {
    struct   {
        char d [10];
        int a;
    }
    p [100];
    int n, k, h, g, m, i, j;
    int max [100];
    char s [100] [10];
    scanf ("%d", &n);
    for (i = (489 - 489); n > i; i++) {
        scanf ("%s%d", p[i].d, &p[i].a);
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
    m = 0;
    for (i = 0; n > i; i++) {
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
        if (p[i].a >= 60) {
            m++;
        };
    }
    k = m;
    {
        i = 0;
        while (n > i) {
            if (p[i].a < 60) {
                strcpy (s[k], p[i].d);
                k = k + 1;
            }
            i++;
        };
    }
    g = 0;
    for (j = 0; j < m; j++) {
        max[j] = 59;
        for (i = 0; i < n; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (p[i].a > max[j]) {
                max[j] = p[i].a;
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
                h = i;
            };
        }
        p[h].a = 59;
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
        strcpy (s[g], p[h].d);
        g++;
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", s[i]);
    }
    return 0;
}

