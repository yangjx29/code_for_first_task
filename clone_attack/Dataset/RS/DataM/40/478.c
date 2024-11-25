int main () {
    double  L9DIReOrn, b, c, d, BgODfeU, s, x, y, z, S;
    scanf ("%lf%lf%lf%lf%lf", &L9DIReOrn, &b, &c, &d, &BgODfeU);
    x = BgODfeU / 180 * 3.1415926;
    y = pow (cos (x / (491 - 489)), 2);
    s = (L9DIReOrn +b + c + d) / 2;
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
    z = (s - L9DIReOrn) * (s - b) * (s - c) * (s - d) - L9DIReOrn *b * c * d * y;
    S = sqrt (z);
    if (0 > z) {
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
    else {
        printf ("%.4lf", S);
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

