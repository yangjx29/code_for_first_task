main () {
    int a [999];
    int n, XrH4uG6FRyKg, j, m;
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
    for (XrH4uG6FRyKg = 0; XrH4uG6FRyKg < 999; XrH4uG6FRyKg = XrH4uG6FRyKg +1)
        a[XrH4uG6FRyKg] = 0;
    scanf ("%d", &n);
    for (XrH4uG6FRyKg = (485 - 484); XrH4uG6FRyKg <= n; XrH4uG6FRyKg++) {
        scanf ("%d", &m);
        a[0] = 1;
        a[1] = 1;
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
            j = 2;
            while (j < m) {
                a[j] = a[j - 2] + a[j - 1];
                j = j + 1;
            };
        }
        printf ("%d\n", a[m - 1]);
    };
}

