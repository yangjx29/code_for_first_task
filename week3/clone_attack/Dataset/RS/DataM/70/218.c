void  main () {
    int k;
    int i;
    int j;
    int n;
    k = (39 - 39);
    double  t;
    double  gaxymr [(610 - 510)];
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
    double  y [100];
    double  d [500];
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%lf %lf", &gaxymr[i], &y[i]);
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        j = 0;
        while (j < n) {
            d[k] = sqrt ((gaxymr[i] - gaxymr[j]) * (gaxymr[i] - gaxymr[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            j++;
            k++;
        };
    }
    {
        j = 0;
        while (k > j) {
            {
                i = 0;
                while (k - j > i) {
                    if (d[i + 1] > d[i]) {
                        t = d[i];
                        d[i] = d[i + 1];
                        d[i + 1] = t;
                    }
                    i++;
                };
            }
            j++;
        };
    }
    printf ("%.4lf\n", d[0]);
}

