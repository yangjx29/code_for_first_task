void  main (void ) {
    int yRsHivdScXF;
    scanf ("%d", &yRsHivdScXF);
    for (; 0 < yRsHivdScXF; yRsHivdScXF = yRsHivdScXF - 1) {
        double  W9BsSOP25;
        double  l5Ylh8Pmt7F;
        W9BsSOP25 = 0;
        l5Ylh8Pmt7F = 0;
        int LMCfHzul;
        double  R2SnkMh [100];
        double  *p = R2SnkMh;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        int wibjgeOw9EQ;
        scanf ("%d", &wibjgeOw9EQ);
        for (LMCfHzul = 0; LMCfHzul <= wibjgeOw9EQ - 1; LMCfHzul = LMCfHzul +1)
            scanf ("%lf", &R2SnkMh[LMCfHzul]);
        for (LMCfHzul = 0; LMCfHzul <= wibjgeOw9EQ - 1; LMCfHzul = LMCfHzul +1) {
            W9BsSOP25 = W9BsSOP25 +*(p + LMCfHzul) * *(p + LMCfHzul);
            l5Ylh8Pmt7F = l5Ylh8Pmt7F + *(p + LMCfHzul);
        }
        W9BsSOP25 /= wibjgeOw9EQ;
        l5Ylh8Pmt7F = l5Ylh8Pmt7F / (wibjgeOw9EQ);
        printf ("%.5lf\n", sqrt (W9BsSOP25 -l5Ylh8Pmt7F * l5Ylh8Pmt7F));
    };
}

