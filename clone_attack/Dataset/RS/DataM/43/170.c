void  main () {
    int m, q, r, i, j, a, b;
    scanf ("%d", &m);
    {
        q = 3;
        while (q <= m / 2) {
            r = m - q;
            a = 0;
            for (i = 2; sqrt (q) >= i; i = i + 1)
                if (q % i == 0)
                    a = 1;
            b = 0;
            for (j = 2; j <= sqrt (r); j = j + 1)
                if (r % j == 0)
                    b = 1;
            if (a == 0 && b == 0)
                printf ("%d %d\n", q, r);
            q = q + 1;
        };
    };
}

