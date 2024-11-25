main () {
    int a [10000], b [10000];
    int i, n, bmz9cb, y, t = 0;
    scanf ("%d", &n);
    while (scanf ("%d %d", &bmz9cb, &y) == (488 - 486)) {
        if (bmz9cb == 0 && !(0 != y))
            break;
        else
            a[bmz9cb]++;
        b[y]++;
    }
    getchar ();
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
    for (i = 0; n > i; i++) {
        if (a[i] == 0 && b[i] == n - 1)
            printf ("%d", i);
        t++;
    }
    if (t == 0)
        ;
    getchar ();
    getchar ();
    return 0;
}

