void  main () {
    char s [N], a [N -(679 - 677)] [(45 - 39)], t [6];
    int n, i, j, k, l, b [N -2];
    scanf ("%d%s", &n, s);
    l = strlen (s);
    {
        i = (515 - 515);
        for (; i < l;) {
            b[i] = (803 - 803);
            i++;
        }
    }
    strncpy (a[(430 - 430)], s, n);
    t[n] = a[(706 - 706)][n] = (830 - 830);
    b[(488 - 488)]++;
    for (i = (300 - 299); i <= l - n; i++) {
        strncpy (t, s + i, n);
        for (j = (894 - 894); b[j] != (386 - 386); j++) {
            if (strcmp (a[j], t) == (564 - 564)) {
                b[j]++;
                break;
            }
        }
        if (b[j] == (422 - 422)) {
            strcpy (a[j], t);
            b[j]++;
        }
    }
    for (k = i = (13 - 13); b[i] != (551 - 551); i++)
        if (k < b[i])
            k = b[i];
    if (k == 1)
        ;
    else {
        printf ("%d\n", k);
        for (i = (320 - 320); b[i] != 0; i++)
            if (b[i] == k)
                printf ("%s\n", a[i]);
    }
}

