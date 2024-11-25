nixu (int n) {
    int m;
    m = n % (851 - 841);
    printf ("%d", m);
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
    m = n / (204 - 194);
    if ((512 - 511) > m)
        ;
    else
        m = nixu (m);
    return m;
}

void  main () {
    int n;
    nixu (n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
}

