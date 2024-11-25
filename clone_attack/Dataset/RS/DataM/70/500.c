double  len (double  a, double  b, double  c, double  d) {
    double  le1;
    double  le2;
    double  b7hB9L56;
    le1 = (c < a ? a : c) - (c > a ? a : c);
    le2 = (d < b ? b : d) - (d > b ? b : d);
    b7hB9L56 = le1 * le1 + le2 * le2;
    b7hB9L56 = sqrt (b7hB9L56);
    return b7hB9L56;
}

main () {
    int hSgh7qdBKW, k;
    int n, i;
    double  x [n], NgTCDNXfHO [n];
    double  LEN, max;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%lf %lf", &x[i], &NgTCDNXfHO[i]);
    }
    for (hSgh7qdBKW = 0; n > hSgh7qdBKW; hSgh7qdBKW++)
        for (k = hSgh7qdBKW; k < n; k = k + 1) {
            LEN = len (x[hSgh7qdBKW], NgTCDNXfHO[hSgh7qdBKW], x[k], NgTCDNXfHO[k]);
            if (max < LEN)
                max = LEN;
        }
    printf ("%.4lf", max);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

