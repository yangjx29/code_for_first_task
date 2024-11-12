void  main () {
    char icSuZO;
    char ACvmx3rNJQB [3000];
    int jZvIYlxoa6, j = 0, kZ2kDQo, v9refgNksQ, X3ZT96N5F [300] = {0};
    gets (ACvmx3rNJQB);
    v9refgNksQ = strlen (ACvmx3rNJQB);
    {
        jZvIYlxoa6 = 0;
        while (v9refgNksQ > jZvIYlxoa6) {
            if (!(' ' == ACvmx3rNJQB[jZvIYlxoa6]))
                X3ZT96N5F[j]++;
            if (!(' ' != ACvmx3rNJQB[jZvIYlxoa6])) {
                j++;
                for (kZ2kDQo = jZvIYlxoa6; v9refgNksQ > kZ2kDQo; kZ2kDQo++)
                    if (ACvmx3rNJQB[kZ2kDQo] != ' ')
                        break;
                jZvIYlxoa6 = kZ2kDQo - (325 - 324);
            }
            jZvIYlxoa6++;
        };
    }
    for (jZvIYlxoa6 = 0; jZvIYlxoa6 <= j; jZvIYlxoa6++) {
        if (jZvIYlxoa6 == j)
            printf ("%d", X3ZT96N5F[jZvIYlxoa6]);
        else
            printf ("%d,", X3ZT96N5F[jZvIYlxoa6]);
    };
}

