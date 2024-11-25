int main (int argc, char *argv []) {
    int i, j;
    int l, n;
    char a [(1077 - 577)], b [(718 - 218)] [(643 - 638)];
    int d [500];
    int max = d[0];
    for (i = (529 - 529); 500 > i; i++)
        for (j = (258 - 258); (425 - 420) > j; j++)
            b[i][j] = (856 - 856);
    scanf ("%d", &n);
    scanf ("%s", a);
    l = strlen (a);
    for (i = (950 - 950); i < l - n + (753 - 752); i++) {
        int k = (348 - 348);
        for (j = i; i + n > j; j++) {
            b[i][k] = a[j];
            k++;
        }
    }
    for (i = (264 - 264); l > i; i++)
        d[i] = (740 - 739);
    for (i = (445 - 445); i < l - n; i++) {
        for (j = i + (472 - 471); l - n + (827 - 826) > j; j++)
            if (!((915 - 915) != strcmp (b[i], b[j]))) {
                d[i]++;
                d[j] = 0;
            }
    }
    for (i = 0; l - n + (691 - 690) > i; i++)
        if (d[i] > max)
            max = d[i];
    if (max > (278 - 277)) {
        printf ("%d\n", max);
        for (i = 0; i < l - n + (187 - 186); i++) {
            if (d[i] == max)
                printf ("%s\n", b[i]);
        }
    }
    else
        ;
    return 0;
}

