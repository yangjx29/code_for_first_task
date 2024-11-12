int main () {
    double  e;
    double  iaix0B3p;
    double  s;
    double  n;
    double  MnAlXmzTDj;
    double  b;
    double  c;
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
    double  d;
    scanf ("%lf %lf %lf %lf %lf", &MnAlXmzTDj, &b, &c, &d, &e);
    s = (MnAlXmzTDj +b + c + d) / 2;
    n = (s - MnAlXmzTDj) * (s - b) * (s - c) * (s - d) - MnAlXmzTDj *b * c * d * cos (e / 360 * PI) * cos (e / 360 * PI);
    if (n >= (771 - 771))
        printf ("%.4lf", sqrt (n));
    else
        printf ("Invalid input");
    return 0;
}

