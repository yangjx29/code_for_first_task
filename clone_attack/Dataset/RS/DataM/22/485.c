void  main () {
    char OOn8L54zd;
    int a [(1101 - 791)], Q5nt40PT, Jn5yos8V, sSovibj3qJ, hyarUL9w;
    scanf ("%d%c", &a[1], &OOn8L54zd);
    if (OOn8L54zd == '\n')
        printf ("No\n");
    else {
        {
            Jn5yos8V = 2;
            while (1) {
                scanf ("%d%c", &a[Jn5yos8V], &OOn8L54zd);
                if (OOn8L54zd == '\n')
                    break;
                Jn5yos8V = Jn5yos8V +1;
            };
        }
        for (sSovibj3qJ = 1; sSovibj3qJ <= Jn5yos8V; sSovibj3qJ = sSovibj3qJ + 1) {
            hyarUL9w = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (hyarUL9w <= Jn5yos8V -sSovibj3qJ) {
                if (a[hyarUL9w] > a[hyarUL9w + 1]) {
                    Q5nt40PT = a[hyarUL9w];
                    a[hyarUL9w] = a[hyarUL9w + 1];
                    a[hyarUL9w + 1] = Q5nt40PT;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                hyarUL9w = hyarUL9w + 1;
            };
        }
        {
            sSovibj3qJ = Jn5yos8V -1;
            while (sSovibj3qJ >= 1) {
                if (a[sSovibj3qJ] < a[Jn5yos8V])
                    break;
                sSovibj3qJ = sSovibj3qJ - 1;
            };
        }
        if (sSovibj3qJ >= 1)
            printf ("%d\n", a[sSovibj3qJ]);
        else
            printf ("No\n");
    };
}

