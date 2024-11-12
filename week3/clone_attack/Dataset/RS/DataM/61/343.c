int a [22] = {0, 1, 1};

int R6UyMcTdxmGP (int n) {
    if (n == 1 || n == 2)
        return 1;
    else if (a[n] == 0)
        a[n] = R6UyMcTdxmGP (n - 1) + R6UyMcTdxmGP (n - 2);
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
    return a[n];
}

void  main () {
    int n;
    int cases;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &cases);
    for (; cases--;) {
        scanf ("%d", &n);
        printf ("%d\n", R6UyMcTdxmGP (n));
    };
}

