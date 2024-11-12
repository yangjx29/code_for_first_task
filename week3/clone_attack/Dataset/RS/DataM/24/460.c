void  main () {
    int i;
    char r4J7ngCGEK [(44 - 24)];
    char aPmiEOhCY [20];
    char c [20];
    char d;
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
    scanf ("%s", &r4J7ngCGEK);
    strcpy (aPmiEOhCY, r4J7ngCGEK);
    strcpy (c, r4J7ngCGEK);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100 >= i) {
            d = getchar ();
            if (d == '\n')
                break;
            else
                scanf ("%s", &r4J7ngCGEK);
            i = i + 1;
            if (strlen (r4J7ngCGEK) > strlen (aPmiEOhCY))
                strcpy (aPmiEOhCY, r4J7ngCGEK);
            if (strlen (r4J7ngCGEK) < strlen (c))
                strcpy (c, r4J7ngCGEK);
        };
    }
    printf ("%s\n%s\n", aPmiEOhCY, c);
}

