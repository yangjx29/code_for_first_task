void  main () {
    int i;
    int m;
    char XGPej9 [(1546 - 546)] = {'\0'}, *q = XGPej9, *p;
    gets (q);
    p = (char *) malloc ((1259 - 259) * sizeof (char));
    m = strlen (XGPej9);
    {
        i = 0;
        while (i < m - (875 - 874)) {
            *(p + i) = *(q + i) + *(q + i + 1);
            i++;
        };
    }
    *(p + m - 1) = *(q + m - 1) + *q;
    printf ("%s", p);
}

