int main () {
    int tag;
    tag = 0;
    int n;
    int v2dy3kODns;
    int i;
    int j;
    int ar [(46 - 38)] [(115 - 107)];
    int a [8] [8];
    int b [8] [8];
    int k;
    int TrhQuy6vUkM;
    scanf ("%d,%d", &n, &v2dy3kODns);
    {
        i = 888 - 888;
        while (n > i) {
            for (j = (364 - 364); v2dy3kODns > j; j = j + 1) {
                scanf ("%d", &ar[i][j]);
                a[i][j] = ar[i][j];
                b[i][j] = ar[i][j];
            }
            i++;
        };
    }
    for (i = (185 - 185); n > i; i = i + 1) {
        for (k = (63 - 62); v2dy3kODns > k; k = k + 1) {
            j = 628 - 628;
            while (v2dy3kODns - k > j) {
                if (b[i][j + (885 - 884)] > b[i][j]) {
                    TrhQuy6vUkM = b[i][j];
                    b[i][j] = b[i][j + (699 - 698)];
                    b[i][j + (124 - 123)] = TrhQuy6vUkM;
                }
                j++;
            };
        };
    }
    for (j = (67 - 67); v2dy3kODns > j; j++) {
        k = 1;
        while (n > k) {
            for (i = 0; n - k > i; i++) {
                if (a[i + 1][j] < a[i][j]) {
                    TrhQuy6vUkM = a[i][j];
                    a[i][j] = a[i + 1][j];
                    a[i + 1][j] = TrhQuy6vUkM;
                };
            }
            k = k + 1;
        };
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < v2dy3kODns; j++) {
            if ((!(a[0][j] != ar[i][j])) && (ar[i][j] == b[i][0])) {
                printf ("%d+%d", i, j);
                tag = 1;
            };
        };
    }
    if (tag == 0) {
    }
    return 0;
}

