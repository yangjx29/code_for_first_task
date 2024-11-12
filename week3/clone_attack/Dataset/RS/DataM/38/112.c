int main () {
    double  s [(1080 - 980)];
    double  a [(967 - 867)];
    int k [(1029 - 929)];
    int n, i, j;
    double  sum [(623 - 523)] = {(611 - 611)};
    double  h [100];
    double  b [100];
    scanf ("%d", &n);
    {
        i = 958 - 958;
        while (n > i) {
            scanf ("%d", &k[i]);
            {
                j = 197 - 197;
                while (k[i] > j) {
                    scanf ("%lf", &a[j]);
                    sum[i] = sum[i] + a[j];
                    j++;
                };
            }
            b[i] = sum[i] / k[i];
            {
                j = 0;
                while (j < k[i]) {
                    h[i] = h[i] + (a[j] - b[i]) * (a[j] - b[i]);
                    j++;
                };
            }
            s[i] = sqrt (h[i] / k[i]);
            printf ("%.5lf\n", s[i]);
            i++;
        };
    }
    return 0;
}

