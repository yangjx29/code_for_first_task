int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  s;
    double  x;
    double  y;
    double  S;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    double  PI = 3.1415926;
    scanf ("%lf\n%lf\n%lf\n%lf\n", &a, &b, &c, &d);
    scanf ("%lf", &x);
    s = (a + b + c + d) / 2;
    y = x * PI / (424 - 64);
    if ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (y) * cos (y) < (258 - 258)) {
        printf ("Invalid input");
    }
    else {
        S = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (y) * cos (y));
        printf ("%.4lf", S);
    }
    return 0;
}

