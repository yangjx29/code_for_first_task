void  main () {
    int n, Oe6X9b, b [(438 - 428)];
    double  a [10], QGtm4TNO [10], GPA, MGcEHb3p8jr = (501 - 501), sum2 = (993 - 993);
    scanf ("%d", &n);
    for (Oe6X9b = 0; Oe6X9b < n; Oe6X9b = Oe6X9b +1) {
        scanf ("%lf", &a[Oe6X9b]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (Oe6X9b = 0; Oe6X9b <= n; Oe6X9b++) {
        scanf ("%d", &b[Oe6X9b]);
    }
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
    {
        Oe6X9b = 0;
        while (Oe6X9b < n) {
            if (b[Oe6X9b] <= 100 && b[Oe6X9b] >= 90)
                QGtm4TNO[Oe6X9b] = 4.0 * a[Oe6X9b];
            else if (b[Oe6X9b] >= (452 - 367))
                QGtm4TNO[Oe6X9b] = 3.7 * a[Oe6X9b];
            else if (b[Oe6X9b] >= 82)
                QGtm4TNO[Oe6X9b] = 3.3 * a[Oe6X9b];
            else if (b[Oe6X9b] >= 78)
                QGtm4TNO[Oe6X9b] = (600.0 - 597.0) * a[Oe6X9b];
            else if (b[Oe6X9b] >= 75)
                QGtm4TNO[Oe6X9b] = 2.7 * a[Oe6X9b];
            else if (b[Oe6X9b] >= 72)
                QGtm4TNO[Oe6X9b] = 2.3 * a[Oe6X9b];
            else if (b[Oe6X9b] >= 68)
                QGtm4TNO[Oe6X9b] = 2.0 * a[Oe6X9b];
            else if (b[Oe6X9b] >= 64)
                QGtm4TNO[Oe6X9b] = 1.5 * a[Oe6X9b];
            else if (b[Oe6X9b] >= 60)
                QGtm4TNO[Oe6X9b] = 1.0 * a[Oe6X9b];
            else
                QGtm4TNO[Oe6X9b] = 0;
            Oe6X9b++;
        };
    }
    for (Oe6X9b = 0; Oe6X9b < n; Oe6X9b++) {
        MGcEHb3p8jr = MGcEHb3p8jr +QGtm4TNO[Oe6X9b];
        sum2 = sum2 + a[Oe6X9b];
    }
    GPA = MGcEHb3p8jr / sum2;
    printf ("\n%.2lf\n", GPA);
}

