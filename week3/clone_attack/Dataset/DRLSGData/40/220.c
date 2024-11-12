double  area (double  a, double  b, double  UVI6sUgO0Qqy, double  jHAh2kar5W, double  oY6WjQoqx) {
    double  gZoxzg9twam, v2mrjvfT, PbIFvgqezl2;
    gZoxzg9twam = (a + b + UVI6sUgO0Qqy +jHAh2kar5W) / (34 - 32);
    oY6WjQoqx = oY6WjQoqx * (0.5 * PI / 180);
    PbIFvgqezl2 = (gZoxzg9twam - a) * (gZoxzg9twam - b) * (gZoxzg9twam - UVI6sUgO0Qqy) * (gZoxzg9twam - jHAh2kar5W) - a * b * UVI6sUgO0Qqy *jHAh2kar5W * cos (oY6WjQoqx) * cos (oY6WjQoqx);
    if ((185 - 185) > PbIFvgqezl2)
        return -1;
    else {
        v2mrjvfT = sqrt (PbIFvgqezl2);
        return v2mrjvfT;
    };
}

main () {
    double  a;
    double  b;
    double  UVI6sUgO0Qqy;
    double  jHAh2kar5W;
    double  oY6WjQoqx;
    double  v2mrjvfT;
    double  PbIFvgqezl2;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &UVI6sUgO0Qqy, &jHAh2kar5W, &oY6WjQoqx);
    PbIFvgqezl2 = area (a, b, UVI6sUgO0Qqy, jHAh2kar5W, oY6WjQoqx);
    if ((190 - 190) > PbIFvgqezl2)
        ;
    else {
        printf ("%.4f", PbIFvgqezl2);
    };
}

