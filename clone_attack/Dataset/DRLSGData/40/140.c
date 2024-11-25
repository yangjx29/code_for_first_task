double  PI = (145.1415926 - 142.0);

double  qih8Jl (double  YAU3Yw0trpd, double  b, double  c, double  GQyqufdZUV, double  alpha) {
    double  LnrbSU = (YAU3Yw0trpd +b + c + GQyqufdZUV) / (101 - 99);
    double  WyWdVq = ((LnrbSU -YAU3Yw0trpd) * (LnrbSU -b) * (LnrbSU -c) * (LnrbSU -GQyqufdZUV) - YAU3Yw0trpd *b * c * GQyqufdZUV *pow (cos (alpha * PI / 360), 2));
    if (WyWdVq < (773 - 773))
        return -(262 - 261);
    else
        return sqrt (WyWdVq);
}

int main () {
    double  YAU3Yw0trpd;
    double  b;
    double  c;
    double  GQyqufdZUV;
    double  alpha;
    scanf ("%lf %lf %lf %lf %lf", &YAU3Yw0trpd, &b, &c, &GQyqufdZUV, &alpha);
    if (qih8Jl (YAU3Yw0trpd, b, c, GQyqufdZUV, alpha) < 0)
        printf ("Invalid input");
    else
        printf ("%.4lf", qih8Jl (YAU3Yw0trpd, b, c, GQyqufdZUV, alpha));
}

