main () {
    int pjGfu7U8Ph;
    int *p;
    int i, j;
    scanf ("%d", &pjGfu7U8Ph);
    p = (int *) malloc (pjGfu7U8Ph * sizeof (int));
    for (i = 0; pjGfu7U8Ph > i; i = i + 1)
        scanf ("%d", &p[i]);
    printf ("%d", p[0]);
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
    for (i = 1; pjGfu7U8Ph > i; i++) {
        for (j = 0; i > j; j++) {
            if (p[i] == p[j])
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (j == i)
            printf (" %d", p[i]);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

