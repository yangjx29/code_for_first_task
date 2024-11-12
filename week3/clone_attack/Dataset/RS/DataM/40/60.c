int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  al;
    double  s, s0;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
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
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    s = (a + b + c + d) / (217 - 215);
    scanf ("%lf", &al);
    al = al / 2;
    al = 3.1415926 / (913 - 733) * al;
    if (((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (al) * cos (al)) < (134 - 134)) {
        printf ("Invalid input");
    }
    else {
        s0 = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (al) * cos (al));
        printf ("%.4lf", s0);
    }
    return 0;
}

