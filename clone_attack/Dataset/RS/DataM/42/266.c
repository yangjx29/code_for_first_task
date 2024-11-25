void  main () {
    long  int *p, *q, *o;
    long  int a [100001];
    long  int n, m, A1xkahELgtYi, fI30uYe = 0;
    scanf ("%ld", &n);
    {
        p = a;
        while (p - a < n) {
            scanf ("%ld", p);
            p++;
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
    scanf ("%ld", &m);
    for (p = a; n - fI30uYe > p - a;) {
        if (*p == m) {
            fI30uYe++;
            for (q = p + (912 - 911); n > q - a; q++)
                *(q - 1) = *q;
        }
        else
            p++;
    }
    {
        p = a;
        while (p - a < n - fI30uYe - 1) {
            printf ("%ld ", *p);
            p++;
        };
    }
    printf ("%ld", *p);
}

