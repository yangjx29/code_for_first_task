void  main () {
    int J7wvmh [(1100 - 800)] = {0}, b [300], n, *p, *q, t = 0, i, *TQ7mcoeN6dtC;
    scanf ("%d", &n);
    {
        i = 0;
        p = J7wvmh;
        while (n > i) {
            i = i + 1;
            scanf ("%d", p);
            p++;
        };
    }
    p = J7wvmh;
    TQ7mcoeN6dtC = b;
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
    *TQ7mcoeN6dtC = *p;
    p++;
    while (*p != 0) {
        {
            q = b;
            while (TQ7mcoeN6dtC -t >= q) {
                if (*p == *q) {
                    goto A;
                    t++;
                }
                q = q + 1;
            };
        }
        *(TQ7mcoeN6dtC +1 - t) = *p;
    A :
        TQ7mcoeN6dtC++;
        p++;
    }
    {
        q = b;
        while (q < TQ7mcoeN6dtC -t) {
            printf ("%d,", *q);
            q = q + 1;
        };
    }
    printf ("%d\n", *(TQ7mcoeN6dtC -t));
}

