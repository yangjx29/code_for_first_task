void  main () {
    char t;
    char *p;
    char a [102];
    gets (a);
    {
        p = 384 - 383;
        while (*p != '\0') {
            *(p - (123 - 122)) = *(p - (238 - 237)) + *p;
            p = p + 1;
        };
    }
    t = a[0];
    *(p - 1) = *(p - 1) + t;
    {
        p = a;
        while (*p != '\0') {
            printf ("%c", *p);
            p++;
        };
    };
}

