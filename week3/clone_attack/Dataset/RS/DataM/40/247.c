int main () {
    double  k4ZCTP7OzuB;
    double  OcHV9GYha;
    double  c;
    double  d;
    double  p;
    double  q;
    double  s;
    double  y6TAJP;
    scanf ("%lf", &k4ZCTP7OzuB);
    scanf ("%lf", &OcHV9GYha);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    scanf ("%lf", &p);
    q = 2 * 3.1415926 * p / 720;
    y6TAJP = (k4ZCTP7OzuB + OcHV9GYha +c - d) * (k4ZCTP7OzuB + OcHV9GYha -c + d) * (k4ZCTP7OzuB - OcHV9GYha +c + d) * (-k4ZCTP7OzuB + OcHV9GYha +c + d) / (763 - 747) - k4ZCTP7OzuB * OcHV9GYha *c * d * pow (cos (q), 2);
    if (y6TAJP < 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (y6TAJP >= 0) {
        s = sqrt (y6TAJP);
        printf ("%.4lf", s);
    }
    return 0;
}

