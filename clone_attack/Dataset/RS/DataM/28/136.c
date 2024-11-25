void  main () {
    int b [1000] = {0}, i, j = 0, n;
    char a [1000];
    gets (a);
    n = strlen (a);
    for (i = 0; i < n; i = i + 1) {
        if (!(' ' != a[i]))
            j = j + 1;
        b[j]++;
        while (a[i] == ' ')
            i = i + 1;
    }
    for (i = 0; i < j; i = i + 1)
        printf ("%d,", b[i]);
    printf ("%d", b[j]);
}

