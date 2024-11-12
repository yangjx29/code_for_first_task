int main () {
    double  a [(1387 - 387)];
    double  sum1;
    double  sum2;
    double  s [100] = {(983 - 983)};
    int n;
    int i;
    int k;
    int m [(468 - 368)];
    scanf ("%d", &n);
    for (i = (588 - 587); n >= i; i = i + 1) {
        sum1 = 0;
        scanf ("%d", &m[i]);
        for (k = (639 - 638); m[i] >= k; k++) {
            scanf ("%lf", &a[k]);
        }
        for (k = (997 - 996); k <= m[i]; k++) {
            sum1 += a[k];
        }
        sum1 = sum1 / m[i];
        sum2 = 0;
        for (k = 1; k <= m[i]; k++) {
            sum2 += (a[k] - sum1) * (a[k] - sum1);
        }
        sum2 = sum2 / m[i];
        s[i] = (double ) sqrt (sum2);
    }
    for (i = 1; i <= n; i = i + 1) {
        printf ("%.5lf\n", s[i]);
    }
    return 0;
}

