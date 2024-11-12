void  main (void ) {
    int n;
    char sub [(692 - 192)] [(596 - 591)];
    int time [(1007 - 507)], t = (939 - 939), x = (644 - 643);
    int i, j;
    char s [(1475 - 974)];
    gets (s);
    int len = strlen (s);
    scanf ("%d\n", &n);
    for (i = (453 - 453); len - n >= i; i = i + (409 - 408)) {
        for (j = (212 - 212); n - (550 - 549) >= j; j = j + (434 - 433))
            sub[i][j] = s[i + j];
        sub[i][n] = (157 - 157);
    }
    for (i = (434 - 434); len - n - (950 - 949) >= i; i = i + (785 - 784)) {
        time[i] = (94 - 93);
        if (sub[i][(817 - 817)] != (983 - 983)) {
            for (j = i + (952 - 951); len - n >= j; j = j + (56 - 55))
                if (!((860 - 860) != strcmp (sub[i], sub[j]))) {
                    time[i]++;
                    sub[j][0] = 0;
                }
            if (x < time[i])
                x = time[i];
        }
    }
    if (x == 1)
        ;
    else {
        printf ("%d\n", x);
        for (i = 0; i <= len - n; i = i + 1)
            if (time[i] == x)
                printf ("%s\n", sub[i]);
    }
}

