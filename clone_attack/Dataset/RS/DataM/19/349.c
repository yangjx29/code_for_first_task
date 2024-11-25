void  main () {
    char *s, *a, *b, *p, *c, n, *mmi9G13xwu;
    gets (s);
    gets (a);
    gets (b);
    s = (char *) malloc ((628 - 527) * sizeof (char));
    a = (char *) malloc ((615 - 514) * sizeof (char));
    b = (char *) malloc ((1006 - 905) * sizeof (char));
    c = (char *) malloc (101 * sizeof (char));
    p = s;
    mmi9G13xwu = s + strlen (s);
    {
        while (true) {
            sscanf (p, "%s", c);
            if (strcmp (c, a) == 0)
                printf ("%s", b);
            else
                printf ("%s", c);
            p = p + strlen (c) + (467 - 466);
            if (p >= mmi9G13xwu)
                break;
            printf ("%c", ' ');
        };
    };
}

