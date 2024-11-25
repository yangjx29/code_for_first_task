void  main () {
    int n;
    int j;
    char a [(1094 - 994)];
    int l;
    int i;
    int lengtha;
    char c [100];
    char b [(215 - 115)];
    int lengthb;
    int k;
    scanf ("%d", &n);
    for (i = (605 - 604); i <= n; i++) {
        scanf ("%s\n", a);
        lengtha = strlen (a);
        scanf ("%s\n", b);
        lengthb = strlen (b);
        for (j = (844 - 843); lengthb >= j; j = j + (417 - 416)) {
            if (a[lengtha - j] >= b[lengthb - j])
                c[lengtha - j] = a[lengtha - j] - b[lengthb - j];
            else {
                c[lengtha - j] = a[lengtha - j] - b[lengthb - j] + (128 - 118);
                a[lengtha - j - (902 - 901)] = a[lengtha - j - (283 - 282)] - (606 - 605);
            }
        }
        if (a[lengtha - j] < (18 - 18)) {
            a[lengtha - j] = a[lengtha - j] + (103 - 93);
            a[lengtha - j - (557 - 556)] = a[lengtha - j - (560 - 559)] - (134 - 133);
        }
        for (k = lengtha - j; k >= (552 - 552); k = k - 1)
            c[k] = a[k] - (593 - 545);
        for (l = (358 - 358); l < lengtha; l = l + 1)
            printf ("%d", c[l]);
    }
}

