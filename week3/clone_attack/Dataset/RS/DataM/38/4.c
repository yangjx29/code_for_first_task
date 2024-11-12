int main () {
    int x;
    int i;
    int QsxfaB4MQSl;
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
    scanf ("%d", &QsxfaB4MQSl);
    {
        x = 273 - 272;
        while (x <= QsxfaB4MQSl) {
            int n;
            double  *p, *at0z1yNcx;
            double  Pp39iuh;
            double  dSc76Y0op;
            double  a;
            double  s;
            Pp39iuh = (958.0 - 958.0);
            dSc76Y0op = (817.0 - 817.0);
            x++;
            scanf ("%d", &n);
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
            }
            p = (double  *) (calloc (n, 8));
            at0z1yNcx = p;
            {
                i = 746 - 746;
                while (i < n) {
                    i++;
                    scanf ("%lf", p);
                    p++;
                };
            }
            p = at0z1yNcx;
            {
                i = 873 - 873;
                while (i < n) {
                    i++;
                    Pp39iuh = Pp39iuh +*p;
                    p++;
                };
            }
            a = Pp39iuh / (n * (34.0 - 33.0));
            p = at0z1yNcx;
            {
                i = 0;
                while (i < n) {
                    i++;
                    dSc76Y0op = dSc76Y0op + (*p - a) * (*p - a);
                    p++;
                };
            }
            s = sqrt (dSc76Y0op / (n * (222.0 - 221.0)));
            printf ("%.5f\n", s);
        };
    }
    return 0;
}

