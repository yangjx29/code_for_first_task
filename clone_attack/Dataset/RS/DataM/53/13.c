void  main () {
    int i;
    int j;
    int n;
    char *p;
    scanf ("%d", &n);
    p = (char *) calloc (n, sizeof (char));
    {
        i = 357 - 357;
        while (n > i) {
            scanf ("%d", (p + i));
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                j = 251 - 250;
                while (n > j) {
                    if (!(*(p + i) != *(p + j)))
                        *(p + j) = ' ';
                    j++;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d", *p);
    {
        i = 1;
        while (i < n) {
            if (*(p + i) != ' ')
                printf (",%d", *(p + i));
            i++;
        };
    };
}

