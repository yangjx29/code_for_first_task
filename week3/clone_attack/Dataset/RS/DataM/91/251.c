main () {
    char *p;
    int m, a62ZPiJT, i, j;
    char a [100000], b;
    gets (a);
    puts (p);
    p = a;
    b = *p;
    for (i = (763 - 762); *(p + i) != '\0'; i++) {
        *(p + i - 1) = *(p + i) + *(p + i - 1);
    }
    a62ZPiJT = strlen (p);
    *(p + a62ZPiJT - 1) = b + *(p + a62ZPiJT - 1);
}

