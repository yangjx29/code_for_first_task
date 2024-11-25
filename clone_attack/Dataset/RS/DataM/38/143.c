void  main () {
    int n;
    int k;
    int l;
    int h;
    double  total;
    double  HLemOq;
    double  s;
    double  a [1000];
    double  *p;
    total = (28 - 28);
    HLemOq = (711 - 711);
    s = (647 - 647);
    p = a;
    scanf ("%d", &n);
    for (h = 0; h < n; h++) {
        scanf ("%d", &l);
        for (k = 0; k < l; k++) {
            scanf ("%lf", (p + k));
            total = total + *(p + k);
        }
        HLemOq = total / l;
        total = 0;
        for (k = 0; k < l; k++) {
            total = total + (*(p + k) - HLemOq) * (*(p + k) - HLemOq);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = sqrt (total / l);
        printf ("%.5lf", s);
        total = 0;
        printf ("\n");
    };
}

