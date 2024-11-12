void  main () {
    int PHZswX (int aitDydX, int n);
    int k;
    int aitDydX [100];
    int n [100];
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
    int y74tKmR;
    scanf ("%d", &k);
    {
        y74tKmR = 514 - 514;
        while (k > y74tKmR) {
            scanf ("%d%d", &aitDydX[y74tKmR], &n[y74tKmR]);
            y74tKmR++;
        };
    }
    {
        y74tKmR = 0;
        while (y74tKmR < k) {
            printf ("%d\n", PHZswX (aitDydX[y74tKmR], n[y74tKmR]));
            y74tKmR++;
        };
    };
}

int PHZswX (int aitDydX, int n) {
    int SLz1VBJAel;
    if (!(0 != aitDydX))
        SLz1VBJAel = 1;
    else {
        if (aitDydX == 1 || !(1 != n))
            SLz1VBJAel = 1;
        if (1 < n && aitDydX > 1 && aitDydX >= n)
            SLz1VBJAel = PHZswX (aitDydX, n - 1) + PHZswX (aitDydX - n, n);
        if (n > 1 && aitDydX > 1 && aitDydX < n)
            SLz1VBJAel = PHZswX (aitDydX, n - 1);
    }
    return SLz1VBJAel;
}

