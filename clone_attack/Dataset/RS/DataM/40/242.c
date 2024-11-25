void  asdf () {
    double  a, b, c, d, t, s, S;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
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
    s = (a + b + c + d) / 2;
    scanf ("%lf", &t);
    t = t * 3.1415926 / 360;
    if (((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (t) * cos (t)) >= 0) {
        S = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (t) * cos (t));
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
    else
        printf ("Invalid input");
}

void  main () {
    void  asdf ();
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
    }
    asdf ();
}

