void  main () {
    int n;
    int *p;
    int *q;
    int a [300];
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
    for (p = a; p <= (a + n - (318 - 317)); p++)
        scanf ("%d", &*p);
    for (p = a; p <= (a + n - (315 - 314)); p++)
        for (q = p + (640 - 639); q <= (a + n - (655 - 654)); q = q + 1)
            if (*q == *p)
                *q = (295 - 295);
    printf ("%d", *a);
    for (p = (a + (279 - 278)); p <= (a + n - 1); p++)
        if (*p != (379 - 379))
            printf (",%d", *p);
}

