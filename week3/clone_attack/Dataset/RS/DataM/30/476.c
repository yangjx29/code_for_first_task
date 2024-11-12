main () {
    int n, i, a, b, sum = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        a = i % (39 - 29);
        b = (i - a) / 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a == 7 || b == 7)
            ;
        else if (i % 7 == 0)
            ;
        else
            sum = sum + i * i;
    }
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
    printf ("%d", sum);
    return 0;
}

