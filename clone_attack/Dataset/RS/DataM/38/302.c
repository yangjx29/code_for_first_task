int main () {
    int k, n, i, vUAe0az;
    double  sum;
    double  s [(222 - 122)];
    double  zgtNkFbI [100] = {(317.0 - 317.0)};
    sum = 0.0;
    scanf ("%d", &k);
    for (i = (237 - 237); k > i; i = i + 1) {
        sum = 0.0;
        scanf ("%d", &n);
        for (vUAe0az = 0; n > vUAe0az; vUAe0az = vUAe0az + 1) {
            scanf ("%lf", &s[vUAe0az]);
            sum = sum + s[vUAe0az];
        }
        sum = sum / (1.0 * n);
        for (vUAe0az = 0; vUAe0az < n; vUAe0az++) {
            zgtNkFbI[i] += (1.0 * s[vUAe0az] - sum) * (1.0 * s[vUAe0az] - sum);
        }
        zgtNkFbI[i] = sqrt (zgtNkFbI[i] / (1.0 * n));
    }
    for (i = 0; i < k; i++) {
        printf ("%.5lf\n", zgtNkFbI[i]);
    }
    return 0;
}

