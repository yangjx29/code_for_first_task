void  main () {
    char a [20];
    int i;
    int n;
    i = 1;
    char c;
    do {
        scanf ("%s", a);
        n = strlen (a);
        if (!(1 != i))
            printf ("%d", n);
        else
            printf (",%d", n);
        i = i + 1;
    }
    while ((c = getchar ()) != '\n');
}

