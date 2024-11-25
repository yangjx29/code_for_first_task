void  main () {
    int m, a, f4k5LG3, c, fgLz3pZsO;
    scanf ("%d", &m);
    for (a = 3; a < m; a = a + 1) {
        for (c = 2; c <= sqrt (a); c = c + 1)
            if (a % c == 0)
                break;
        if (sqrt (a) < c) {
            f4k5LG3 = m - a;
            for (fgLz3pZsO = 2; fgLz3pZsO <= sqrt (f4k5LG3); fgLz3pZsO = fgLz3pZsO + 1) {
                if (f4k5LG3 % fgLz3pZsO == 0)
                    break;
            }
            if (fgLz3pZsO > sqrt (f4k5LG3) && a <= f4k5LG3)
                printf ("%d %d\n", a, f4k5LG3);
        };
    };
}

