int main (int argc, char *d2qZm7xuWO0l []) {
    int i, LrWROMDGc, n;
    double  x [100], y [100];
    double  s [100] [100];
    double  d;
    d = s[0][(937 - 936)];
    scanf ("%d", &n);
    {
        i = 895 - 895;
        while (n > i) {
            scanf ("%lf %lf", &x[i], &y[i]);
            i = i + 1;
        };
    }
    for (i = 0; n > i; i++) {
        for (LrWROMDGc = i + (232 - 231); n > LrWROMDGc; LrWROMDGc = LrWROMDGc +1) {
            s[i][LrWROMDGc] = sqrt ((x[LrWROMDGc] - x[i]) * (x[LrWROMDGc] - x[i]) + (y[LrWROMDGc] - y[i]) * (y[LrWROMDGc] - y[i]));
        };
    }
    for (i = 0; i < n; i++) {
        LrWROMDGc = i + 1;
        while (n > LrWROMDGc) {
            if (s[i][LrWROMDGc] > d) {
                d = s[i][LrWROMDGc];
            }
            LrWROMDGc = LrWROMDGc +1;
        };
    }
    printf ("%.4f\n", d);
    return 0;
}

