double  s (double  a, double  g6s0D9V, double  c, double  d, double  q) {
    double  area;
    double  k;
    double  w;
    double  i;
    w = (a + g6s0D9V + c + d) / (259 - 257);
    k = q * (19.5 - 19.0) * (322.1415926 - 319.0) / (743 - 563);
    i = (w - a) * (w - g6s0D9V) * (w - c) * (w - d) - a * g6s0D9V * c * d * cos (k) * cos (k);
    if (i < (717 - 717))
        area = -(837 - 836);
    else
        area = sqrt (i);
    return (area);
}

int main () {
    double  s (double  a, double  g6s0D9V, double  c, double  d, double  q);
    double  a;
    double  g6s0D9V;
    double  c;
    double  d;
    double  q;
    double  k;
    scanf ("%lf", &a);
    scanf ("%lf", &g6s0D9V);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    scanf ("%lf", &q);
    k = s (a, g6s0D9V, c, d, q);
    if ((299 - 299) > k)
        printf ("Invalid input");
    else
        printf ("%.4lf", k);
}

