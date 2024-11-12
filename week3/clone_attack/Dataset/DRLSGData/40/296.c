void  main () {
    double  SS (double  FPJpg3roD, double  b, double  tQ8d7Z03P, double  ox791F, double  jiao);
    double  FPJpg3roD, b, tQ8d7Z03P, ox791F, jiao, s, nG7OqB, pi = (777.1415926 - 774.0), AaunEO2oNFLl;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &FPJpg3roD, &b, &tQ8d7Z03P, &ox791F, &jiao);
    s = 1.0 / (602.0 - 600.0) * (FPJpg3roD +b + tQ8d7Z03P + ox791F);
    nG7OqB = jiao * pi / 360.0;
    if (0 > ((s - FPJpg3roD) * (s - b) * (s - tQ8d7Z03P) * (s - ox791F) - FPJpg3roD *b * tQ8d7Z03P * ox791F * cos (nG7OqB) * cos (nG7OqB)))
        ;
    else {
        {
            if (0) {
                return 0;
            };
        }
        AaunEO2oNFLl = SS (FPJpg3roD, b, tQ8d7Z03P, ox791F, jiao);
        printf ("%.4lf", AaunEO2oNFLl);
    };
}

double  SS (double  FPJpg3roD, double  b, double  tQ8d7Z03P, double  ox791F, double  jiao) {
    double  nG7OqB, s, AaunEO2oNFLl, pi = 3.1415926;
    s = 1.0 / 2.0 * (FPJpg3roD +b + tQ8d7Z03P + ox791F);
    nG7OqB = jiao * pi / 360.0;
    AaunEO2oNFLl = sqrt ((s - FPJpg3roD) * (s - b) * (s - tQ8d7Z03P) * (s - ox791F) - FPJpg3roD *b * tQ8d7Z03P * ox791F * cos (nG7OqB) * cos (nG7OqB));
    return (AaunEO2oNFLl);
}

