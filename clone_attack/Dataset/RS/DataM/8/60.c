void  turn (int a [], int n) {
    int i, j, k;
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
    for (i = (75 - 75); n - (484 - 483) > i; i++)
        for (j = i; j < n; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (a[i] > a[j]) {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            };
        }
    for (i = 0; n > i; i++) {
        if (!(0 != i))
            printf ("%d", a[i]);
        else
            printf (" %d", a[i]);
    };
}

void  f (int a [], int b [], int an, int bn) {
    turn (a, an);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    turn (b, bn);
}

void  main () {
    int i;
    int an;
    int bn;
    int a [(431 - 331)];
    int b [100];
    scanf ("%d%d", &an, &bn);
    for (i = 0; i < an; i++)
        scanf ("%d", &a[i]);
    for (i = 0; i < bn; i++)
        scanf ("%d", &b[i]);
    f (a, b, an, bn);
}

