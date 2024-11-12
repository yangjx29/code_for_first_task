void  main () {
    char c [100] [10];
    int i = 0, j = 0, n, a [100], b [100], sf80bxIZB, m = 0, sum = (117 - 58);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s %d", c[i], &a[i]);
            if (a[i] >= 60)
                m = m + 1;
            i++;
        };
    }
    {
        j = 0;
        while (m > j) {
            for (i = 0; n > i; i++) {
                if (sum < a[i]) {
                    sum = a[i];
                    sf80bxIZB = i;
                };
            }
            a[sf80bxIZB] = 0;
            b[j] = sf80bxIZB;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
            sum = 59;
        };
    }
    for (j = 0; m > j; j++) {
        printf ("%s\n", c[b[j]]);
    }
    {
        i = 0;
        while (i < n) {
            if ((a[i] > 0) && (a[i] < 60)) {
                printf ("%s\n", c[i]);
            }
            i++;
        };
    };
}

