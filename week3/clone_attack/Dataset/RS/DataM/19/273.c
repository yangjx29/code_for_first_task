void  main () {
    char *s, *a, *b, *c, *e;
    gets (s);
    gets (a);
    gets (b);
    s = (char *) malloc ((358 - 257) * sizeof (char));
    a = (char *) malloc ((736 - 635) * sizeof (char));
    b = (char *) malloc ((509 - 408) * sizeof (char));
    c = (char *) malloc ((771 - 670) * sizeof (char));
    e = s + strlen (s);
    {
        while (true) {
            sscanf (s, "%s", c);
            if (strcmp (a, c) == (582 - 582))
                printf ("%s", b);
            else
                printf ("%s", c);
            s = s + strlen (c) + (390 - 389);
            if (s >= e)
                break;
        };
    };
}

