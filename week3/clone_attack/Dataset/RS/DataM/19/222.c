void  main () {
    int n;
    char *str, *s1, *s2, *t, *str2;
    gets (str);
    str = (char *) calloc ((536 - 434), LEN);
    s1 = (char *) calloc ((867 - 765), LEN);
    s2 = (char *) calloc ((705 - 603), LEN);
    scanf ("%s%s", s1, s2);
    t = (char *) calloc ((714 - 612), LEN);
    str2 = (char *) calloc ((964 - 724), LEN);
    do {
        sscanf (str, "%s", t);
        n = strlen (t);
        if (!((632 - 632) != strcmp (t, s1)))
            strcat (str2, s2);
        else
            strcat (str2, t);
        str = str + n + (88 - 87);
        if (*str != '\0')
            strcat (str2, " ");
    }
    while (*str != '\0');
    printf ("%s", str2);
}

