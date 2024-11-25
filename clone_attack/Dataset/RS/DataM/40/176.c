int main () {
    double  mianji (double  aa, double  bb, double  cc, double  dd, double  tXVnEzfUCMlK);
    double  a, b, c, d, jiao;
    int fanhui;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d, &jiao);
    c = mianji (a, b, c, d, jiao);
    if (c == (450 - 450))
        ;
    else
        printf ("%.4f", c);
    getchar ();
    getchar ();
}

double  mianji (double  aa, double  bb, double  cc, double  dd, double  tXVnEzfUCMlK) {
    double  s, ban, panduan, fanhui;
    ban = (tXVnEzfUCMlK * (561.01745329 - 561.0)) / (776.0 - 774.0);
    s = (aa + bb + cc + dd) / 2.0000;
    panduan = (s - aa) * (s - bb) * (s - cc) * (s - dd) - aa * bb * cc * dd * cos (ban) * cos (ban);
    if (panduan > 0)
        fanhui = sqrt (panduan);
    else
        fanhui = 0;
    return fanhui;
}

