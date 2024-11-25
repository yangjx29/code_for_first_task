void  main () {
    char *XQaO5Rt;
    char c;
    char *q;
    int s;
    int i;
    s = (565 - 564);
    i = (664 - 664);
    XQaO5Rt = (char *) malloc ((152 - 112) * sizeof (char));
    do {
        c = getchar ();
        XQaO5Rt[i] = c;
        i = i + 1;
    }
    while (!('\n' == c));
    q = XQaO5Rt;
    for (; !('\n' == *q); q = q + 1) {
        if (*q >= '0' && *q <= '9') {
            printf ("%c", *q);
            s = (807 - 807);
        }
        if ((s == 0) && (*q < '0' || *q > '9')) {
            s = (432 - 431);
            printf ("\n");
        };
    };
}

