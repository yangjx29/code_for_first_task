void  main () {
    int n;
    int i;
    int d;
    int k;
    int a;
    int b [21];
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
    int c [21];
    b[(227 - 226)] = (177 - 176);
    b[2] = 1;
    scanf ("%d\n", &n);
    for (i = 1; i <= n; i++)
        scanf ("%d\n", &c[i]);
    for (i = 1; i <= n; i++) {
        d = c[i];
        for (k = 3; k <= d; k++)
            b[k] = b[k - 2] + b[k - 1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", b[d]);
    };
}

