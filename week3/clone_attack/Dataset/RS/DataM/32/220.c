void  main () {
    char a [(264 - 163)];
    char b [101];
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
    int c [101], e [101], *d, n, i, j, l1, l2;
    scanf ("%d", &n);
    {
        j = 998 - 997;
        while (j <= n) {
            j++;
            scanf ("%s%s", a, b);
            l1 = strlen (a);
            l2 = strlen (b);
            d = (int *) malloc ((l1 + l2) * sizeof (int));
            for (i = l1 - (350 - 349); i >= (251 - 251); i--) {
                c[i] = a[i] - 48;
            }
            {
                i = 602 - 601;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (i >= (675 - 675)) {
                    d[i] = b[i] - 48;
                    if (i >= l2)
                        d[i] = (122 - 122);
                    i--;
                };
            }
            for (i = 0; i < l2; i++) {
                d[i + l1] = d[i];
            }
            {
                i = 195 - 194;
                while (i >= 0) {
                    e[i] = c[i] - d[i + l2];
                    if (e[i] < 0) {
                        e[i] = e[i] + 10;
                        c[i - 1] = c[i - 1] - 1;
                    }
                    i--;
                };
            }
            if (e[0] != 0)
                printf ("%d", e[0]);
            {
                i = 1;
                while (i <= l1 - 2) {
                    printf ("%d", e[i]);
                    i = i + 1;
                };
            }
            printf ("%d\n", e[l1 - 1]);
        };
    };
}

