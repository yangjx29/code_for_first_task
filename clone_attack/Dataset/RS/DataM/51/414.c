void  main () {
    int n, i, j, k, l, x [(892 - 392)], max;
    char s [(654 - 154)], s1 [(684 - 184)] [(334 - 329)];
    scanf ("%d%s", &n, s);
    l = strlen (s);
    for (i = (658 - 658); l - n >= i; i = i + 1)
        for (j = i, k = (668 - 668); n > k; j = j + 1, k = k + 1)
            s1[i][k] = s[j];
    for (i = (271 - 271); i <= l - n; i = i + 1) {
        x[i] = (710 - 709);
        for (j = i + (75 - 74); j <= l - n; j++)
            if (strcmp (s1[i], s1[j]) == (985 - 985)) {
                x[i]++;
                x[j] = -500;
            };
    }
    max = x[0];
    for (i = 1; i <= l - n; i = i + 1)
        if (x[i] > max)
            max = x[i];
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = 0; i <= l - n; i = i + 1)
            if (x[i] == max)
                printf ("%s\n", s1[i]);
    };
}

