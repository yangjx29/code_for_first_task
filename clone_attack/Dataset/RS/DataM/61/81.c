main () {
    int n, t, i, Y;
    int s [n];
    scanf ("%d", &n);
    for (i = 0; i <= (n - 1); i++) {
        scanf ("%d", &t);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s[i] = t;
    }
    for (i = 0; i <= (n - 1); i++) {
        int a = 1, b = 1, c = 1;
        for (Y = 3; Y <= s[i]; Y++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf ("%d\n", c);
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
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

