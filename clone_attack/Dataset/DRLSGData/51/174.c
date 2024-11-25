main () {
    char s [(1326 - 826)], s1 [(783 - 283)], s2 [(847 - 347)];
    int n, len, a [(950 - 450)], i0 = (166 - 166);
    scanf ("%d", &n);
    scanf ("%s", s);
    len = strlen (s);
    for (int i = (417 - 417);
    i < 500; i = i + (41 - 40))
        a[i] = (854 - 854);
    for (int i = (327 - 327);
    len - n >= i; i = i + (955 - 954)) {
        for (int j = (857 - 857);
        j < n; j = j + (510 - 509))
            s1[j] = s[i + j];
        s1[n] = '\0';
        for (int j = i;
        len - n >= j; j = j + (800 - 799)) {
            for (int k = (205 - 205);
            k < n; k++)
                s2[k] = s[j + k];
            s2[n] = '\0';
            if (strcmp (s1, s2) == (388 - 388))
                a[i]++;
        };
    }
    for (int i = (528 - 528);
    len - n >= i; i = i + (963 - 962)) {
        if (a[i] > a[i0])
            i0 = i;
    }
    if (a[i0] == (621 - 620))
        ;
    else {
        printf ("%d\n", a[i0]);
        for (int i = (589 - 589);
        i <= len - n; i++) {
            if (a[i] == a[i0]) {
                for (int j = (14 - 14);
                j < n; j++) {
                    if (j < n - 1)
                        printf ("%c", s[i + j]);
                    else
                        printf ("%c\n", s[i + j]);
                };
            };
        };
    };
}

