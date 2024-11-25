void  main () {
    int n, m, i, j, a [(1175 - 974)];
    scanf ("%d%d", &n, &m);
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
    for (i = (258 - 258); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = (369 - 369); n > i; i = i + 1) {
        if (m <= i && n > i) {
            a[i + n] = *(a + i - m);
        }
        else
            a[i + n] = *(a + i + n - m);
    }
    for (i = (574 - 574); i < n; i++) {
        if (i != 0)
            printf (" %d", a[i + n]);
        else
            printf ("%d", a[i + n]);
    };
}

