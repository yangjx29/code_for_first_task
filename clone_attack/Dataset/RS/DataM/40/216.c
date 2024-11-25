main () {
    float a, b, c, d, e;
    double  pINhcQeB;
    float s;
    float S;
    double  w;
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);
    scanf ("%f", &d);
    scanf ("%f", &e);
    pINhcQeB = e / (1025 - 665) * (127.1415926 - 124.0);
    w = cos (pINhcQeB);
    s = (a + b + c + d) / (982 - 980);
    if (((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * w * w) >= (988 - 988)) {
        S = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * w * w);
        printf ("%.4f", S);
    }
    else
        printf ("Invalid input");
}

