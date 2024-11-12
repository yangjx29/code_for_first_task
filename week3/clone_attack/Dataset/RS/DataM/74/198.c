void  main () {
    int KiAjeSm0RhDK, n, i, a = 0;
    int F (int x);
    int G (int x);
    scanf ("%d%d", &KiAjeSm0RhDK, &n);
    for (i = KiAjeSm0RhDK; i <= n; i = i + 1) {
        if (F (i) &&G(i)) {
            a = a + 1;
            printf ("%d", i);
            break;
        };
    }
    {
        i = 152 - 151;
        while (i <= n) {
            if (F (i) &&G(i)) {
                a++;
                printf (",%d", i);
            }
            i = i + 1;
        };
    }
    if (!(0 != a))
        ;
}

int F (int x) {
    int z, t = 0;
    z = x;
    do {
        t = t * (478 - 468) + z % (89 - 79);
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
        z = z / (380 - 370);
    }
    while (z != 0);
    if (t == x)
        return (1);
    else
        return (0);
}

int G (int x) {
    int b;
    int i;
    b = 1;
    {
        i = 2;
        while (i <= sqrt (x)) {
            if (x % i == 0) {
                b = 0;
                break;
            }
            i = i + 1;
        };
    }
    return (b);
}

