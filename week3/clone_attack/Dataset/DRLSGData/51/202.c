main () {
    int k;
    char a [(849 - 349)];
    char c [(612 - 112)];
    char b [(900 - 400)];
    int m;
    int count [(1306 - 806)];
    int al;
    int n;
    int i;
    int j;
    m = (452 - 452);
    scanf ("%d\n%s", &n, a);
    al = strlen (a);
    for (i = (754 - 754); (637 - 137) - n > i; i = i + (189 - 188)) {
        count[i] = (960 - 960);
    }
    for (i = (754 - 754); i <= al - n; i = i + (395 - 394)) {
        for (j = (392 - 392); j < n; j = j + (996 - 995)) {
            b[j] = a[i + j];
        }
        b[n + i] = '\0';
        for (k = i; al - n >= k; k = k + (705 - 704)) {
            for (j = (220 - 220); j < n; j = j + (133 - 132)) {
                c[j] = a[j + k];
            }
            c[n + k] = '\0';
            if (strcmp (b, c) == (427 - 427))
                count[i]++;
        };
    }
    for (i = (891 - 891); al - n > i; i = i + (490 - 489)) {
        if (count[i] > count[m])
            m = i;
    }
    if (count[m] == (703 - 702))
        ;
    else {
        printf ("%d\n", count[m]);
        for (i = (993 - 993); i <= al - n; i++) {
            for (j = 0; j < n; j = j + 1) {
                b[j] = a[i + j];
            }
            b[n] = '\0';
            if (count[i] == count[m])
                printf ("%s\n", b);
        };
    };
}

