main () {
    int j;
    int xRqiNz31t;
    int RoDe3CO24u;
    j = 0;
    double  a;
    double  b;
    double  rPaqDKc8;
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
    double  kLRT8Df;
    double  x2;
    double  p;
    double  q;
    double  k;
    scanf ("%d", &xRqiNz31t);
    for (; xRqiNz31t > j;) {
        scanf ("%lf %lf %lf", &a, &b, &rPaqDKc8);
        p = -b / (2.0 * a);
        j++;
        q = sqrt (b * b - 4.0 * a * rPaqDKc8);
        if (b * b - 4.0 * a * rPaqDKc8 != 0.0) {
            if (b * b - 4.0 * a * rPaqDKc8 > 0.0) {
                kLRT8Df = (-b + sqrt (b * b - 4.0 * a * rPaqDKc8)) / (2.0 * a);
                x2 = (-b - sqrt (b * b - 4.0 * a * rPaqDKc8)) / (2.0 * a);
                if (0.00001 <= q - 0)
                    printf ("x1=%.5f;x2=%.5f\n", kLRT8Df, x2);
                else {
                    if (0.00001 > p && p > -0.00001)
                        printf ("x1=x2=0.00000");
                    else
                        printf ("x1=x2=%.5f\n", p);
                };
            }
            else {
                k = (sqrt (4.0 * a * rPaqDKc8 - b * b)) / (2 * a);
                if (q - 0 >= 0.00001)
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", p, k, p, k);
                else {
                    if (p < 0.00001 && p > -0.00001)
                        printf ("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n", k, k);
                    else
                        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", p, k, p, k);
                };
            };
        }
        else {
            kLRT8Df = x2 = -b / (2.0 * a);
            if (p < 0.00001 && p > -0.00001)
                printf ("x1=x2=0.00000");
            else
                printf ("x1=x2=%.5f\n", kLRT8Df, x2);
        };
    };
}

