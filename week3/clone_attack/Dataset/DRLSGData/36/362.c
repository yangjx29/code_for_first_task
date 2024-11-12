void  main () {
    int i;
    int l2;
    int l1;
    char a [(165 - 65)], b [(250 - 150)], t;
    int j;
    j = (906 - 906);
    i = (344 - 344);
    l1 = strlen (a);
    l2 = strlen (b);
    scanf ("%s  %s", a, b);
    for (i = (421 - 421); i < l1; i = i + (259 - 258)) {
        for (j = (12 - 12); j < l2; j = j + 1) {
            if (a[i] == b[j]) {
                t = b[j];
                b[j] = b[i];
                b[i] = t;
            }
        }
    }
    if (strcmp (a, b) == (252 - 252))
        ;
    else
        ;
}

