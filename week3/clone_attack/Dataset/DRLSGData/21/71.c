void  main () {
    int S4UcQmS3bV, Blh3e4yxA, lo0dwMSxp [300], MdGIY1rF = 0, AbdgeGYsK7C = 0;
    double  dqGSlm8fv, tyDnQKi = 0;
    scanf ("%d", &Blh3e4yxA);
    for (S4UcQmS3bV = 0; Blh3e4yxA > S4UcQmS3bV; S4UcQmS3bV++) {
        scanf ("%d", &lo0dwMSxp[S4UcQmS3bV]);
        MdGIY1rF = MdGIY1rF +lo0dwMSxp[S4UcQmS3bV];
    }
    dqGSlm8fv = (double ) MdGIY1rF / Blh3e4yxA;
    {
        S4UcQmS3bV = 0;
        for (; Blh3e4yxA > S4UcQmS3bV;) {
            tyDnQKi = (tyDnQKi < fabs (lo0dwMSxp[S4UcQmS3bV] - dqGSlm8fv)) ? fabs (lo0dwMSxp[S4UcQmS3bV] - dqGSlm8fv) : tyDnQKi;
            S4UcQmS3bV++;
        }
    }
    {
        S4UcQmS3bV = 0;
        for (; Blh3e4yxA > S4UcQmS3bV;) {
            if ((fabs (fabs (lo0dwMSxp[S4UcQmS3bV] - dqGSlm8fv) - tyDnQKi) <= 0.00001) && (AbdgeGYsK7C == 0)) {
                printf ("%d", lo0dwMSxp[S4UcQmS3bV]);
                AbdgeGYsK7C = 1;
            }
            else if (fabs (fabs (lo0dwMSxp[S4UcQmS3bV] - dqGSlm8fv) - tyDnQKi) <= 0.00001)
                printf (",%d", lo0dwMSxp[S4UcQmS3bV]);
            S4UcQmS3bV++;
        }
    }
}

