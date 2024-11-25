void  main () {
    double  jyQRZdN, AcYQH8o, TBcMpFmAS, NdW2LRrt4;
    double  vyCUf9eN6m2i, R1GTlBzW5VI, sLZXxhTie, GQIAPcF, wlPJsA6E;
    scanf ("%lf%lf%lf%lf%lf", &vyCUf9eN6m2i, &R1GTlBzW5VI, &sLZXxhTie, &GQIAPcF, &wlPJsA6E);
    TBcMpFmAS = wlPJsA6E / 2;
    NdW2LRrt4 = cos (TBcMpFmAS / 180 * PI);
    jyQRZdN = (vyCUf9eN6m2i + R1GTlBzW5VI +sLZXxhTie + GQIAPcF) / 2;
    if (((jyQRZdN - vyCUf9eN6m2i) * (jyQRZdN - R1GTlBzW5VI) * (jyQRZdN - sLZXxhTie) * (jyQRZdN - GQIAPcF) - vyCUf9eN6m2i * R1GTlBzW5VI *sLZXxhTie * GQIAPcF *NdW2LRrt4*NdW2LRrt4) < 0)
        printf ("Invalid input");
    else {
        AcYQH8o = sqrt ((jyQRZdN - vyCUf9eN6m2i) * (jyQRZdN - R1GTlBzW5VI) * (jyQRZdN - sLZXxhTie) * (jyQRZdN - GQIAPcF) - vyCUf9eN6m2i * R1GTlBzW5VI *sLZXxhTie * GQIAPcF *NdW2LRrt4*NdW2LRrt4);
        printf ("%.4lf", AcYQH8o);
    };
}

