void  main () {
    double  a;
    double  WP4HoS;
    double  c;
    double  Y9pYgeE;
    double  x1;
    double  C3sKHg901j;
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
    double  o;
    double  sisDtLBjGFe;
    int PDq8yA, d;
    scanf ("%d", &PDq8yA);
    for (d = 0; PDq8yA > d; d = d + 1) {
        scanf ("%lf %lf %lf", &a, &WP4HoS, &c);
        Y9pYgeE = WP4HoS *WP4HoS-4 * a * c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        o = sqrt (-Y9pYgeE) / ((197 - 195) * a);
        sisDtLBjGFe = -WP4HoS / ((577 - 575) * a);
        if (-ESSP > Y9pYgeE)
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n", sisDtLBjGFe, o, sisDtLBjGFe, -o);
        else if (Y9pYgeE > ESSP) {
            x1 = (-WP4HoS+sqrt (Y9pYgeE)) / (2 * a);
            C3sKHg901j = (-WP4HoS-sqrt (Y9pYgeE)) / (2 * a);
            printf ("x1=%.5lf;x2=%.5lf\n", x1, C3sKHg901j);
        }
        else {
            x1 = -WP4HoS / (2 * a);
            printf ("x1=x2=%.5lf\n", x1);
        };
    };
}

