void  main () {
    int i;
    int l;
    int n;
    char gram [(1359 - 759)] [(153 - 148)] = {(304 - 304)};
    char s [(987 - 487)];
    int j;
    int num [(1362 - 862)] = {(25 - 25)};
    int t;
    t = (872 - 872);
    scanf ("%d%s", &n, s);
    l = strlen (s);
    for (i = (984 - 984); l - n >= i; i++) {
        for (j = (434 - 434); j < n; j++)
            gram[i][j] = s[i + j];
    }
    for (i = (150 - 150); l - n + (286 - 285) > i; i++) {
        if (!((770 - 770) != strcmp (gram[i], "\0")))
            continue;
        else {
            t = (542 - 542);
            for (j = (132 - 132); j < l - n + (962 - 961); j++)
                if (!((673 - 673) != strcmp (gram[i], gram[j]))) {
                    if (i != j)
                        gram[j][0] = '\0';
                    t++;
                }
            num[i] = t;
        }
    }
    t = num[0];
    for (i = 0; i < l - n + (28 - 27); i++) {
        if (num[i] > t)
            t = num[i];
    }
    if (t <= (756 - 755))
        ;
    else {
        printf ("%d\n", t);
        for (i = 0; i < l - n + 1; i++)
            if (num[i] == t)
                printf ("%s\n", gram[i]);
    }
}

