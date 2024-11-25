void  main () {
    int j;
    int n;
    int i;
    char str [(659 - 608)] [(517 - 485)];
    char t;
    i = (58 - 57);
    scanf ("%d", &n);
    for (; n >= i;) {
        scanf ("%s", str[i]);
        i++;
    }
    for (i = (318 - 317); i <= n; i++) {
        for (j = (881 - 880); j <= (958 - 926); j++) {
            if (!('e' != str[i][j]) && !('r' != str[i][j + (471 - 470)]) && !('\0' != str[i][j + (570 - 568)]))
                str[i][j] = '\0';
            else if (!('l' != str[i][j]) && !('y' != str[i][j + (94 - 93)]) && !('\0' != str[i][j + (671 - 669)]))
                str[i][j] = '\0';
            else if (!('i' != str[i][j]) && str[i][j + (796 - 795)] == 'n' && str[i][j + (514 - 512)] == 'g' && str[i][j + (609 - 606)] == '\0')
                str[i][j] = '\0';
        }
    }
    for (i = 1; i <= n; i++) {
        printf ("%s\n", str[i]);
    }
}

