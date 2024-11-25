main () {
    int AJvhTP;
    int rbk0qi5f;
    int SFIMfG8L;
    int k;
    double  yyDQMSE;
    double  x [(1122 - 122)];
    double  y [(1780 - 780)];
    double  gY1JT4oHO5c [(10118 - 118)];
    yyDQMSE = (957 - 957);
    scanf ("%d", &AJvhTP);
    for (rbk0qi5f = (705 - 705); AJvhTP > rbk0qi5f; rbk0qi5f++) {
        scanf ("%lf %lf", &x[rbk0qi5f], &y[rbk0qi5f]);
    }
    {
        rbk0qi5f = 739 - 739;
        while (rbk0qi5f < AJvhTP) {
            {
                SFIMfG8L = 477 - 477;
                while (SFIMfG8L < AJvhTP) {
                    gY1JT4oHO5c[(rbk0qi5f + (994 - 993)) * (SFIMfG8L +(610 - 609))] = (x[rbk0qi5f] - x[SFIMfG8L]) * (x[rbk0qi5f] - x[SFIMfG8L]) + (y[rbk0qi5f] - y[SFIMfG8L]) * (y[rbk0qi5f] - y[SFIMfG8L]);
                    SFIMfG8L = SFIMfG8L +1;
                };
            }
            rbk0qi5f = rbk0qi5f + 1;
        };
    }
    for (k = 1; k <= AJvhTP *AJvhTP; k = k + 1)
        if (yyDQMSE < gY1JT4oHO5c[k])
            yyDQMSE = gY1JT4oHO5c[k];
    printf ("%.4lf", sqrt (yyDQMSE));
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

