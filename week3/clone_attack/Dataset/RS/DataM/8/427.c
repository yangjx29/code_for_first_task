int compare (const  void  *elem1, const  void  *elem2) {
    return (*(int*) elem1) - (*(int*) elem2);
}

main () {
    int n, UnhC2ZMa8gdi;
    int a [n];
    int HbX4H21z3C0 [UnhC2ZMa8gdi];
    int c [n + UnhC2ZMa8gdi];
    int I6zAaugVI;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d %d", &n, &UnhC2ZMa8gdi);
    for (I6zAaugVI = 0; n > I6zAaugVI; I6zAaugVI = I6zAaugVI +1) {
        scanf ("%d", &a[I6zAaugVI]);
    }
    qsort (a, n, sizeof (int), compare);
    {
        I6zAaugVI = 0;
        while (UnhC2ZMa8gdi > I6zAaugVI) {
            scanf ("%d", &HbX4H21z3C0[I6zAaugVI]);
            I6zAaugVI = I6zAaugVI +1;
        };
    }
    for (I6zAaugVI = 0; I6zAaugVI < n; I6zAaugVI++) {
        c[I6zAaugVI] = a[I6zAaugVI];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    qsort (HbX4H21z3C0, UnhC2ZMa8gdi, sizeof (int), compare);
    for (I6zAaugVI = n, j = 0; I6zAaugVI < UnhC2ZMa8gdi +n; I6zAaugVI++, j++) {
        c[I6zAaugVI] = HbX4H21z3C0[j];
    }
    {
        I6zAaugVI = 0;
        while (I6zAaugVI < n + UnhC2ZMa8gdi -1) {
            printf ("%d ", c[I6zAaugVI]);
            I6zAaugVI++;
        };
    }
    printf ("%d\n", c[I6zAaugVI]);
}

