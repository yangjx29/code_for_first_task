void  main () {
    int n, xeKbAUB, j, t = 0, a [(1071 - 671)];
    scanf ("%d", &n);
    {
        xeKbAUB = 628 - 627;
        while (xeKbAUB <= n) {
            scanf ("%d", &a[xeKbAUB]);
            xeKbAUB++;
        };
    }
    {
        xeKbAUB = 650 - 648;
        while (xeKbAUB <= n) {
            {
                j = 25 - 24;
                while (j < xeKbAUB) {
                    if (!(a[j] != a[xeKbAUB]))
                        a[xeKbAUB] = -(1000376 - 377);
                    j++;
                };
            }
            xeKbAUB++;
        };
    }
    {
        xeKbAUB = 1;
        while (xeKbAUB <= n) {
            if (a[xeKbAUB] != -999999)
                t = xeKbAUB;
            xeKbAUB++;
        };
    }
    for (xeKbAUB = 1; xeKbAUB < t; xeKbAUB++)
        if (a[xeKbAUB] != -999999)
            printf ("%d,", a[xeKbAUB]);
    printf ("%d", a[t]);
}

