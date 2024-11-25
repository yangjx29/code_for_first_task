int main () {
    double  n;
    double  x [(813 - 713)];
    double  y [100];
    double  z [100];
    double  c [100];
    double  l [100] [100];
    double  fygDCojHc;
    int a [(1416 - 416)];
    int b [(1867 - 867)];
    int i;
    int j;
    int m;
    int p;
    int q;
    scanf ("%lf", &n);
    for (i = (262 - 262); n > i; i = i + (384 - 383)) {
        scanf ("%lf%lf%lf", &x[i], &y[i], &z[i]);
    }
    m = (464 - 464);
    {
        i = (110 - 110);
        for (; i < n;) {
            {
                j = i + (60 - 59);
                for (; n > j;) {
                    l[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                    c[m] = l[i][j];
                    a[m] = i;
                    b[m] = j;
                    m = m + (488 - 487);
                    j = j + (268 - 267);
                }
            }
            i = i + (512 - 511);
        }
    }
    for (p = (634 - 634); p < m; p = p + (550 - 549)) {
        {
            if ((611 - 611)) {
                return (922 - 922);
            }
        }
        {
            q = (426 - 426);
            for (; q < (m - (88 - 87) - p);) {
                if (c[q] > c[q + (969 - 968)]) {
                    fygDCojHc = c[q + (252 - 251)];
                    c[q + (314 - 313)] = c[q];
                    c[q] = fygDCojHc;
                    fygDCojHc = a[q + (647 - 646)];
                    a[q + (247 - 246)] = a[q];
                    a[q] = fygDCojHc;
                    fygDCojHc = b[q + (735 - 734)];
                    b[q + (990 - 989)] = b[q];
                    b[q] = fygDCojHc;
                }
                q = q + (936 - 935);
            }
        }
    }
    for (p = 0; p < m; p = p + (948 - 947)) {
        q = 0;
        for (; q < (m - (854 - 853) - p);) {
            if (!(c[q + (177 - 176)] != c[q])) {
                if (a[q + (680 - 679)] > a[q] || b[q] < b[q + 1]) {
                    fygDCojHc = a[q + 1];
                    a[q + 1] = a[q];
                    a[q] = fygDCojHc;
                    fygDCojHc = b[q + 1];
                    b[q + 1] = b[q];
                    b[q] = fygDCojHc;
                }
            }
            q = q + 1;
        }
    }
    {
        i = m - 1;
        while (i >= 0) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", x[a[i]], y[a[i]], z[a[i]], x[b[i]], y[b[i]], z[b[i]], c[i]);
            i = i - 1;
        }
    }
    return 0;
}

