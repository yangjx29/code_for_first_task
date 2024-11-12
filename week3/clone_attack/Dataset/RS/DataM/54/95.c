void  main () {
    int t;
    int s;
    int n;
    int k;
    int m;
    int i;
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
    t = 1;
    s = 1;
    scanf ("%d %d", &m, &k);
    for (i = 0; m - 1 >= i; i++)
        t = t * m;
    for (i = 0; i <= m - 2; i++)
        s = s * (m - 1);
    if (s > k) {
        n = t - k * (m - 1);
        printf ("%d", n);
    }
    else {
        n = 2 * t - k * (m - 1);
        printf ("%d", n);
    };
}

