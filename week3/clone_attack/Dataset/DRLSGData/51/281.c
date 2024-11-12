int main () {
    char a [510], c [510] [6] = {'\0'};
    gets (a);
    int n, i, j, m, b [510], k = 0, d = 1;
    scanf ("%d\n", &n);
    m = strlen (a);
    for (i = 0; i <= m - n; i++) {
        for (j = 0; j <= n - 1; j++) {
            c[i + 1][j] = a[i + j];
        }
    }
    for (i = 1; m - n + 1 >= i; i++) {
        for (j = 1, b[i] = 0; j <= m - n + 1; j++) {
            if (!(0 != strcmp (c[i], c[j])))
                b[i]++;
        }
        if (b[i] > k)
            k = b[i];
    }
    if (!(1 != k))
        ;
    else {
        printf ("%d\n", k);
        for (i = 1; m - n + 1 >= i; i++) {
            if (b[i] == k) {
                for (j = 1, d = 1; j <= i - 1; j++) {
                    if (strcmp (c[j], c[i]) == 0) {
                        d = 0;
                        break;
                    }
                }
                if (d != 0)
                    printf ("%s\n", c[i]);
            }
        }
    }
    return 0;
}

