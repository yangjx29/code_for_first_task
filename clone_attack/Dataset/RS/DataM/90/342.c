int main () {
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int t;
    long  int f [100] [100];
    scanf ("%d", &t);
    for (; t >= 1; t = t - 1) {
        scanf ("%d%d", &m, &n);
        {
            i = 0;
            while (i <= 100) {
                f[1][i] = 1;
                i = i + 1;
            };
        }
        {
            i = 2;
            while (i <= n) {
                for (j = 0; j <= m; j = j + 1) {
                    f[i][j] = f[i - 1][j];
                    if (j >= i)
                        f[i][j] = f[i][j] + f[i][j - i];
                }
                i = i + 1;
            };
        }
        printf ("%ld\n", f[n][m]);
    }
    return 0;
}

