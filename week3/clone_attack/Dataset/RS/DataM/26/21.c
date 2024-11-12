void  main () {
    char *p, *p0;
    gets (p);
    p0 = p = (char *) malloc (100 * sizeof (char));
    for (p = p0; *p != '\0'; p++) {
        if (*p != ' ')
            printf ("%c", *p);
        else
            for (; *p != '\0'; p++)
                if (*p != ' ') {
                    p--;
                    break;
                };
    };
}

