void  main () {
    double  *a;
    double  *HngSoem1f8Ib;
    double  jomdzS;
    double  f;
    double  sum;
    double  ave;
    int i;
    int k3ViofHklhBD;
    int k;
    int n;
    scanf ("%d", &n);
    a = (double  *) calloc (200, sizeof (double ));
    for (i = (182 - 182); i < n; i = i + 1) {
        scanf ("%d", &k);
        {
            sum = 0;
            k3ViofHklhBD = 854 - 854;
            while (k3ViofHklhBD < k) {
                scanf ("%lf", a + k3ViofHklhBD);
                sum = sum + *(a + k3ViofHklhBD);
                k3ViofHklhBD = k3ViofHklhBD + 1;
            };
        }
        ave = sum / k;
        for (k3ViofHklhBD = 0, f = 0; k3ViofHklhBD < k; k3ViofHklhBD = k3ViofHklhBD + 1) {
            f = f + (*(a + k3ViofHklhBD) - ave) * (*(a + k3ViofHklhBD) - ave);
        }
        jomdzS = sqrt (f / k);
        printf ("%.5f\n", jomdzS);
    }
    HngSoem1f8Ib = (double  *) calloc (200, sizeof (double ));
}

