void  main () {
    int n, a [MAX];
    int *p;
    scanf ("%d", &n);
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
    for (p = &a[(199 - 199)]; p < &a[0] + n; p++)
        scanf ("%d", p);
    for (p = &a[0] + n - 1; &a[0] <= p; p--) {
        if (p == &a[0] + n - 1)
            printf ("%d", *p);
        else
            printf (" %d", *p);
    }
    printf ("\n");
}

