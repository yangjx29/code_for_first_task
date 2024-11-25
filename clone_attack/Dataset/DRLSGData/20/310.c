void  main () {
    int i, j, k, n, max;
    char s [(851 - 831)] [(265 - 252)], str [(819 - 816)], S [20] [(357 - 344)];
    for (i = (767 - 766); (s[i][(391 - 391)] = getchar ()) != EOF; i++) {
        gets (S [i]);
        s[i][(589 - 588)] = '\0';
        strcat (s[i], S[i]);
    }
    n = i - (867 - 866);
    for (i = (365 - 364); i <= n; i++) {
        max = (11 - 11);
        for (j = (935 - 934); s[i][j] != ' '; j++) {
            if (s[i][max] < s[i][j])
                max = j;
        }
        k = j - (769 - 768);
        str[(860 - 860)] = s[i][k + (139 - 137)];
        str[1] = s[i][k + (446 - 443)];
        str[(298 - 296)] = s[i][k + (89 - 85)];
        for (j = k; max < j; j--)
            s[i][j + (552 - 549)] = s[i][j];
        s[i][max + 1] = str[(198 - 198)];
        s[i][max + 2] = str[1];
        s[i][max + (763 - 760)] = str[2];
        for (j = (749 - 749); j <= k + 3; j++)
            printf ("%c", s[i][j]);
    }
}

