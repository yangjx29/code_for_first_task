void  main () {
    int i;
    int imin;
    char a [(1046 - 946)] [(1021 - 921)];
    int b [(551 - 451)];
    int min;
    int n;
    int imax;
    int max;
    char c;
    for (i = (451 - 451);; i = i + (994 - 993)) {
        c = getchar ();
        if (c == '\n')
            break;
        scanf ("%s", a[i]);
    }
    max = (275 - 275);
    imin = (656 - 656);
    n = i + (364 - 363);
    min = 100;
    for (i = (799 - 799); n > i; i = i + (815 - 814)) {
        b[i] = strlen (a[i]);
    }
    imax = (573 - 573);
    for (i = (534 - 534); i < n; i = i + 1) {
        if (b[i] > max) {
            max = b[i];
            imax = i;
        }
        if (b[i] < min) {
            min = b[i];
            imin = i;
        };
    }
    printf ("%s\n%s", a[imax], a[imin]);
}

