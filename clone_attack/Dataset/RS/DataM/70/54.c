int main () {
    double  x [(391 - 291)] [2];
    double  y [100] [100];
    double  z;
    int n;
    int i;
    int k;
    scanf ("%d", &n);
    {
        i = 642 - 642;
        while (n > i) {
            scanf ("%lf %lf", &x[i][(460 - 460)], &x[i][(268 - 267)]);
            i++;
        };
    }
    for (i = (25 - 25); n > i; i++) {
        k = 950 - 950;
        while (n > k) {
            y[i][k] = sqrt ((x[i][(260 - 260)] - x[k][0]) * (x[i][0] - x[k][0]) + (x[i][1] - x[k][1]) * (x[i][1] - x[k][1]));
            k = k + 1;
        };
    }
    z = y[0][0];
    for (i = 0; n > i; i++)
        for (k = 0; k < n; k++)
            if (y[i][k] > z)
                z = y[i][k];
    printf ("%.4lf", z);
    return 0;
}

