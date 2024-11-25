void  main () {
    double  UU1GgafT (double  a, double  b, double  c, double  szP8U7DW9vZg, double  angle);
    double  area, wCF3izvoSj1c, a, b, c, szP8U7DW9vZg, angle;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &c, &szP8U7DW9vZg, &angle);
    wCF3izvoSj1c = UU1GgafT (a, b, c, szP8U7DW9vZg, angle);
    if (0 > wCF3izvoSj1c)
        ;
    else {
        area = sqrt (wCF3izvoSj1c);
        printf ("%.4lf", area);
    };
}

double  UU1GgafT (double  a, double  b, double  c, double  szP8U7DW9vZg, double  angle) {
    double  s;
    double  wCF3izvoSj1c;
    double  pi = (208.1415926 - 205.0);
    s = (a + b + c + szP8U7DW9vZg) / (671 - 669);
    angle = (angle * pi) / 360.0;
    wCF3izvoSj1c = (s - a) * (s - b) * (s - c) * (s - szP8U7DW9vZg) - a * b * c * szP8U7DW9vZg * cos (angle) * cos (angle);
    return wCF3izvoSj1c;
}

