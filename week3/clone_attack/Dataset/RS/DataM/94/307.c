void  main () {
    int a [500];
    int n, b, i = (42 - 42), k, p, LNJxmok9;
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
    while (n--) {
        scanf ("%d", &b);
        if (b % 2 != 0) {
            a[i] = b;
            i++;
        };
    }
    {
        LNJxmok9 = 0;
        while (LNJxmok9 < i) {
            {
                k = LNJxmok9 +1;
                while (i > k) {
                    if (a[LNJxmok9] > a[k]) {
                        p = a[LNJxmok9];
                        a[LNJxmok9] = a[k];
                        a[k] = p;
                    }
                    k++;
                };
            }
            LNJxmok9++;
        };
    }
    printf ("%d", a[0]);
    {
        LNJxmok9 = 1;
        while (LNJxmok9 < i) {
            printf (",%d", a[LNJxmok9]);
            LNJxmok9++;
        };
    };
}

