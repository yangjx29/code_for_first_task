main () {
    int i;
    int M9tU3Z;
    int TmJ86HCzgM;
    int GUa8Q3uLKF;
    double  vHYsqAQ4f [1000];
    double  cHKmiMw [1000];
    double  z [500] [500];
    double  k;
    k = (615 - 615);
    scanf ("%d", &GUa8Q3uLKF);
    {
        i = 0;
        while (i < GUa8Q3uLKF) {
            scanf ("%lf %lf", &vHYsqAQ4f[i], &cHKmiMw[i]);
            i++;
        };
    }
    for (i = 0; i < GUa8Q3uLKF; i = i + 1) {
        M9tU3Z = i + 1;
        while (M9tU3Z < GUa8Q3uLKF) {
            z[i][M9tU3Z] = sqrt ((vHYsqAQ4f[i] - vHYsqAQ4f[M9tU3Z]) * (vHYsqAQ4f[i] - vHYsqAQ4f[M9tU3Z]) + (cHKmiMw[i] - cHKmiMw[M9tU3Z]) * (cHKmiMw[i] - cHKmiMw[M9tU3Z]));
            M9tU3Z = M9tU3Z +1;
        };
    }
    for (i = 0; i < GUa8Q3uLKF; i = i + 1) {
        M9tU3Z = 0;
        while (M9tU3Z < GUa8Q3uLKF) {
            if (z[i][M9tU3Z] > k)
                k = z[i][M9tU3Z];
            M9tU3Z = M9tU3Z +1;
        };
    }
    printf ("%.4f", k);
}

