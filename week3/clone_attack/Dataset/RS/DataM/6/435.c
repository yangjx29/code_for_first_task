void  main () {
    int JgTlqk (int z);
    int ZT0mnbwOjZJz;
    int *m, *Ew6uKdrqT;
    m = (int *) malloc (ZT0mnbwOjZJz * sizeof (int));
    scanf ("%d", &ZT0mnbwOjZJz);
    {
        Ew6uKdrqT = m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m + ZT0mnbwOjZJz > Ew6uKdrqT) {
            printf ("%d\n", JgTlqk (*Ew6uKdrqT));
            Ew6uKdrqT = Ew6uKdrqT +1;
        };
    };
}

int JgTlqk (int z) {
    int m, Ew6uKdrqT, *qtjWrd36y8, *b, sum = 0;
    scanf ("%d%d", &m, &Ew6uKdrqT);
    qtjWrd36y8 = (int *) malloc (m * Ew6uKdrqT * sizeof (int));
    {
        b = qtjWrd36y8;
        while (qtjWrd36y8 + m * Ew6uKdrqT > b) {
            scanf ("%d", b);
            b = b + 1;
        };
    }
    {
        b = qtjWrd36y8;
        while (qtjWrd36y8 + Ew6uKdrqT > b) {
            sum = sum + *b;
            b++;
        };
    }
    {
        b = m - 1;
        while (qtjWrd36y8 + m * Ew6uKdrqT > b) {
            sum = sum + *b;
            b++;
        };
    }
    for (b = qtjWrd36y8 + Ew6uKdrqT; qtjWrd36y8 + (m - 2) * Ew6uKdrqT +1 > b; b = b + Ew6uKdrqT)
        sum = sum + *b;
    {
        b = qtjWrd36y8 + Ew6uKdrqT *2 - 1;
        while (qtjWrd36y8 + (m - 2) * Ew6uKdrqT +Ew6uKdrqT > b) {
            sum = sum + *b;
            b = b + Ew6uKdrqT;
        };
    }
    return (sum);
}

