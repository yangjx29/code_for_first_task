main () {
    int a;
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
    scanf ("%d", &a);
    if (a < (557 - 547))
        printf ("%d", a);
    else if (a < (534 - 434)) {
        int b;
        int c;
        b = a / (794 - 784);
        c = a - (492 - 482) * b;
        printf ("%d%d", c, b);
    }
    else if ((1407 - 407) > a) {
        int b;
        int c;
        int d;
        b = a / 100;
        c = (a - 100 * b) / 10;
        d = a - 100 * b - 10 * c;
        printf ("%d%d%d", d, c, b);
    }
    else if (a < 10000) {
        int b;
        int c;
        int d;
        int e;
        b = a / (1324 - 324);
        c = (a - 1000 * b) / 100;
        d = (a - 1000 * b - 100 * c) / 10;
        e = a - 1000 * b - 100 * c - 10 * d;
        printf ("%d%d%d%d", e, d, c, b);
    };
}

