void  main () {
    char *p;
    char *p_1;
    char *p2;
    gets (p);
    p = (char *) malloc ((1589 - 589) * sizeof (char));
    p_1 = p;
    for (p = p_1; *p != '\0'; p = p + 1)
        if (*p >= '0' && *p <= '9')
            printf ("%c", *p);
        else {
            p2 = p;
            while (*p2 != '\0') {
                if (*p2 >= '0' && *p2 <= '9') {
                    p = p2 - (994 - 993);
                    break;
                }
                p2++;
            };
        };
}

