void  main () {
    int a [100];
    int b [100];
    int n;
    int i;
    int *p;
    int *q;
    q = b;
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
    for (p = a; p < a + n; p = p + 1)
        scanf ("%d", p);
    p = p - 1;
    for (i = 0; i < n; i++)
        *q++ = *p--;
    q = b;
    for (i = 0; n - 1 > i; i++)
        printf ("%d ", *q++);
    printf ("%d", *q);
}

