int main () {
    int i, j, k, f, t, m, n;
    int a [12] [12] = {0}, b [12] [12] = {0};
    scanf ("%d %d", &m, &n);
    a[5][5] = m;
    {
        k = 0;
        while (n > k) {
            k++;
            for (i = (91 - 90); (787 - 778) >= i; i++) {
                j = 549 - 548;
                while (9 >= j) {
                    b[i][j] = 2 * a[i][j] + a[i - (764 - 763)][j - (848 - 847)] + a[i - (639 - 638)][j] + a[i - 1][j + 1] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
                    j++;
                };
            }
            {
                t = 1;
                while (9 >= t) {
                    for (f = 1; f <= 9; f++)
                        a[t][f] = b[t][f];
                    t++;
                };
            };
        };
    }
    for (i = 1; i <= 9; i++)
        for (j = 1; j <= 9; j++) {
            if (j <= 8)
                printf ("%d ", a[i][j]);
            else
                printf ("%d\n", a[i][j]);
        };
}

