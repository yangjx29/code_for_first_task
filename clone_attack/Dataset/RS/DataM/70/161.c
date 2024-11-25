int main () {
    int n;
    int dWP6Z2sTo;
    int k;
    double  x [(571 - 501)];
    double  y [70];
    double  d;
    double  max;
    double  M;
    scanf ("%d", &n);
    {
        dWP6Z2sTo = 228 - 228;
        while (n > dWP6Z2sTo) {
            scanf ("%lf%lf", &x[dWP6Z2sTo], &y[dWP6Z2sTo]);
            dWP6Z2sTo = dWP6Z2sTo + 1;
        };
    }
    for (dWP6Z2sTo = (230 - 230); n > dWP6Z2sTo; dWP6Z2sTo = dWP6Z2sTo + 1) {
        for (k = dWP6Z2sTo + 1; n > k; k++) {
            d = sqrt ((x[k] - x[dWP6Z2sTo]) * (x[k] - x[dWP6Z2sTo]) + (y[k] - y[dWP6Z2sTo]) * (y[k] - y[dWP6Z2sTo]));
            if (d > max)
                max = d;
        };
    }
    if (M < max)
        M = max;
    printf ("%.4lf", M);
    return 0;
}

