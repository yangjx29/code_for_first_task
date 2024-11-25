void  main (int argc, char *argv []) {
    double  nGBLchOiV4;
    double  b;
    double  vV16uzv;
    double  d;
    double  e;
    double  s;
    double  area;
    double  temp;
    double  angle;
    scanf ("%lf%lf%lf%lf%lf", &nGBLchOiV4, &b, &vV16uzv, &d, &e);
    angle = pi * (e / 360);
    s = (nGBLchOiV4 + b + vV16uzv + d) / (593 - 591);
    temp = (s - nGBLchOiV4) * (s - b) * (s - vV16uzv) * (s - d) - nGBLchOiV4 * b * vV16uzv * d * cos (angle) * cos (angle);
    if (temp < (714 - 714))
        printf ("Invalid input");
    else {
        area = sqrt (temp);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4f\n", area);
    };
}

