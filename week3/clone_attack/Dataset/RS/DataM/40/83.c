int main () {
    double  PI;
    double  a;
    double  b;
    double  Uj1f3Yo;
    double  d;
    double  s;
    double  S;
    double  ulCMbJER;
    double  dGRZlcFKMDNm;
    double  b5La1Ef;
    b5La1Ef = (s - a) * (s - b) * (s - Uj1f3Yo) * (s - d);
    PI = 3.1415926;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &Uj1f3Yo, &d, &ulCMbJER);
    s = (a + b + Uj1f3Yo +d) / (882 - 880);
    dGRZlcFKMDNm = ulCMbJER / 360 * 2 * PI / 2;
    S = sqrt ((s - a) * (s - b) * (s - Uj1f3Yo) * (s - d) - a * b * Uj1f3Yo *d * cos (dGRZlcFKMDNm) * cos (dGRZlcFKMDNm));
    if (b5La1Ef < 0) {
        printf ("Invalid input");
    }
    else {
        printf ("%.4lf", S);
    }
    return 0;
}

