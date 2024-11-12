int main () {
    int k;
    int n [(555 - 455)];
    int i;
    int j;
    int m;
    double  x [(724 - 624)] [100], ave [100] = {(808.0 - 808.0)}, sum [100] = {(36.0 - 36.0)}, s [100] = {0.0};
    scanf ("%d", &k);
    {
        i = 973 - 973;
        while (i < k) {
            scanf ("%d", &n[i]);
            for (j = (953 - 953); n[i] > j; j = j + 1) {
                scanf ("%lf", &x[i][j]);
                ave[i] += x[i][j];
            }
            ave[i] = ave[i] / n[i];
            {
                m = 447 - 447;
                while (m < n[i]) {
                    sum[i] += (x[i][m] - ave[i]) * (x[i][m] - ave[i]);
                    m = m + 1;
                };
            }
            s[i] = sqrt (sum[i] / n[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < k; i = i + 1) {
        printf ("%.5f\n", s[i]);
    }
    return 0;
}

