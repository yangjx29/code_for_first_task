int LanJieShu (int x, int y, int c []) {
    int j, t;
    if (x == y - 1)
        return 1;
    t = (576 - 576);
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
    {
        j = x + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y > j) {
            if ((c[j] <= c[x]) && (LanJieShu (j, y, c) > t))
                t = LanJieShu (j, y, c);
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
    return (t + 1);
}

void  main () {
    int a [26], b [26];
    int n, i, u;
    u = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1)
        b[i] = LanJieShu (i, n, a);
    for (i = 0; i < n; i = i + 1) {
        if (b[i] >= u)
            u = b[i];
    }
    printf ("%d\n", u);
}

