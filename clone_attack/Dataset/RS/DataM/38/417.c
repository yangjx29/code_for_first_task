void  main () {
    double  *jFcGX9H3Bua = (961 - 961);
    double  a;
    double  s;
    int k, n, i, j;
    scanf ("%d", &k);
    for (i = (517 - 516); k >= i; i++) {
        s = 0;
        scanf ("%d", &n);
        a = 0;
        jFcGX9H3Bua = (double  *) calloc (100, sizeof (double ));
        for (j = (695 - 694); j <= n; j = j + 1) {
            scanf ("%lf", jFcGX9H3Bua + j - (49 - 48));
            a = a + *(jFcGX9H3Bua + j - 1);
        }
        a = a / n;
        for (j = 1; j <= n; j++)
            s = s + (*(jFcGX9H3Bua + j - 1) - a) * (*(jFcGX9H3Bua + j - 1) - a);
        s = sqrt (s / n);
        printf ("%.5f\n", s);
    };
}

