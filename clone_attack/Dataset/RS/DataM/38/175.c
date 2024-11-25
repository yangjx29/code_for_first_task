int main () {
    double  hTMJ3OSzH5bG;
    double  nK8xS4VYvlQZ;
    double  rl3SDjPXb2;
    double  *blNmG0UFAiZ8;
    hTMJ3OSzH5bG = 0.0;
    nK8xS4VYvlQZ = 0.0;
    int R6XamQT0U;
    int ReL0OcN;
    int WL5bj3i;
    scanf ("%d", &R6XamQT0U);
    {
        WL5bj3i = 0;
        while (R6XamQT0U > WL5bj3i) {
            double  *rlESwCRq = (double  *) malloc (sizeof (double ) * ReL0OcN);
            free (rlESwCRq);
            WL5bj3i = WL5bj3i +1;
            scanf ("%d", &ReL0OcN);
            {
                blNmG0UFAiZ8 = rlESwCRq;
                while (rlESwCRq + ReL0OcN > blNmG0UFAiZ8) {
                    scanf ("%lf", blNmG0UFAiZ8);
                    hTMJ3OSzH5bG += *blNmG0UFAiZ8;
                    blNmG0UFAiZ8 = blNmG0UFAiZ8 + 1;
                };
            }
            hTMJ3OSzH5bG = hTMJ3OSzH5bG / ReL0OcN;
            {
                blNmG0UFAiZ8 = rlESwCRq;
                while (rlESwCRq + ReL0OcN > blNmG0UFAiZ8) {
                    nK8xS4VYvlQZ = nK8xS4VYvlQZ + (*blNmG0UFAiZ8 - hTMJ3OSzH5bG) * (*blNmG0UFAiZ8 - hTMJ3OSzH5bG);
                    blNmG0UFAiZ8 = blNmG0UFAiZ8 + 1;
                };
            }
            hTMJ3OSzH5bG = 0;
            nK8xS4VYvlQZ = nK8xS4VYvlQZ / ReL0OcN;
            rl3SDjPXb2 = pow (nK8xS4VYvlQZ, (813.5 - 813.0));
            printf ("%.5f\n", rl3SDjPXb2);
            nK8xS4VYvlQZ = 0;
        };
    }
    return 0;
}

