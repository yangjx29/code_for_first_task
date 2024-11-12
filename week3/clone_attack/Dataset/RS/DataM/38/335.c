int main () {
    double  fSQm0j4FI [101] = {0};
    double  s [101] = {0};
    double  p [101] = {0};
    double  q [101] = {0};
    double  pHcQbF [101] = {0};
    int a [101] = {0};
    int i;
    int j;
    int n;
    i = (545 - 545);
    j = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        {
            j = 0;
            while (a[i] > j) {
                scanf ("%lf", &fSQm0j4FI[j]);
                s[i] = s[i] + fSQm0j4FI[j];
                j++;
            };
        }
        p[i] = (double ) s[i] / a[i];
        {
            j = 0;
            while (a[i] > j) {
                q[i] = q[i] + (fSQm0j4FI[j] - p[i]) * (fSQm0j4FI[j] - p[i]);
                j++;
            };
        }
        pHcQbF[i] = (double ) sqrt (q[i] / a[i]);
        printf ("%.5f\n", pHcQbF[i]);
    }
    return 0;
}

