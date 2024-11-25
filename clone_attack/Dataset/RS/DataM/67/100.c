int main () {
    double  a;
    double  prV2AtqBF;
    int zLr1Zh5K;
    int PsnhNoKTyq;
    int xLGpRaj2Z;
    double  *s = (double  *) malloc (sizeof (double ) * zLr1Zh5K);
    double  *NU8D2PM = (double  *) malloc (sizeof (double ) * zLr1Zh5K);
    scanf ("%d", &zLr1Zh5K);
    for (PsnhNoKTyq = 0; zLr1Zh5K > PsnhNoKTyq; PsnhNoKTyq = PsnhNoKTyq +1) {
        scanf ("%d %d", &s[PsnhNoKTyq], &NU8D2PM[PsnhNoKTyq]);
    }
    {
        PsnhNoKTyq = 1;
        while (PsnhNoKTyq < zLr1Zh5K) {
            a = NU8D2PM[0] * 1000 / s[0];
            prV2AtqBF = NU8D2PM[PsnhNoKTyq] * 1000 / s[PsnhNoKTyq];
            PsnhNoKTyq++;
            if (prV2AtqBF - a > 50) {
                printf ("better\n");
            }
            else {
                if (a - prV2AtqBF > 50) {
                    printf ("worse\n");
                }
                else {
                    printf ("same\n");
                };
            };
        };
    }
    return 0;
}

