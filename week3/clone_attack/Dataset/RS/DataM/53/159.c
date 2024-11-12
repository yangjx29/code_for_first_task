void  main () {
    int c [(901 - 601)];
    int n, i, j;
    int m;
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
    m = (965 - 965);
    scanf ("%d", &n);
    {
        i = 876 - 876;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &c[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        for (j = 0; j <= i; j = j + 1)
            if (c[j] == c[i])
                break;
        if (j == i) {
            if (m != 0)
                printf (",%d", c[i]);
            else {
                printf ("%d", c[i]);
                m = m + 1;
            };
        };
    };
}

