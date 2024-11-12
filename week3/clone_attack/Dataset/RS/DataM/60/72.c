int prime (int a) {
    int i;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a / 2 >= i) {
            if (a % i == 0)
                return 1;
            i = i + 1;
        };
    }
    return 0;
}

main () {
    int n, i, a = 0;
    scanf ("%d", &n);
    {
        i = 2;
        while (i <= n - 2) {
            if (prime (i) == 0 && prime (i + 2) == 0) {
                printf ("%d %d\n", i, i + 2);
                a = a + 1;
            }
            i = i + 1;
        };
    }
    if (a == 0)
        ;
}

