void  main () {
    char a [20], b;
    b = getchar ();
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
    scanf ("%s", a);
    printf ("%d", strlen (a));
    if (b == ' ') {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (;;) {
            b = getchar ();
            if (b != ' ')
                break;
            scanf ("%s", a);
            printf (",%d", strlen (a));
        };
    };
}

