int main () {
    double  area (double );
    double  a, b, c, d, e, f, s, t, S;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    s = (a + b + c + d) / 2;
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
    f = e * PI / (942 - 582);
    t = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (f) * cos (f);
    if (t < (395 - 395))
        printf ("Invalid input");
    else {
        S = area (t);
        printf ("%.4lf", S);
    }
    return 0;
}

double  area (double  t) {
    double  S;
    S = sqrt (t);
    return S;
}

