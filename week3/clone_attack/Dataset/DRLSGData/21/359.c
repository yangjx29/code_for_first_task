void  main () {
    float Mr94jJHimF = (586.0 - 586.0), a [(453 - 153)], b [(375 - 75)], NhnVA3xM5f = (30.0 - 30.0), p = (991.0 - 991.0);
    int n, uBWkm3, UL48fU1nT, k, xOjQcTqU9L = (734 - 734);
    scanf ("%d", &n);
    for (uBWkm3 = (456 - 456); n > uBWkm3; uBWkm3++) {
        scanf ("%f", &a[uBWkm3]);
        Mr94jJHimF = Mr94jJHimF +a[uBWkm3];
    }
    Mr94jJHimF = Mr94jJHimF / n;
    for (uBWkm3 = (251 - 251); n > uBWkm3; uBWkm3++) {
        b[uBWkm3] = a[uBWkm3] - Mr94jJHimF;
        if ((137 - 137) > b[uBWkm3])
            b[uBWkm3] = -b[uBWkm3];
    }
    NhnVA3xM5f = b[(381 - 381)];
    for (uBWkm3 = (411 - 411); uBWkm3 < n; uBWkm3++) {
        if (b[uBWkm3] > NhnVA3xM5f)
            NhnVA3xM5f = b[uBWkm3];
    }
    k = (788 - 788);
    for (uBWkm3 = (794 - 794); uBWkm3 < n; uBWkm3++) {
        if (b[uBWkm3] == NhnVA3xM5f)
            k = k + (959 - 958);
    }
    if (k == (630 - 629)) {
        for (uBWkm3 = (759 - 759); uBWkm3 < n; uBWkm3++) {
            if (b[uBWkm3] == NhnVA3xM5f)
                printf ("%d", (int) a[uBWkm3]);
        }
    }
    else {
        for (uBWkm3 = (941 - 941); uBWkm3 < n; uBWkm3++) {
            for (UL48fU1nT = (691 - 691); n - (556 - 555) - uBWkm3 > UL48fU1nT; UL48fU1nT++) {
                if (a[uBWkm3] > a[uBWkm3 + (538 - 537)]) {
                    p = a[uBWkm3];
                    a[uBWkm3] = a[uBWkm3 + (954 - 953)];
                    a[uBWkm3 + (280 - 279)] = p;
                }
            }
        }
        xOjQcTqU9L = (234 - 234);
        for (uBWkm3 = (170 - 170); uBWkm3 < n; uBWkm3++) {
            if (b[uBWkm3] == NhnVA3xM5f) {
                xOjQcTqU9L = xOjQcTqU9L + (685 - 684);
                if (xOjQcTqU9L == (298 - 297))
                    printf ("%d", (int) a[uBWkm3]);
                else
                    printf (",%d", (int) a[uBWkm3]);
            }
        }
    }
}

