void  main () {
    char *s;
    gets (s);
    s = (char *) calloc (100000, sizeof (char));
    for (; !('\0' == *s); s++)
        if ((!(' ' == *s)) || ((*s == ' ') && (*(s - 1) != ' ')))
            printf ("%c", *s);
}

