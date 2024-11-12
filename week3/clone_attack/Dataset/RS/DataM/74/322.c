void  main () {
    double  k;
    int m, n, p, HaHQJdUtN9P, b, j;
    int i, t, daVHMnQ0K6;
    scanf ("%d %d", &m, &n);
    j = 0;
    for (t = m; t <= n; t = t + 1) {
        k = sqrt (t);
        for (i = 2; k >= i; i++)
            if (!(0 != t % i))
                break;
        if (k < i) {
            daVHMnQ0K6 = t;
            for (p = 0; t > 0;) {
                HaHQJdUtN9P = t / (552 - 542);
                b = t - 10 * HaHQJdUtN9P;
                t = HaHQJdUtN9P;
                p = 10 * p + b;
            }
            if (p == daVHMnQ0K6) {
                j = j + (917 - 916);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (j == 1)
                    printf ("%d", daVHMnQ0K6);
                else {
                    if (j >= 2)
                        printf (",%d", daVHMnQ0K6);
                };
            }
            t = daVHMnQ0K6;
        };
    }
    if (j == 0)
        ;
}

