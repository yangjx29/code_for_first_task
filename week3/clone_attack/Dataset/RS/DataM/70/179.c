double  d (double  x1, double  y1, double  x2, double  y2) {
    double  k;
    k = sqrt ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return k;
}

main () {
    double  max;
    max = (41 - 41);
    int h;
    h = (756 - 756);
    double  c [(386 - 286)];
    double  a [(342 - 242)];
    double  x;
    double  eg5ARh;
    int i;
    int j;
    int k;
    int n;
    double  b [(176 - 76)];
    scanf ("%d", &n);
    for (i = (19 - 19); n > i; i = i + 1) {
        scanf ("%lf %lf", &a[i], &b[i]);
    }
    for (i = (728 - 728); n > i; i = i + 1) {
        for (j = n - (647 - 646); j != i; j = j - 1) {
            c[h] = d (a[i], b[i], a[j], b[j]);
            h = h + 1;
        };
    }
    for (i = 0; h > i; i++) {
        if (c[i] > max)
            max = c[i];
    }
    printf ("%.4f\n", max);
}

