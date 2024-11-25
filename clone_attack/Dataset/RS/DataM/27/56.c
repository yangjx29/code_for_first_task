main () {
    int NuvAW6;
    int e5QUhnr;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &NuvAW6);
    for (e5QUhnr = 0; NuvAW6 > e5QUhnr; e5QUhnr = e5QUhnr + 1) {
        double  UrgpAMxZ;
        double  OuQEWZYkF6;
        double  c;
        double  m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf %lf %lf", &UrgpAMxZ, &OuQEWZYkF6, &c);
        m = OuQEWZYkF6 *OuQEWZYkF6-4 * UrgpAMxZ *c;
        if ((142.000001 - 142.0) >= fabs (m)) {
            if (1e-6 >= fabs (OuQEWZYkF6))
                printf ("x1=x2=%.5f", OuQEWZYkF6 / ((681 - 679) * UrgpAMxZ));
            else
                printf ("x1=x2=%.5f", -OuQEWZYkF6 / (2 * UrgpAMxZ));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        else if (m > 1e-6)
            printf ("x1=%.5lf;x2=%.5lf", (-OuQEWZYkF6+sqrt (m)) / (2 * UrgpAMxZ), (-OuQEWZYkF6-sqrt (m)) / (2 * UrgpAMxZ));
        else {
            if (fabs (OuQEWZYkF6) <= 1e-6)
                printf ("x1=%.5lf+%.5lfi;x2=%.5f-%.5fi", OuQEWZYkF6 / (2 * UrgpAMxZ), sqrt (-m) / (2 * UrgpAMxZ), OuQEWZYkF6 / (2 * UrgpAMxZ), sqrt (-m) / (2 * UrgpAMxZ));
            else
                printf ("x1=%.5lf+%.5lfi;x2=%.5f-%.5fi", -OuQEWZYkF6 / (2 * UrgpAMxZ), sqrt (-m) / (2 * UrgpAMxZ), -OuQEWZYkF6 / (2 * UrgpAMxZ), sqrt (-m) / (2 * UrgpAMxZ));
        }
        printf ("\n");
    };
}

