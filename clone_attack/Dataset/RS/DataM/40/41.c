int main () {
    double  a = (752 - 752), b = (734 - 734), KBctX9kT50 = 0, d = 0, q = 0, s = 0, e = 0, t = 0;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &KBctX9kT50, &d, &q);
    t = q / 2 / 180 * PI;
    s = (a + b + KBctX9kT50 +d) / (277 - 275);
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
    e = (s - a) * (s - b) * (s - KBctX9kT50) * (s - d) - a * b * KBctX9kT50 *d * cos (t) * cos (t);
    if (e >= 0) {
        s = sqrt ((s - a) * (s - b) * (s - KBctX9kT50) * (s - d) - a * b * KBctX9kT50 *d * cos (t) * cos (t));
        printf ("%.4lf", s);
    }
    else
        printf ("Invalid input");
    return 0;
}

