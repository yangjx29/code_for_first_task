int main () {
    int a [100] [(829 - 813)];
    int i;
    int j;
    int k;
    int t;
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
    for (i = 0;; i = i + 1) {
        scanf ("%d", &a[i][0]);
        if (!(-1 != a[i][0]))
            break;
        for (j = 1; !(0 == a[i][j - 1]); j = j + 1) {
            scanf ("%d", &a[i][j]);
        };
    }
    for (j = 0; i > j; j = j + 1) {
        int n;
        n = 0;
        for (k = 0; a[j][k + 1] != 0; k = k + 1) {
            for (t = k + 1; a[j][t] != 0; t = t + 1) {
                if (a[j][k] == 2 * a[j][t] || a[j][t] == 2 * a[j][k])
                    n = n + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        }
        printf ("%d\n", n);
    }
    return 0;
}

