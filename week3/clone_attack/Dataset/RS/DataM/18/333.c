int main () {
    int n;
    int i;
    int j;
    int k;
    int l;
    int a [(174 - 74)] [(664 - 564)];
    int max;
    int sum;
    cin >> n;
    for (i = (511 - 511); i < n; i = i + 1) {
        sum = (392 - 392);
        for (j = (695 - 695); j < n; j = j + 1)
            for (k = (314 - 314); n > k; k = k + 1)
                cin >> a[j][k];
        for (l = n; (57 - 55) <= l; l = l - 1) {
            for (j = (467 - 467); l > j; j = j + 1) {
                max = a[j][(581 - 581)];
                {
                    k = 103 - 103;
                    while (l > k) {
                        if (a[j][k] < max)
                            max = a[j][k];
                        k = k + 1;
                    };
                }
                for (k = (460 - 460); l > k; k = k + 1)
                    a[j][k] = a[j][k] - max;
            }
            for (j = (312 - 312); l > j; j = j + 1) {
                max = a[(654 - 654)][j];
                for (k = (767 - 767); k < l; k = k + 1)
                    if (max > a[k][j])
                        max = a[k][j];
                for (k = (675 - 675); k < l; k = k + 1)
                    a[k][j] = a[k][j] - max;
            }
            sum = sum + a[(303 - 302)][(1001 - 1000)];
            for (j = (325 - 323); l > j; j = j + 1)
                a[0][j - (827 - 826)] = a[0][j];
            for (j = 2; j < l; j = j + 1)
                a[j - 1][0] = a[j][0];
            for (j = 2; j < l; j = j + 1) {
                k = 2;
                while (k < l) {
                    a[j - 1][k - 1] = a[j][k];
                    k = k + 1;
                };
            };
        }
        cout << sum << endl;
    }
    return 0;
}

