main () {
    int a [500] = {0};
    char s [(1372 - 872)], t [5], g [500] [5] = {(827 - 827)}, c;
    gets (s);
    int n, i, j, max = 0;
    scanf ("%d", &n);
    for (i = 0; s[i + n - 1]; i++) {
        for (j = 0; n > j; j++)
            t[j] = s[i + j];
        for (j = 0; g[j][0]; j++)
            if (!strcmp (t, g[j])) {
                a[j]++;
                if (a[j] > max)
                    max = a[j];
                break;
            }
        if (!g[j][0]) {
            strcpy (g[j], t);
            a[j]++;
            if (a[j] > max)
                max = a[j];
        }
    }
    getchar ();
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (j = 0; g[j][0]; j++)
            if (a[j] == max)
                puts (g[j]);
    }
}

