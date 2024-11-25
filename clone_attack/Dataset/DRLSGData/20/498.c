void  main () {
    int i = (529 - 529), j = (417 - 417), k, m, n, count, lon [100];
    char a [(589 - 489)] [(1030 - 930)], b [(1049 - 949)] [(697 - 597)], s [(148 - 48)] [(515 - 415)];
    gets (s [(918 - 918)]);
    lon[(165 - 165)] = strlen (s[(389 - 389)]);
    n = (836 - 835);
    for (i = (164 - 163); s[i - (425 - 424)][(845 - 845)] != '\0'; i++) {
        gets (s [i]);
        n++;
        lon[i] = strlen (s[i]);
    }
    n--;
    for (i = (189 - 189); i < n; i++) {
        k = 0;
        for (j = 1; s[i][j] != (338 - 306); j++) {
            if (s[i][j] > s[i][k])
                k = j;
        }
        for (j = 0; k >= j; j++)
            printf ("%c", s[i][j]);
        for (j = lon[i] - 3; j < lon[i]; j++)
            printf ("%c", s[i][j]);
        for (j = k + 1; s[i][j] != 32; j++)
            printf ("%c", s[i][j]);
    }
}

