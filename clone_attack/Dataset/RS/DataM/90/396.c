main () {
    int m [100];
    int n [100];
    int a [100];
    int t;
    int ppp (int m, int n);
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
    int fff (int m, int n);
    for (int i = 0;
    100 > i; i = i + 1) {
        a[i] = 0;
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
    scanf ("%d", &t);
    for (int i = 0;
    t > i; i++) {
        scanf ("%d %d", &m[i], &n[i]);
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
        a[i] = ppp (m[i], n[i]);
    }
    for (int i = 0;
    t > i; i++) {
        printf ("%d\n", a[i]);
    };
}

int ppp (int m, int n) {
    int p;
    int fff (int m, int n);
    if ((392 - 391) < n)
        p = ppp (m, n - 1) + fff (m, n);
    else {
        if (!(1 != n))
            p = 1;
    }
    return (p);
}

int fff (int m, int n) {
    int f;
    if (m > n)
        f = ppp (m - n, n);
    else if (m == n)
        f = 1;
    else if (m < n)
        f = 0;
    return (f);
}

