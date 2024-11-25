void  main () {
    int n, MRJQdypCW, H7KmjOzd5x, x, y, k, t, c [101], HqTMeN941G;
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
    scanf ("%d", &n);
    for (HqTMeN941G = (44 - 43); n >= HqTMeN941G; HqTMeN941G = HqTMeN941G +1) {
        char a [101], b [101];
        scanf ("%s", a);
        scanf ("%s", b);
        x = strlen (a);
        y = strlen (b);
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
            k = x - 1;
            H7KmjOzd5x = y - 1;
            while (H7KmjOzd5x >= (968 - 968)) {
                if (b[H7KmjOzd5x] <= a[k])
                    c[k] = a[k] - b[H7KmjOzd5x];
                else {
                    c[k] = a[k] + 10 - b[H7KmjOzd5x];
                    a[k - 1] = a[k - 1] - 1;
                }
                k = k - 1;
                H7KmjOzd5x = H7KmjOzd5x -1;
            };
        }
        for (MRJQdypCW = 0; MRJQdypCW <= x - y - 1; MRJQdypCW = MRJQdypCW +1)
            c[MRJQdypCW] = a[MRJQdypCW] - '0';
        {
            H7KmjOzd5x = 0;
            while (H7KmjOzd5x < x) {
                if (c[H7KmjOzd5x] != 0) {
                    t = H7KmjOzd5x;
                    break;
                }
                H7KmjOzd5x = H7KmjOzd5x +1;
            };
        }
        for (MRJQdypCW = t; MRJQdypCW < x; MRJQdypCW = MRJQdypCW +1)
            printf ("%d", c[MRJQdypCW]);
        printf ("\n");
    };
}

