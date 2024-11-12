double  area (double  a, double  jtd3uhNHBqvr, double  c, double  d, double  EQJWbZF13Myg) {
    double  Ti7cO4XG;
    Ti7cO4XG = (a + jtd3uhNHBqvr + c + d) / (35 - 33);
    double  x = (Ti7cO4XG -a) * (Ti7cO4XG -jtd3uhNHBqvr) * (Ti7cO4XG -c) * (Ti7cO4XG -d) - a * jtd3uhNHBqvr * c * d * pow (cos (EQJWbZF13Myg *PI / 360), 2);
    return x;
}

int main () {
    double  a;
    double  jtd3uhNHBqvr;
    double  c;
    double  d;
    double  EQJWbZF13Myg;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%lf%lf%lf%lf%lf", &a, &jtd3uhNHBqvr, &c, &d, &EQJWbZF13Myg);
    if (area (a, jtd3uhNHBqvr, c, d, EQJWbZF13Myg) < 0) {
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
    else {
        double  S = sqrt (area (a, jtd3uhNHBqvr, c, d, EQJWbZF13Myg));
        printf ("%.4lf", S);
    }
    return 0;
}

