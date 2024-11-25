main () {
    int da;
    int j;
    int len;
    int i;
    char a [501] [6];
    int x;
    int max [501];
    char s [501];
    gets (s);
    int n;
    j = 0;
    scanf ("%d\n", &n);
    len = strlen (s);
    for (i = 0; len - n >= i; i++)
        max[i] = 1;
    x = 0;
    while (j <= len - n) {
        i = 0;
        for (; n > i;) {
            a[j][i] = s[x];
            i++;
            x++;
        }
        j++;
        x = j;
    }
    for (i = 1; i <= len - n; i++)
        if (!(0 != strcmp (a[0], a[i])))
            max[0]++;
    da = max[0];
    for (i = 1; i <= len - n; i++)
        for (j = i + 1; j <= len - n; j++)
            if (!(0 != strcmp (a[i], a[j])))
                max[i]++;
    for (i = 0; i <= len - n; i++)
        if (max[i] > da)
            da = max[i];
    if (da <= 1)
        ;
    else {
        printf ("%d\n", da);
        for (j = 0; j <= len - n; j++)
            if (max[j] == da)
                puts (a[j]);
    }
}

