double  abc (double  x, double  oQ2741Ig, double  z, double  w) {
    double  AC8BS4I;
    AC8BS4I = (x + oQ2741Ig + z + w) / 2;
    return AC8BS4I;
}

double  abcd (double  x, double  oQ2741Ig, double  z, double  w, double  e) {
    double  S, B8hQ5wcY3qg;
    B8hQ5wcY3qg = abc (x, oQ2741Ig, z, w);
    S = sqrt ((B8hQ5wcY3qg -x) * (B8hQ5wcY3qg -oQ2741Ig) * (B8hQ5wcY3qg -z) * (B8hQ5wcY3qg -w) - x * oQ2741Ig * z * w * cos (e / 180 * pi) * cos (e / 180 * pi));
    return S;
}

void  main () {
    double  ZjZ6HgBOn;
    double  b;
    double  bVge2iS5BYD;
    double  B8hQ5wcY3qg;
    double  h;
    double  e;
    double  OXvArbBV;
    scanf ("%lf%lf%lf%lf%lf", &ZjZ6HgBOn, &b, &bVge2iS5BYD, &B8hQ5wcY3qg, &h);
    e = h / 2.0;
    OXvArbBV = abcd (ZjZ6HgBOn, b, bVge2iS5BYD, B8hQ5wcY3qg, e);
    if (OXvArbBV >= 0)
        printf ("%.4lf", OXvArbBV);
    else
        ;
}

