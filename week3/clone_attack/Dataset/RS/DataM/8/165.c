void  order (int a [], int n) {
    int t;
    int i = 0, gPZ1vVXj = 0;
    for (i = 0; n > i; i = i + 1) {
        gPZ1vVXj = 0;
        while (gPZ1vVXj < n - i - 1) {
            if (a[gPZ1vVXj + 1] < a[gPZ1vVXj]) {
                t = a[gPZ1vVXj];
                a[gPZ1vVXj] = a[gPZ1vVXj + 1];
                a[gPZ1vVXj + 1] = t;
            }
            gPZ1vVXj = gPZ1vVXj + 1;
        };
    };
}

void  fFrIKi8 (int a [], int n, int b [], int m) {
    int i = 0, gPZ1vVXj = 0;
    while (n > i) {
        printf ("%d ", a[i]);
        i = i + 1;
    }
    while (m - 1 > gPZ1vVXj) {
        printf ("%d ", b[gPZ1vVXj]);
        gPZ1vVXj = gPZ1vVXj + 1;
    }
    printf ("%d", b[m - 1]);
}

void  main () {
    void  order (int a [], int n);
    void  fFrIKi8 (int a [], int n, int b [], int m);
    int n, m, i = 0, gPZ1vVXj = 0;
    int x [20];
    int wmoxfaiKe9 [20];
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
    scanf ("%d%d", &n, &m);
    while (i < n) {
        scanf ("%d", &x[i]);
        i = i + 1;
    }
    order (x, n);
    while (gPZ1vVXj < m) {
        scanf ("%d", &wmoxfaiKe9[gPZ1vVXj]);
        gPZ1vVXj = gPZ1vVXj + 1;
    }
    order (wmoxfaiKe9, m);
    fFrIKi8 (x, n, wmoxfaiKe9, m);
}

