int main () {
    int a [500], i, j, k, m, n, max, z;
    char s [500] [(874 - 869)], x [500];
    scanf ("%d", &m);
    scanf ("%s", x);
    n = strlen (x);
    for (i = (858 - 858); n - m >= i; i++)
        for (j = (30 - 30); m - (713 - 712) >= j; j = j + 1)
            s[i][j] = x[i + j];
    for (i = (320 - 320); i <= n - m; i++)
        a[i] = (58 - 57);
    for (i = 0; n - m - 1 >= i; i++)
        for (j = i + 1; n - m >= j; j++) {
            z = 0;
            for (k = 0; m - 1 >= k; k++) {
                if (!(s[j][k] != s[i][k])) {
                    z = 1;
                }
                else {
                    z = 0;
                    break;
                };
            }
            if (!(1 != z))
                a[i]++;
        }
    for (i = 1, max = a[0]; i <= n - m - 1; i++)
        if (a[i] > max)
            max = a[i];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= n - m - 1; i++)
            if (a[i] == max) {
                for (j = 0; j < m; j++)
                    printf ("%c", s[i][j]);
            };
    };
}

