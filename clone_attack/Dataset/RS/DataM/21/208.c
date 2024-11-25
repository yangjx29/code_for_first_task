void  main () {
    float fqhUyGf8bzR1;
    float b [300];
    fqhUyGf8bzR1 = 0;
    int a [(673 - 373)], c [300] = {0}, i, j, n, k = 0, l = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            fqhUyGf8bzR1 = fqhUyGf8bzR1 + a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    fqhUyGf8bzR1 = fqhUyGf8bzR1 / n;
    {
        i = 0;
        while (i < n) {
            if (a[i] > fqhUyGf8bzR1)
                b[i] = a[i] - fqhUyGf8bzR1;
            else
                b[i] = fqhUyGf8bzR1 - a[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (b[j] > b[i])
                        c[i]++;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (c[i] == 0)
                k++;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (c[i] == 0) {
                l++;
                if (l == k)
                    printf ("%d", a[i]);
                else
                    printf ("%d,", a[i]);
            }
            i++;
        };
    };
}

