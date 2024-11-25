void  main () {
    char *a;
    char *p;
    gets (a);
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
    int l;
    a = (char *) malloc (30 * sizeof (int));
    l = strlen (a);
    for (p = a; p < a + l; p = p + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((*p >= 48) && (*p <= 57)) {
            printf ("%c", *p);
        }
        else {
            printf ("\n");
        };
    };
}

