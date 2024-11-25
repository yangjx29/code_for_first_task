void  main () {
    double  EWGu5D0;
    double  R0jNiTmJK;
    double  c;
    double  WoAGzaNHe;
    double  t;
    double  maoemP;
    double  area (double  EWGu5D0, double  R0jNiTmJK, double  c, double  WoAGzaNHe, double  t);
    scanf ("%lf", &EWGu5D0);
    scanf ("%lf", &R0jNiTmJK);
    scanf ("%lf", &c);
    scanf ("%lf", &WoAGzaNHe);
    scanf ("%lf", &t);
    maoemP = area (EWGu5D0, R0jNiTmJK, c, WoAGzaNHe, t);
    if (0 > maoemP)
        printf ("Invalid input");
    else
        printf ("%.4lf", sqrt (maoemP));
}

double  area (double  EWGu5D0, double  R0jNiTmJK, double  c, double  WoAGzaNHe, double  t) {
    double  tIEOLuTlCdob;
    double  y;
    double  s;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    tIEOLuTlCdob = 3.1415926;
    s = (EWGu5D0 +R0jNiTmJK+c + WoAGzaNHe) / 2;
    y = (s - EWGu5D0) * (s - R0jNiTmJK) * (s - c) * (s - WoAGzaNHe) - EWGu5D0 *R0jNiTmJK*c * WoAGzaNHe *cos (t / 360 * tIEOLuTlCdob) * cos (t / 360 * tIEOLuTlCdob);
    return (y);
}

