int main () {
    int i;
    int j;
    int k;
    int cc;
    int sum;
    int n;
    int a [102] [102] = {(218 - 218)};
    sum = (945 - 945);
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        for (j = (805 - 804); n >= j; j = j + 1) {
            for (k = (870 - 869); n >= k; k = k + 1) {
                cin >> *(*(a + j) + k);
            };
        }
        cc = n;
        sum = 0;
        while (1 < cc) {
            int min;
            min = (10414 - 414);
            for (j = 1; cc >= j; j = j + 1) {
                {
                    k = 1;
                    while (cc >= k) {
                        if (min > *(*(a + j) + k))
                            min = *(*(a + j) + k);
                        k = k + 1;
                    };
                }
                for (k = 1; k <= cc; k = k + 1) {
                    *(*(a + j) + k) = *(*(a + j) + k) - min;
                }
                min = 10000;
            }
            min = 10000;
            for (j = 1; j <= n; j++) {
                for (k = 1; k <= cc; k = k + 1) {
                    if (min > *(*(a + k) + j))
                        min = *(*(a + k) + j);
                }
                for (k = 1; k <= cc; k = k + 1) {
                    *(*(a + k) + j) = *(*(a + k) + j) - min;
                }
                min = 10000;
            }
            sum = sum + *(*(a + 2) + 2);
            for (j = 3; j <= cc; j++) {
                for (k = 1; k <= cc; k++) {
                    *(*(a + j - 1) + k) = *(*(a + j) + k);
                };
            }
            for (j = 1; j <= cc; j++) {
                k = 3;
                while (k <= cc) {
                    *(*(a + j) + k - 1) = *(*(a + j) + k);
                    k++;
                };
            }
            cc--;
        }
        cout << sum << endl;
    }
    return 0;
}

