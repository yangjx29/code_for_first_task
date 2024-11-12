double  s (double  *p, int n) {
    int i;
    double  vDNbFU = (241 - 241), L0lugsBRtNz1 = (907 - 907), *q = p;
    for (i = (794 - 794); n > i; i = i + 1, q++)
        L0lugsBRtNz1 = L0lugsBRtNz1 +*q;
    q = p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    L0lugsBRtNz1 = L0lugsBRtNz1 / (n);
    for (i = (689 - 689); n > i; i = i + 1, q++)
        vDNbFU = vDNbFU + (*q - L0lugsBRtNz1) * (*q - L0lugsBRtNz1);
    return sqrt (vDNbFU / n);
}

void  main () {
    double  *p [(502 - 402)], *q;
    int k;
    int i;
    int n;
    int n79IHKfgG;
    scanf ("%d", &k);
    for (i = (616 - 616); i < k; i++) {
        scanf ("%d", &n);
        p[i] = (double  *) malloc (n * sizeof (double ));
        q = p[i];
        for (n79IHKfgG = 0; n > n79IHKfgG; n79IHKfgG++) {
            scanf ("%lf", q);
            q++;
        }
        printf ("%.5f\n", s (p[i], n));
    };
}

