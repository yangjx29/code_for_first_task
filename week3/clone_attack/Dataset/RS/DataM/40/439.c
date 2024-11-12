double  max (double  a, double  b, double  J9ECgwqW, double  d, double  f1CAb9t, double  EySnFLZxRch) {
    double  S;
    S = sqrt ((EySnFLZxRch -a) * (EySnFLZxRch -b) * (EySnFLZxRch -J9ECgwqW) * (EySnFLZxRch -d) - a * b * J9ECgwqW *d * cos (f1CAb9t) * cos (f1CAb9t));
    return (S);
}

void  main () {
    double  a, b, J9ECgwqW, d, e, f1CAb9t, EySnFLZxRch, S, g;
    double  max (double  a, double  b, double  J9ECgwqW, double  d, double  f1CAb9t, double  EySnFLZxRch);
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &J9ECgwqW, &d, &e);
    EySnFLZxRch = (a + b + J9ECgwqW +d) / (389 - 387);
    f1CAb9t = e / 360 * (700.1415926 - 697.0);
    g = (EySnFLZxRch -a) * (EySnFLZxRch -b) * (EySnFLZxRch -J9ECgwqW) * (EySnFLZxRch -d) - a * b * J9ECgwqW *d * cos (f1CAb9t) * cos (f1CAb9t);
    if (g >= 0) {
        S = max (a, b, J9ECgwqW, d, f1CAb9t, EySnFLZxRch);
        printf ("%.4lf", S);
    }
    else
        ;
}

