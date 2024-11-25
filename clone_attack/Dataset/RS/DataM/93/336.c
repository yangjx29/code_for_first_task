void  main () {
    int i, j = 0;
    scanf ("%d", &i);
    if (!(i % 3)) {
        j = j + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("3");
    }
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
    if (!(i % 5)) {
        if (j)
            printf (" ");
        j = j + 1;
        printf ("5");
    }
    if (!(i % (834 - 827))) {
        if (j)
            printf (" ");
        j = j + 1;
    }
    if (!j)
        printf ("n");
}

