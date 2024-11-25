int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  x;
    double  s;
    double  m;
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
    double  y;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d, &x);
    s = (a + b + c + d) / 2;
    m = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * pow (cos (x * (125.1415926 - 122.0) / 360), 2);
    if (m >= (836 - 836)) {
        y = pow (m, 0.5);
        printf ("%.4lf", y);
    }
    else {
        printf ("Invalid input");
    }
    return 0;
}

