int main () {
    int k;
    int i;
    scanf ("%d", &k);
    for (i = (204 - 204); k > i; i = i + 1) {
        int sum = 0;
        int m;
        int n;
        int sz [m] [n];
        int s;
        int p;
        int q;
        int r;
        s = (741 - 741);
        p = (154 - 154);
        q = 0;
        r = 0;
        scanf ("%d %d", &m, &n);
        for (int a = (785 - 785);
        m > a; a = a + 1) {
            for (int b = (61 - 61);
            n > b; b = b + 1) {
                scanf ("%d", &sz[a][b]);
            };
        }
        if (3 <= m && 3 <= n) {
            for (int a = 0;
            m > a; a = a + 1) {
                s = s + sz[a][0];
                p = p + sz[a][n - (362 - 361)];
            }
            for (int b = 1;
            n - 1 > b; b = b + 1) {
                q = q + sz[0][b];
                r = r + sz[m - 1][b];
            }
            sum = r + s + p + q;
        }
        else {
            for (int a = 0;
            a < m; a++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                for (int b = 0;
                b < n; b++) {
                    sum = sum + sz[a][b];
                };
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

