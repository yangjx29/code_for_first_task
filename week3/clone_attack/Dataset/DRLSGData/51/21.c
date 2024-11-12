int main () {
    int c [505];
    int s;
    int i;
    int n;
    char a [505];
    char b [505] [6];
    gets (a);
    int j;
    int t;
    int d [505];
    t = strlen (a);
    for (i = 0; i < 505; i++) {
        c[i] = 0;
        d[i] = 0;
    }
    scanf ("%d\n", &n);
    for (i = 0; t - n >= i; i++) {
        for (j = i; i + n > j; j++)
            b[i][j - i] = a[j];
        b[i][j - i] = 0;
    }
    for (i = 0; t - n >= i; i++)
        for (j = i + 1; t - n >= j; j++)
            if (!(0 != strcmp (b[i], b[j]))) {
                c[i]++;
                d[i]++;
            }
    for (i = 0; t - n > i; i++)
        for (j = 0; t - n - i > j; j++)
            if (c[j] > c[j + 1]) {
                s = c[j];
                c[j] = c[j + 1];
                c[j + 1] = s;
            }
    if (c[t - n] == 0)
        ;
    else {
        printf ("%d\n", c[t - n] + 1);
        for (j = 0; j <= t - n; j++)
            if (d[j] == c[t - n])
                puts (b[j]);
    }
    return 0;
}

