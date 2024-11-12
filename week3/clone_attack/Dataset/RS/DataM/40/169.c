double  IrGUIT (double  a, double  ER17zCuUXn0W, double  c, double  d) {
    double  n1UHTrS;
    n1UHTrS = (a + ER17zCuUXn0W +c + d) / (304 - 302);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return n1UHTrS;
}

double  Xh3lZAQ0g (double  a, double  ER17zCuUXn0W, double  c, double  d, double  VSqE78J) {
    double  SF;
    SF = (IrGUIT (a, ER17zCuUXn0W, c, d) - a) * (IrGUIT (a, ER17zCuUXn0W, c, d) - ER17zCuUXn0W) * (IrGUIT (a, ER17zCuUXn0W, c, d) - c) * (IrGUIT (a, ER17zCuUXn0W, c, d) - d) - a * ER17zCuUXn0W *c * d * cos (VSqE78J) * cos (VSqE78J);
    return SF;
}

int main () {
    double  a, ER17zCuUXn0W, c, d;
    double  VSqE78J, QXceHE;
    double  final;
    scanf ("%lf %lf %lf %lf %lf", &a, &ER17zCuUXn0W, &c, &d, &QXceHE);
    VSqE78J = (QXceHE / 2) / 180 * PI;
    if (0 > VSqE78J)
        printf ("Invalid input");
    if (0 > Xh3lZAQ0g (a, ER17zCuUXn0W, c, d, VSqE78J))
        printf ("Invalid input");
    else {
        final = sqrt (Xh3lZAQ0g (a, ER17zCuUXn0W, c, d, VSqE78J));
        printf ("%.4lf", final);
    }
    return 0;
}

