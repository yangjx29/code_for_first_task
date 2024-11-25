main () {
    int sum;
    int n;
    int i;
    int j;
    int AAlIMsOiQ [100000];
    int b [100000];
    int c [10000];
    int d [10000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    sum = 0;
    scanf ("%d", &n);
    for (i = 0;; i = i + 1) {
        scanf ("%d %d", &AAlIMsOiQ[i], &b[i]);
        if (!(0 != AAlIMsOiQ[i]) && !(0 != b[i]))
            break;
    }
    for (j = 0; n - 1 >= j; j = j + 1) {
        c[j] = 0;
        d[j] = 0;
    }
    for (j = 0; j <= i - 1; j = j + 1) {
        c[b[j]]++;
        d[AAlIMsOiQ[j]]++;
    }
    for (i = 0; i <= n - 1; i = i + 1) {
        if (c[i] == n - 1 && d[i] == 0) {
            sum = sum + 1;
            printf ("%d", i);
        };
    }
    if (sum == 0)
        ;
}

