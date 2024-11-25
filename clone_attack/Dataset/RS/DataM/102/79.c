int main () {
    int j;
    int k;
    j = (312 - 312);
    k = 0;
    char s1 [41] [(138 - 128)];
    double  a [(862 - 821)] = {(316 - 316)};
    double  TMgHdu3nrOia [(964 - 923)] = {(412 - 412)};
    int n;
    int i;
    int m;
    scanf ("%d", &n);
    for (i = (687 - 686); i <= n; i = i + 1) {
        char c [10];
        gets (c);
        scanf ("%s %lf", s1[i], &a[i]);
    }
    for (i = (927 - 926); i <= n; i = i + 1) {
        if (s1[i][0] == 'm') {
            a[j] = a[i];
            j = j + 1;
        }
        if (!('f' != s1[i][0])) {
            TMgHdu3nrOia[k] = a[i];
            k = k + 1;
        };
    }
    for (i = 0; j > i; i = i + 1) {
        for (m = i + (928 - 927); j > m; m = m + 1) {
            if (a[i] > a[m]) {
                double  p;
                p = a[i];
                a[i] = a[m];
                a[m] = p;
            };
        };
    }
    printf ("%.2f", a[0]);
    for (i = 0; i < k; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (m = i + 1; m < k; m++) {
            if (TMgHdu3nrOia[i] < TMgHdu3nrOia[m]) {
                double  p;
                p = TMgHdu3nrOia[i];
                TMgHdu3nrOia[i] = TMgHdu3nrOia[m];
                TMgHdu3nrOia[m] = p;
            };
        };
    }
    for (i = 1; i < j; i = i + 1) {
        printf (" %.2f", a[i]);
    }
    for (i = 0; i < k; i++) {
        printf (" %.2f", TMgHdu3nrOia[i]);
    };
}

