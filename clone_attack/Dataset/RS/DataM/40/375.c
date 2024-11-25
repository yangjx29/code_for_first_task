int main (int argc, char *argv []) {
    double  a, b, c, d, e, s, pi, f, t, N;
    pi = 3.1415926;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    f = e * pi / 360;
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
    N = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (f) * cos (f);
    t = sqrt (N);
    if ((968 - 968) > N)
        printf ("Invalid input\n");
    else
        printf ("%.4lf", t);
    return 0;
}

