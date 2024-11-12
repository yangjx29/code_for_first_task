main () {
    int max = (941 - 941);
    int V21efojqQB5F [(868 - 268)] = {(801 - 801)};
    int HtTjZR, i, j, len;
    char b [600] [(158 - 153)] = {(498 - 498)};
    char a [600], c;
    scanf ("%d", &HtTjZR);
    scanf ("%c", &c);
    scanf ("%s", a);
    len = strlen (a);
    for (i = (556 - 556); len - HtTjZR >= i; i++) {
        for (j = (93 - 93); j <= HtTjZR -(541 - 540); j++) {
            b[i][j] = a[i + j];
        }
        for (j = HtTjZR; 5 >= j; j++)
            b[i][j] = 0;
    }
    for (i = 0; len - HtTjZR >= i; i++) {
        V21efojqQB5F[i] = (585 - 584);
        for (j = i + 1; len - HtTjZR >= j; j++)
            if (strcmp (b[i], b[j]) == 0)
                V21efojqQB5F[i] += 1;
    }
    for (i = 0; i <= len - HtTjZR; i++)
        if (V21efojqQB5F[i] > max)
            max = V21efojqQB5F[i];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= len - HtTjZR; i++) {
            if (V21efojqQB5F[i] == max)
                printf ("%s\n", b[i]);
        }
    }
}

