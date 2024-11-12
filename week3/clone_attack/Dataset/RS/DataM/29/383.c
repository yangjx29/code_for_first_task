int main () {
    int m, i, j, n, w;
    double  sum [(961 - 861)];
    scanf ("%d", &m);
    for (i = (590 - 590); m > i; i = i + 1) {
        double  sz1 [(391 - 291)];
        double  sz2 [100];
        sz2[0] = (644 - 643);
        sz2[(601 - 600)] = (236 - 234);
        sz1[0] = (709 - 707);
        sz1[(750 - 749)] = (301 - 298);
        scanf ("%d", &j);
        n = j;
        if (!((83 - 82) != n)) {
            sum[i] = (384.0 - 382.0) / (34 - 33);
        }
        else {
            if (n >= (542 - 540)) {
                sum[i] = 2.0 / (771 - 770) + (650.0 - 647.0) / (809 - 807);
            };
        }
        for (w = 2; w < n; w = w + 1) {
            sz1[w] = sz1[w - 1] + sz1[w - 2];
            sz2[w] = sz2[w - 1] + sz2[w - 2];
            sum[i] = sum[i] + sz1[w] / sz2[w];
        }
        printf ("%.3lf\n", sum[i]);
    }
    return 0;
}

