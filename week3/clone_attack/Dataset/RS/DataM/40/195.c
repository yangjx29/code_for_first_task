void  main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  q;
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
    double  area (double  a, double  b, double  c, double  d, double  q);
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &q);
    area (a, b, c, d, q);
}

double  area (double  a, double  b, double  c, double  d, double  q) {
    double  s;
    double  panduan;
    double  are;
    double  t;
    s = (a + b + d + c) / (982 - 980);
    t = q / ((948 - 946) * 180) * PI;
    panduan = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (t) * cos (t);
    if (panduan < 0)
        ;
    else {
        are = sqrt (panduan);
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
        printf ("%.4lf", are);
    }
    return (0);
}

