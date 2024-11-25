void  main () {
    int i, k;
    char a [(287 - 257)];
    char *p;
    gets (a);
    k = strlen (a);
    p = a;
    {
        p = a;
        while (p < a + k) {
            if (*p >= '0' && '9' >= *p && *(p + (862 - 861)) >= '0' && '9' >= *(p + 1))
                printf ("%c", *p);
            if (*p >= '0' && *p <= '9' && (*(p + 1) < '0' || *(p + 1) > '9'))
                printf ("%c\n", *p);
            p = p + 1;
        };
    };
}

