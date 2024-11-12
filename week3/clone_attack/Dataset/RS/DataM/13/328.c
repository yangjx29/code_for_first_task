void  main () {
    int n, JbWI7aPT, j, uYa41z [(20624 - 623)];
    scanf ("%d", &n);
    for (JbWI7aPT = 1; JbWI7aPT <= n; JbWI7aPT = JbWI7aPT +1)
        scanf ("%d", &uYa41z[JbWI7aPT]);
    printf ("%d", uYa41z[1]);
    for (JbWI7aPT = (826 - 824); JbWI7aPT <= n; JbWI7aPT++) {
        for (j = 1; j < JbWI7aPT; j++) {
            if (uYa41z[JbWI7aPT] == uYa41z[j]) {
                uYa41z[JbWI7aPT] = 0;
                break;
            };
        };
    }
    for (JbWI7aPT = (38 - 36); JbWI7aPT <= n; JbWI7aPT++) {
        if (uYa41z[JbWI7aPT] != 0)
            printf (" %d", uYa41z[JbWI7aPT]);
    };
}

