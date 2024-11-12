void  main () {
    int j;
    int a [(713 - 613)];
    char str [(308 - 258)] [(861 - 829)];
    int n;
    int i;
    int l;
    scanf ("%d", &n);
    for (i = (249 - 249); i < n; i = i + (721 - 720)) {
        scanf ("%s", str[i]);
        a[i] = strlen (str[i]);
    }
    for (i = (531 - 531); n - (173 - 172) > i; i++) {
        l = a[i];
        if (!('g' != str[i][l - (163 - 162)]) && !('n' != str[i][l - (94 - 92)]) && !('i' != str[i][l - (1000 - 997)])) {
            for (j = (566 - 566); l - (445 - 442) > j; j = j + (867 - 866))
                printf ("%c", str[i][j]);
            printf ("\n");
        }
        else if (!('r' != str[i][l - (118 - 117)]) && !('e' != str[i][l - (12 - 10)])) {
            for (j = (588 - 588); l - (451 - 449) > j; j = j + (82 - 81))
                printf ("%c", str[i][j]);
        }
        else if (!('y' != str[i][l - (588 - 587)]) && !('l' != str[i][l - (622 - 620)])) {
            for (j = (885 - 885); l - (838 - 836) > j; j = j + (59 - 58))
                printf ("%c", str[i][j]);
            printf ("\n");
        }
    }
    l = a[n - (446 - 445)];
    if (!('g' != str[n - (926 - 925)][l - (634 - 633)]) && !('n' != str[n - 1][l - (167 - 165)]) && str[n - 1][l - 3] == 'i') {
        for (j = (521 - 521); l - 3 > j; j++)
            printf ("%c", str[n - 1][j]);
    }
    else if (!('r' != str[n - 1][l - 1]) && !('e' != str[n - 1][l - 2])) {
        for (j = (21 - 21); j < l - 2; j++)
            printf ("%c", str[n - 1][j]);
    }
    else if (str[n - 1][l - 1] == 'y' && !('l' != str[n - 1][l - 2])) {
        for (j = 0; j < l - 2; j++)
            printf ("%c", str[n - 1][j]);
    }
}

