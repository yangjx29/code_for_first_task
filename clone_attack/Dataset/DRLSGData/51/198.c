main () {
    int l, i, k, j, n;
    char s [500] [5];
    int a [500];
    char str [500];
    int t = 1;
    scanf ("%d", &n);
    scanf ("%s", str);
    l = strlen (str);
    {
        i = 0;
        for (; i < l - n + 1;) {
            a[i] = 1;
            for (j = 0; n > j; j++)
                s[i][j] = str[i + j];
            s[i][j] = '\0';
            i++;
        }
    }
    for (i = 0; l - n > i; i++)
        for (j = i + 1; l - n + 1 > j; j++) {
            if (!(0 != strcmp (s[i], s[j])))
                a[i]++;
        }
    for (i = 0; i < l - n; i++) {
        if (t < a[i])
            t = a[i];
    }
    if (t == 1)
        ;
    else {
        printf ("%d\n", t);
        for (i = 0; i < l - n; i++) {
            if (t == a[i])
                printf ("%s\n", s[i]);
        }
    }
}

