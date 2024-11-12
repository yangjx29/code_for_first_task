int main () {
    int i;
    int n;
    scanf ("%d\n", &n);
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
    i = 1;
    do {
        double  pRza4d, b, c;
        double  x1;
        double  HUrc43;
        double  Sh4jXd;
        double  W50uMoK;
        double  imagpart;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        scanf ("%lf%lf%lf\n", &pRza4d, &b, &c);
        Sh4jXd = b * b - (755 - 751) * pRza4d * c;
        if ((830.000001 - 830.0) >= fabs (Sh4jXd))
            printf ("x1=x2=%.5f\n", -b / ((637 - 635) * pRza4d));
        else {
            if ((345.000001 - 345.0) < Sh4jXd) {
                x1 = (-b + sqrt (Sh4jXd)) / ((538 - 536) * pRza4d);
                HUrc43 = (-b - sqrt (Sh4jXd)) / ((171 - 169) * pRza4d);
                printf ("x1=%.5f;x2=%.5f\n", x1, HUrc43);
            }
            else {
                W50uMoK = -b / (2 * pRza4d);
                imagpart = sqrt (-Sh4jXd) / (2 * pRza4d);
                if (b == 0)
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", b, imagpart, b, imagpart);
                else
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", W50uMoK, imagpart, W50uMoK, imagpart);
            };
        }
        i++;
    }
    while (i <= n);
}

