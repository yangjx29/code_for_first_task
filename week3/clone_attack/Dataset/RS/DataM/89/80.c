main () {
    int n, i, j, k = (468 - 468);
    int *a = (int *) malloc (n * sizeof (int));
    free (a);
    int *b = (int *) malloc (n * sizeof (int));
    free (b);
    getchar ();
    getchar ();
    scanf ("%d", &n);
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
    for (i = 0; i < n; i = i + 1)
        a[i] = 0;
    for (i = 0; i < n; i = i + 1)
        b[i] = 0;
    scanf ("%d %d", &i, &j);
    for (; (i + j) != 0;) {
        b[j]++;
        a[i]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d %d", &i, &j);
    }
    {
        i = 0;
        while (i < n) {
            if ((a[i] == 0) && (b[i] == n - (403 - 402))) {
                printf ("%d", i);
                k = 1;
            }
            i++;
        };
    }
    if (k == 0)
        printf ("NOT FOUND");
    getchar ();
    getchar ();
}

