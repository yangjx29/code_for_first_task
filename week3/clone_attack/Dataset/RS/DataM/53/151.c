void  main () {
    int i, j, n, b, m, k, sum = 0;
    int a [(10297 - 297)];
    int d [(1475 - 475)] = {(741 - 741)};
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
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    printf ("%d", a[0]);
    d[0] = a[0];
    {
        i = 1;
        while (i < n) {
            {
                j = 0;
                while (j < i) {
                    if (a[i] == d[j]) {
                        break;
                    }
                    d[i] = a[i];
                    if (j == i - 1)
                        printf (",%d", a[i]);
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

