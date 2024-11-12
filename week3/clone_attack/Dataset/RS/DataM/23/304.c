void  main () {
    int i;
    char *a [(574 - 544)];
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (!('\n' != getchar ()))
                break;
            a[i] = (char *) calloc (1, 20 * sizeof (char));
            scanf ("%s", a[i]);
            i = i + 1;
        };
    }
    for (; i >= 0; i = i - 1)
        if (i == 0)
            printf ("%s", a[i]);
        else
            printf ("%s ", a[i]);
}

