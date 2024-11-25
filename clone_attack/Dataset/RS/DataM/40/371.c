int main () {
    double  a;
    double  U3Jxo0tEnB1l;
    double  c;
    double  d;
    double  I5af1EA;
    double  S;
    double  e;
    double  m;
    double  n;
    scanf ("%lf %lf %lf %lf %lf", &a, &U3Jxo0tEnB1l, &c, &d, &m);
    I5af1EA = (a + U3Jxo0tEnB1l +c + d) / 2;
    n = 3.1415926 * m / 360;
    e = ((I5af1EA -a) * (I5af1EA -U3Jxo0tEnB1l) * (I5af1EA -c) * (I5af1EA -d) - a * U3Jxo0tEnB1l *c * d * cos (n) * cos (n));
    if (e >= 0) {
        S = sqrt (e);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4lf", S);
    }
    else {
        printf ("Invalid input");
    }
    return 0;
}

