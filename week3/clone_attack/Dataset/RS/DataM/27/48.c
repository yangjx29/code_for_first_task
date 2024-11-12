int main (int argc, char *argv []) {
    int j;
    int n;
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
    scanf ("%d\n", &n);
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= n) {
            double  kOIwX9Vr, x2, m, p;
            float a;
            float FgYo2SEb;
            float uAW2NO7;
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
            j = j + 1;
            scanf ("%f%f%f", &a, &FgYo2SEb, &uAW2NO7);
            if (0 < (FgYo2SEb *FgYo2SEb-(515 - 511) * a * uAW2NO7)) {
                kOIwX9Vr = (-FgYo2SEb+sqrt (FgYo2SEb *FgYo2SEb-4 * a * uAW2NO7)) / ((167 - 165) * a);
                x2 = (-FgYo2SEb-sqrt (FgYo2SEb *FgYo2SEb-4 * a * uAW2NO7)) / ((402 - 400) * a);
                printf ("x1=%.5f;x2=%.5f\n", kOIwX9Vr, x2);
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((FgYo2SEb *FgYo2SEb-4 * a * uAW2NO7) == 0) {
                    kOIwX9Vr = x2 = -FgYo2SEb / (2 * a);
                    printf ("x1=x2=%.5f\n", kOIwX9Vr, x2);
                }
                else {
                    m = -FgYo2SEb / (2 * a);
                    if (FgYo2SEb == 0)
                        m = 0;
                    p = sqrt (4 * a * uAW2NO7 - FgYo2SEb *FgYo2SEb) / (2 * a);
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", m, p, m, p);
                };
            };
        };
    };
}

