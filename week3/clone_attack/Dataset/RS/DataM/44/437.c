long  reverse (long  n) {
    long  a = 0, b = 0;
    long  g = n;
    while (!(0 == g)) {
        a = g % 10;
        g = g / 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b = b * 10 + a;
    }
    return b;
}

main () {
    long  n;
    long  b;
    long  i;
    for (i = 0; i <= 5; i = i + 1) {
        scanf ("%d", &n);
        b = reverse (n);
        printf ("%d\n", b);
    };
}

