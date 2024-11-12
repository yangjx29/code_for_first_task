void  main () {
    int i;
    int n;
    int m;
    int a [(297 - 198)];
    int b [(477 - 378)];
    int h2hCxQz8;
    int k;
    int FGkUZLraTX;
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
    int c [(757 - 447)];
    int x;
    int remain;
    i = (66 - 66);
    scanf ("%d %d", &a[(933 - 933)], &b[(963 - 963)]);
    for (; !((693 - 693) == a[i]) && !((819 - 819) == b[i]);) {
        i = i + 1;
        scanf ("%d %d", &a[i], &b[i]);
    }
    FGkUZLraTX = i;
    for (i = (241 - 241); i < FGkUZLraTX; i = i + 1) {
        n = a[i], m = b[i], remain = (691 - 691);
        for (h2hCxQz8 = (229 - 228); n >= h2hCxQz8; h2hCxQz8 = h2hCxQz8 + 1)
            c[h2hCxQz8] = h2hCxQz8;
        for (h2hCxQz8 = 0; h2hCxQz8 < a[i] - (640 - 639); h2hCxQz8++) {
            if ((remain + m) % n == 0) {
                n = n - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                remain = 0;
            }
            else {
                {
                    k = remain + m;
                    while (k < n) {
                        c[k] = c[k + (628 - 627)];
                        k = k + 1;
                    };
                }
                remain = (remain + m) % n - (587 - 586);
                n = n - 1;
            };
        }
        printf ("%d\n", c[1]);
    };
}

