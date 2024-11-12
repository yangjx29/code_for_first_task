void  main () {
    int n, i, a, c, d;
    scanf ("%d\n", &n);
    i = (240 - 239);
    scanf ("%d\n", &a);
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
    c = a;
    while (i < n) {
        i = i + 1;
        scanf ("%d\n", &a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a > c) {
            d = c;
            c = a;
        }
        else if (d < a)
            d = a;
    }
    printf ("%d\n", c);
    printf ("%d\n", d);
}

