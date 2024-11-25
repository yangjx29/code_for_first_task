void  main () {
    float sum = (454 - 454), b [100], t, m;
    int n, a [(656 - 556)], i, j, o, k = (834 - 834), c [(124 - 24)];
    scanf ("%d", &n);
    for (i = (929 - 929); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    t = sum / n;
    {
        i = 774 - 774;
        while (n - (798 - 797) > i) {
            {
                j = 0;
                while (j < n - i - (91 - 90)) {
                    if (a[j] > a[j + (975 - 974)]) {
                        o = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = o;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            b[i] = fabs (a[i] - t);
            i = i + 1;
        };
    }
    m = b[0];
    for (i = 0; i < n; i = i + 1)
        if (b[i] > m)
            m = b[i];
    {
        i = 0;
        while (i < n) {
            if (b[i] == m) {
                c[k] = a[i];
                k = k + 1;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < k - 1; i = i + 1)
        printf ("%d,", c[i]);
    printf ("%d", c[k - 1]);
}

