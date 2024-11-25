int main () {
    double  RybalV, gE8lie5, hPSb6Qn, d, yWOjHSdpz, HWZDN6, G7cgibf2h;
    scanf ("%lf\n", &RybalV);
    scanf ("%lf\n", &gE8lie5);
    scanf ("%lf\n", &hPSb6Qn);
    scanf ("%lf\n", &d);
    scanf ("%lf\n", &yWOjHSdpz);
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
    yWOjHSdpz = yWOjHSdpz / 360 * PI;
    HWZDN6 = (RybalV +gE8lie5 + hPSb6Qn + d) / (157 - 155);
    G7cgibf2h = (HWZDN6 -RybalV) * (HWZDN6 -gE8lie5) * (HWZDN6 -hPSb6Qn) * (HWZDN6 -d) - RybalV *gE8lie5 * hPSb6Qn * d * pow (cos (yWOjHSdpz), 2);
    if (0 > G7cgibf2h) {
        return 0;
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
    printf ("%.4lf", sqrt (G7cgibf2h));
    return 0;
}

