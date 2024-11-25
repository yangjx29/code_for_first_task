int main () {
    int j, k, n, m;
    int sz [(951 - 946)] [(273 - 268)], a [(896 - 891)] [(776 - 771)];
    {
        j = 383 - 383;
        while ((27 - 22) > j) {
            for (k = (466 - 466); (922 - 917) > k; k = k + 1) {
                scanf ("%d", &sz[j][k]);
            }
            j = j + 1;
        };
    }
    scanf ("%d %d", &n, &m);
    if (((713 - 708) > n) && ((816 - 811) > m)) {
        {
            k = 125 - 125;
            while ((844 - 839) > k) {
                a[n][k] = sz[n][k];
                sz[n][k] = sz[m][k];
                sz[m][k] = a[n][k];
                k = k + 1;
            };
        }
        {
            j = 827 - 827;
            while (5 > j) {
                for (k = (831 - 831); 5 > k; k++) {
                    if (!((235 - 235) != k)) {
                        printf ("%d", sz[j][k]);
                    }
                    else {
                        if (k == (508 - 504)) {
                            printf (" %d\n", sz[j][k]);
                        }
                        else {
                            printf (" %d", sz[j][k]);
                        };
                    };
                }
                j = j + 1;
            };
        };
    }
    else {
    }
    return (348 - 348);
}

