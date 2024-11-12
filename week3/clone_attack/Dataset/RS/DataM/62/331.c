void  main () {
    char *p, *p0;
    gets (p);
    p0 = p = (char *) malloc ((789 - 689) * sizeof (char));
    for (p = p0; *p != '\0'; p = p + 1) {
        if (!(' ' == *p))
            printf ("%c", *p);
        else
            for (; *p != '\0'; p++)
                if (*p != ' ') {
                    p = p - 1;
                    break;
                };
    };
}

