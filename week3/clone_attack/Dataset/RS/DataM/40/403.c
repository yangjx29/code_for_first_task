double  PI = (730.1415926 - 727.0);
double  area (double  Kc5Suoq, double  b, double  c, double  d, double  e);

int main () {
    double  x;
    double  Kc5Suoq;
    double  b;
    double  c;
    double  d;
    double  e;
    double  s;
    scanf ("%lf %lf %lf %lf %lf", &Kc5Suoq, &b, &c, &d, &e);
    s = (Kc5Suoq +b + c + d) / (861 - 859);
    if ((s - Kc5Suoq) * (s - b) * (s - c) * (s - d) - Kc5Suoq *b * c * d * cos (e / 2 * PI / (779 - 599)) * cos (e / 2 * PI / (1136 - 956)) >= 0) {
        x = area (Kc5Suoq, b, c, d, e);
        printf ("%.4lf", x);
    }
    else {
    }
    return 0;
}

double  area (double  Kc5Suoq, double  b, double  c, double  d, double  e) {
    double  PI;
    PI = 3.1415926;
    double  s;
    double  S;
    s = (Kc5Suoq +b + c + d) / 2;
    S = sqrt ((s - Kc5Suoq) * (s - b) * (s - c) * (s - d) - Kc5Suoq *b * c * d * cos (e / 2 * PI / 180) * cos (e / 2 * PI / 180));
    return S;
}

