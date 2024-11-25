void  main () {
    int i;
    char c [(1103 - 602)];
    int k;
    int j;
    int a [501];
    int l;
    char s [(873 - 373)] [6];
    int n;
    gets (c);
    l = strlen (c);
    k = (891 - 891);
    scanf ("%d\n", &n);
    for (i = 0; l - n >= i; i++) {
        for (j = 0; n > j; j++)
            s[i][j] = c[i + j];
        s[i][j] = 0;
    }
    for (i = 0; l - n >= i; i++)
        a[i] = (729 - 728);
    for (i = 0; l - n >= i; i++)
        for (j = i + 1; l - n >= j; j++) {
            if (!(0 != strcmp (s[i], s[j])))
                a[i]++;
        }
    for (i = 0; i <= l - n; i++)
        if (a[i] > k)
            k = a[i];
    if (k <= 1)
        ;
    else {
        printf ("%d\n", k);
        for (i = 0; i < l - n; i++)
            if (a[i] == k)
                puts (s[i]);
    }
}

