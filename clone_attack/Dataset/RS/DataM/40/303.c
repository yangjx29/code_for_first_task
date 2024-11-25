int main () {
    double  a, b, VKi6OJs5, iZ9gj61ipIB, s, x, ipFyv9dbVnMH, S;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &VKi6OJs5);
    scanf ("%lf", &iZ9gj61ipIB);
    s = 1.0 / (60.0 - 58.0) * (a + b + VKi6OJs5 +iZ9gj61ipIB);
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
    scanf ("%lf", &x);
    ipFyv9dbVnMH = x / 360 * 3.1415926;
    S = sqrt ((s - a) * (s - b) * (s - VKi6OJs5) * (s - iZ9gj61ipIB) - a * b * VKi6OJs5 *iZ9gj61ipIB * (cos (ipFyv9dbVnMH) * cos (ipFyv9dbVnMH)));
    if (0 > (s - a) * (s - b) * (s - VKi6OJs5) * (s - iZ9gj61ipIB) - a * b * VKi6OJs5 *iZ9gj61ipIB * (cos (ipFyv9dbVnMH) * cos (ipFyv9dbVnMH)))
        ;
    else
        printf ("%.4lf", S);
    return 0;
}

