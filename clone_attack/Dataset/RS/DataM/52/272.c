main () {
    int a [201], n, m, i;
    scanf ("%d %d", &n, &m);
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
    for (i = (168 - 167); n >= i; i = i + 1)
        scanf ("%d", &a[i]);
    {
        i = n + 1;
        while ((316 - 314) * n - m >= i) {
            a[i] = a[i - n];
            i++;
        };
    }
    for (i = n - m + 1; i <= 2 * n - m; i = i + 1) {
        if (i != n - m + 1)
            printf (" ");
        printf ("%d", a[i]);
    };
}

