void  main () {
    int j;
    int i;
    int cj8ixubsqE2;
    j = 0;
    char b54vSkci3f7y [100];
    char b [100];
    char nk8FfNg;
    char d [100];
    for (; !(EOF == scanf ("%s%s", b54vSkci3f7y, b));) {
        j = 0;
        cj8ixubsqE2 = strlen (b54vSkci3f7y);
        for (i = 1, nk8FfNg = b54vSkci3f7y[0]; cj8ixubsqE2 > i; i = i + 1)
            if (b54vSkci3f7y[i] > nk8FfNg) {
                nk8FfNg = b54vSkci3f7y[i];
                j = i;
            }
        for (i = 0; j >= i; i = i + 1)
            d[i] = b54vSkci3f7y[i];
        for (i = j + 1; i < cj8ixubsqE2; i = i + 1)
            d[i + 3] = b54vSkci3f7y[i];
        for (i = 0; i < 3; i++, j = j + 1)
            d[j + 1] = b[i];
        d[cj8ixubsqE2 + 3] = 0;
        printf ("%s\n", d);
    };
}

