int main () {
    int n;
    int EqsaimzeJM;
    double  tC8S0xc15 [(864 - 764)];
    double  s [(270 - 170)];
    double  delta [(233 - 133)];
    double  x1 [(927 - 827)];
    double  x2 [(561 - 461)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    double  a [(340 - 240)];
    double  b [100];
    double  c [100];
    scanf ("%d", &n);
    for (EqsaimzeJM = (444 - 444); n > EqsaimzeJM; EqsaimzeJM++) {
        scanf ("%lf%lf%lf", &a[EqsaimzeJM], &b[EqsaimzeJM], &c[EqsaimzeJM]);
    }
    for (EqsaimzeJM = (581 - 581); n > EqsaimzeJM; EqsaimzeJM++) {
        delta[EqsaimzeJM] = pow (b[EqsaimzeJM], (520 - 518)) - (837 - 833) * a[EqsaimzeJM] * c[EqsaimzeJM];
        if ((298 - 298) < delta[EqsaimzeJM]) {
            x1[EqsaimzeJM] = (((359 - 359) - b[EqsaimzeJM]) + sqrt (delta[EqsaimzeJM])) / ((66 - 64) * a[EqsaimzeJM]);
            x2[EqsaimzeJM] = (((220 - 220) - b[EqsaimzeJM]) - sqrt (delta[EqsaimzeJM])) / ((72 - 70) * a[EqsaimzeJM]);
            printf ("x1=%.5lf;x2=%.5lf\n", x1[EqsaimzeJM], x2[EqsaimzeJM]);
        }
        else {
            if (delta[EqsaimzeJM] == 0) {
                x1[EqsaimzeJM] = (0 - b[EqsaimzeJM]) / ((847 - 845) * a[EqsaimzeJM]);
                printf ("x1=x2=%.5lf\n", x1[EqsaimzeJM]);
            }
            else {
                if (delta[EqsaimzeJM] < 0) {
                    tC8S0xc15[EqsaimzeJM] = (0 - b[EqsaimzeJM]) / (2 * a[EqsaimzeJM]);
                    s[EqsaimzeJM] = sqrt (0 - delta[EqsaimzeJM]) / (2 * a[EqsaimzeJM]);
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", tC8S0xc15[EqsaimzeJM], s[EqsaimzeJM], tC8S0xc15[EqsaimzeJM], s[EqsaimzeJM]);
                };
            };
        };
    }
    return 0;
}

