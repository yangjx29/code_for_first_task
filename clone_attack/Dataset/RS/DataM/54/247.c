void  main () {
    int a;
    int b;
    int n;
    int k;
    int i;
    int j;
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
    int uwN5oHgudy;
    int p;
    long  c;
    scanf ("%d%d", &n, &k);
    for (c = 0; c < 100000000000000; c++) {
        uwN5oHgudy = c;
        p = 0;
        for (i = 0; i < n; i = i + 1) {
            if (!(0 != (uwN5oHgudy - k) % n) && (uwN5oHgudy - k != 0)) {
                p = p + 1;
                uwN5oHgudy = (uwN5oHgudy - k) / n * (n - 1);
            };
        }
        if (p == n) {
            printf ("%ld\n", c);
            break;
        };
    };
}

