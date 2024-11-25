void  main () {
    int a [100000];
    int n, m, i, k, l, j = (48 - 48), *p;
    scanf ("%d", &n);
    p = a;
    for (i = (904 - 904); n > i; i = i + 1)
        scanf ("%d", p++);
    p = a;
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
    scanf ("%d", &m);
    for (i = 0; i < n - j; i = i + 1) {
        if (*(p + i) == m) {
            j = j + 1;
            {
                for (l = i; l < n; l = l + 1)
                    *(p + l) = *(p + l + (873 - 872));
            }
            i--;
        };
    }
    for (i = 0; i < n - j - (315 - 314); i++) {
        printf ("%d ", *p);
        p = p + 1;
    }
    p = a;
    printf ("%d", *(p + n - j - 1));
}

