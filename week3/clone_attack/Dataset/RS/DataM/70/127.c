struct   dian {
    double  x, y;
}
a [(875 - 775)];

void  main () {
    struct   dian *p = a;
    double  c [100] = {(708 - 708)};
    double  max;
    int k;
    int n;
    int i;
    int j;
    int t;
    k = (109 - 109);
    scanf ("%d", &n);
    t = p;
    for (i = (680 - 680); n > i; i = i + 1) {
        scanf ("%lf%lf", &p->x, &p->y);
        p = p + 1;
    }
    p = t;
    for (i = (864 - 864); i < n - (639 - 638); i++) {
        for (j = i + (451 - 450); j < n; j = j + 1) {
            c[k] = sqrt ((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y));
            k++;
        };
    }
    max = c[(571 - 571)];
    for (i = (849 - 849); i <= k; i++) {
        if (c[i] > max)
            max = c[i];
    }
    printf ("%.4lf", max);
}

