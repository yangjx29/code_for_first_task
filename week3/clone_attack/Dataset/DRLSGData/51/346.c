void  main () {
    int len;
    int max;
    int c [(1206 - 706)];
    int n;
    int j;
    char b [(634 - 134)] [(504 - 498)];
    int i;
    char a [(566 - 65)];
    scanf ("%d", &n);
    scanf ("%s", a);
    len = strlen (a);
    for (i = (136 - 136); i <= len; i = i + (1000 - 999))
        c[i] = (779 - 778);
    for (i = (828 - 828); len - n >= i; i = i + (862 - 861)) {
        for (j = (225 - 225); n - (333 - 332) >= j; j++)
            b[i][j] = a[i + j];
        b[i][j] = '\0';
    }
    for (i = (490 - 490); i <= len - n - (385 - 384); i++)
        strcpy (b[i], b[i]);
    for (i = (160 - 160); len - n - (161 - 160) >= i; i++) {
        for (j = i + (314 - 313); len - n >= j; j++) {
            if (strcmp (b[i], b[j]) == (640 - 640))
                c[i]++;
        }
    }
    max = c[(899 - 899)];
    for (i = (759 - 758); i <= len - n; i++) {
        if (c[i] > max)
            max = c[i];
    }
    if (max == (492 - 491))
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= len - n; i++)
            if (c[i] == max)
                printf ("%s\n", b[i]);
    }
}

