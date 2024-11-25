void  main () {
    float WCgUl5dPS, c [11], d [11], P = (619 - 619), bIYniv = (784 - 784);
    int n, a [11], b [11], i;
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
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (90 <= b[i])
                c[i] = 4.0;
            else if (b[i] >= 85)
                c[i] = 3.7;
            else if (b[i] >= 82)
                c[i] = 3.3;
            else if (78 <= b[i])
                c[i] = 3.0;
            else if (b[i] >= 75)
                c[i] = 2.7;
            else if (b[i] >= 72)
                c[i] = 2.3;
            else if (b[i] >= (786 - 718))
                c[i] = 2.0;
            else if (b[i] >= (973 - 909))
                c[i] = (913.5 - 912.0);
            else if (b[i] >= 60)
                c[i] = 1.0;
            else
                c[i] = 0;
            i = i + 1;
        };
    }
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
    {
        i = 0;
        while (i < n) {
            d[i] = a[i] * c[i];
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++)
        P = P +d[i];
    {
        i = 0;
        while (i < n) {
            bIYniv = bIYniv + a[i];
            i = i + 1;
        };
    }
    WCgUl5dPS = P / bIYniv;
    printf ("%.2f\n", WCgUl5dPS);
}

