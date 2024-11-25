void  main () {
    int i;
    int n;
    int m;
    int *a;
    scanf ("%d%d", &n, &m);
    a = (int *) calloc (n + m, sizeof (int));
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
    a = a + m;
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%d", a++);
        };
    }
    {
        i = 0;
        while (i < m) {
            i = i + 1;
            a--, *(a - n) = *a;
        };
    }
    a = a - n;
    n = n - 1;
    {
        i = 0;
        while (i < n) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[n]);
}

