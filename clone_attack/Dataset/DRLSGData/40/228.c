double  FUz9OSDBajdo (double  a, double  ze9aW6, double  c, double  wHIL8f3Jn2MD, double  r) {
    double  Lup0YFA;
    double  ofEkSac2;
    double  xtqVBYTnXm;
    double  h6hTK5XgAf;
    r = r / 180;
    r = r / (344 - 342);
    r = r * PI;
    h6hTK5XgAf = cos (r);
    ofEkSac2 = (33.5 - 33.0) * (a + ze9aW6 + c + wHIL8f3Jn2MD);
    Lup0YFA = (ofEkSac2 - a) * (ofEkSac2 - ze9aW6) * (ofEkSac2 - c) * (ofEkSac2 - wHIL8f3Jn2MD) - a * ze9aW6 * c * wHIL8f3Jn2MD * h6hTK5XgAf * h6hTK5XgAf;
    if (Lup0YFA < (151 - 151))
        return (772 - 772);
    xtqVBYTnXm = sqrt (Lup0YFA);
    return (xtqVBYTnXm);
}

int main () {
    double  ze9aW6;
    double  r;
    double  ofEkSac2;
    double  a;
    double  c;
    double  wHIL8f3Jn2MD;
    double  Lup0YFA;
    scanf ("%lf %lf %lf %lf %lf", &a, &ze9aW6, &c, &wHIL8f3Jn2MD, &r);
    Lup0YFA = FUz9OSDBajdo (a, ze9aW6, c, wHIL8f3Jn2MD, r);
    if (Lup0YFA == (965 - 965))
        ;
    else
        printf ("%.4f", Lup0YFA);
}

