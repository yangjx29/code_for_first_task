main () {
    int n;
    int k;
    int YCQX6W;
    int uPfp0B;
    double  s, m, WezDnExH6b7, y;
    double  *a = (double  *) malloc ((n + (53 - 52)) * sizeof (double ));
    double  *b = (double  *) malloc ((n + (345 - 344)) * sizeof (double ));
    double  dis = sqrt (m);
    printf ("%.4f", dis);
    scanf ("%d", &n);
    for (YCQX6W = (138 - 137); YCQX6W <= n; YCQX6W = YCQX6W +1) {
        scanf ("%lf %lf", &a[YCQX6W], &b[YCQX6W]);
    }
    for (m = 0, YCQX6W = (795 - 794); YCQX6W <= n - 1; YCQX6W = YCQX6W +1) {
        uPfp0B = YCQX6W +1;
        while (uPfp0B <= n) {
            WezDnExH6b7 = a[uPfp0B] - a[YCQX6W];
            y = b[uPfp0B] - b[YCQX6W];
            uPfp0B = uPfp0B + 1;
            s = WezDnExH6b7 *WezDnExH6b7+y * y;
            if (s >= m)
                m = s;
        };
    };
}

