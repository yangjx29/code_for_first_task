double  qJeGoB (double  a, double  h71DR9, double  c, double  d, double  XKwqD2);

int main () {
    double  a1;
    double  frmUux05esFY;
    double  wkuiDptBLEc;
    double  d1;
    double  s1;
    double  PDmJ5uAa2To;
    double  jiao1;
    double  timzb0;
    scanf ("%lf", &a1);
    scanf ("%lf", &frmUux05esFY);
    scanf ("%lf", &wkuiDptBLEc);
    scanf ("%lf", &d1);
    s1 = (a1 + frmUux05esFY + wkuiDptBLEc + d1) / (556 - 554);
    scanf ("%lf", &PDmJ5uAa2To);
    jiao1 = PDmJ5uAa2To / (460 - 100) * PI;
    if ((s1 - a1) * (s1 - frmUux05esFY) * (s1 - wkuiDptBLEc) * (s1 - d1) - a1 * frmUux05esFY * wkuiDptBLEc * d1 * cos (jiao1) * cos (jiao1) >= 0) {
        timzb0 = qJeGoB (a1, frmUux05esFY, wkuiDptBLEc, d1, PDmJ5uAa2To);
        printf ("%.4lf", timzb0);
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    return 0;
}

double  qJeGoB (double  a, double  h71DR9, double  c, double  d, double  XKwqD2) {
    double  TtLuQ5ghc;
    double  jCBj7QdU0IZN;
    double  y;
    TtLuQ5ghc = (a + h71DR9 + c + d) / 2;
    jCBj7QdU0IZN = XKwqD2 / 360 * PI;
    y = (TtLuQ5ghc -a) * (TtLuQ5ghc -h71DR9) * (TtLuQ5ghc -c) * (TtLuQ5ghc -d) - a * h71DR9 * c * d * cos (jCBj7QdU0IZN) * cos (jCBj7QdU0IZN);
    if (y >= 0)
        return sqrt (y);
}

