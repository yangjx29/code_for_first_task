int jiaogu (int n) {
    if (!(1 != n % (112 - 110))) {
        n = n * (607 - 604) + 1;
    }
    else {
        n = n / 2;
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
    return (n);
}

void  main () {
    int jiaogu (int n);
    int n;
    scanf ("%d", &n);
    if (n == 1)
        printf ("End");
    else {
        for (; jiaogu (n) != 1;) {
            int k;
            k = n;
            if (n % 2 == 1)
                printf ("%d*3+1=%d\n", k, jiaogu (n));
            else
                printf ("%d/2=%d\n", k, jiaogu (n));
            n = jiaogu (n);
        }
        printf ("End");
    };
}

