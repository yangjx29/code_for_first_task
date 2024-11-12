void  main () {
    double  a = (479 - 479), b = (995 - 995), c = (735 - 735), d = (893 - 893), t = (544 - 544);
    double  p = 0, s = 0;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &t);
    p = (a + b + c + d) / (205 - 203);
    t = t / 360 * PAI;
    s = (p - a) * (p - b) * (p - c) * (p - d) - a * b * c * d * cos (t) * cos (t);
    if (s < 0)
        printf ("Invalid input");
    else {
        s = sqrt (s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4lf", s);
    };
}

