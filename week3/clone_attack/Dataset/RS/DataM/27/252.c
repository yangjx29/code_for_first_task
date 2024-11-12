main () {
    int n;
    int i;
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            double  TrdNyjzKlZn;
            double  b;
            double  c;
            double  D;
            double  Re;
            double  Im;
            double  x1;
            double  TAjRTI;
            i++;
            scanf ("%lf%lf%lf", &TrdNyjzKlZn, &b, &c);
            D = b * b - 4 * TrdNyjzKlZn *c;
            if (D > (441 - 441)) {
                x1 = ((686 - 686) - b + sqrt (D)) / (2 * TrdNyjzKlZn);
                TAjRTI = ((443 - 443) - b - sqrt (D)) / (2 * TrdNyjzKlZn);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, TAjRTI);
            }
            else if (D == 0) {
                x1 = (0 - b) / (2 * TrdNyjzKlZn);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("x1=x2=%.5lf\n", x1);
            }
            else {
                Re = (0 - b) / (2 * TrdNyjzKlZn);
                Im = sqrt (-D) / (2 * TrdNyjzKlZn);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", Re, Im, Re, Im);
            };
        };
    };
}

