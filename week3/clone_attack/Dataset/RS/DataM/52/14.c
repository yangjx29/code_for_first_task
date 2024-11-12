void  *malloc (unsigned  int size);

void  main () {
    int i;
    int m;
    int n;
    int *p;
    int *a;
    i = 0;
    scanf ("%d%d", &n, &m);
    a = (int *) malloc (200 * sizeof (int));
    for (; n > i;)
        scanf ("%d", a + (i = i + 1));
    p = a + n, i = 0;
    while (i < n - m)
        *(p + i++) = *(a + i);
    p = a + n - m;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            if (i > 0)
                printf (" ");
            printf ("%d", *(p + i));
            i = i + 1;
        };
    };
}

