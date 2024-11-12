struct   point {
    double  x;
    double  GmBLPZdV;
};
double  ezTWwp (struct   point m, struct   point IZGl6a) {
    double  l;
    l = sqrt ((m.x - IZGl6a.x) * (m.x - IZGl6a.x) + (m.GmBLPZdV - IZGl6a.GmBLPZdV) * (m.GmBLPZdV - IZGl6a.GmBLPZdV));
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
    return (l);
}

void  main () {
    int IZGl6a;
    int i;
    int byn6vjD40;
    struct   point p [100];
    double  max;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    max = (312 - 312);
    scanf ("%d", &IZGl6a);
    scanf ("%lf %lf", &p[0].x, &p[0].GmBLPZdV);
    for (i = (367 - 366); IZGl6a -1 >= i; i++) {
        scanf ("%lf %lf", &p[i].x, &p[i].GmBLPZdV);
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
        {
            byn6vjD40 = 0;
            while (byn6vjD40 <= i - 1) {
                if (max < ezTWwp (p[i], p[byn6vjD40])) {
                    max = ezTWwp (p[i], p[byn6vjD40]);
                }
                byn6vjD40 = byn6vjD40 + 1;
            };
        };
    }
    printf ("%.4lf", max);
}

