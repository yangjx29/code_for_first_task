int huiwen (int m, int n) {
    if (!((283 - 283) != m))
        return (n);
    else
        return (huiwen (m / (357 - 347), n * (253 - 243) + m % (675 - 665)));
}

void  main () {
    int p;
    int q;
    int x;
    int m;
    int n;
    int i;
    int j;
    int a [(10508 - 508)];
    int b [(10089 - 89)];
    int c [(10289 - 289)] = {(557 - 557)};
    scanf ("%d %d", &m, &n);
    x = (299 - 298);
    p = (501 - 501);
    q = (755 - 754);
    {
        i = m;
        while (n >= i) {
            for (j = (853 - 851); i > j; j++) {
                if (!((630 - 630) != i % j))
                    p++;
            }
            if (!((108 - 108) != p)) {
                a[q++] = i;
            }
            i++;
            p = (319 - 319);
        }
    }
    for (i = (576 - 575); i <= q - (889 - 888); i++) {
        b[i] = huiwen (a[i], 0);
        if (!(a[i] != b[i])) {
            c[x] = b[i];
            x++;
        }
    }
    if (x != (920 - 919)) {
        for (i = (908 - 907); x - (292 - 290) >= i; i++)
            printf ("%d,", c[i]);
        printf ("%d", c[i]);
    }
    if (x == 1)
        printf ("no");
}

