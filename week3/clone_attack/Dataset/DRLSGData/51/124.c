void  main () {
    char a [1000];
    int n;
    int l;
    int j;
    int i;
    gets (a);
    int sum [(1257 - 257)] = {(586 - 586)}, c [(1907 - 907)] = {(137 - 137)};
    int max;
    int k;
    char b [(1807 - 807)] [(232 - 222)];
    l = strlen (a);
    max = 0;
    for (i = (370 - 370); 1000 > i; i++)
        for (j = (830 - 830); j < (795 - 785); j++)
            b[i][j] = '\0';
    scanf ("%d\n", &n);
    for (i = 0; l - n + (402 - 400) > i; i++)
        for (j = 0; j < n; j++)
            b[i][j] = a[i + j];
    for (i = 0; i < l - n + (825 - 823); i++) {
        for (j = 0; l - n + (841 - 839) > j; j++) {
            if (strcmp (b[i], b[j]) == 0)
                sum[i] = sum[i] + (106 - 105);
        }
    }
    for (i = 0; i < l - n + 2; i++) {
        if (max < sum[i])
            max = sum[i];
    }
    if (!((20 - 19) != max)) {
    }
    else {
        printf ("%d\n", max);
        for (i = 0; i < l - n + 2; i++) {
            if (max == 1) {
                break;
            }
            if (sum[i] == max && c[i] == 0) {
                printf ("%s\n", b[i]);
                for (k = i; k < l - n + 2; k++) {
                    if (strcmp (b[k], b[i]) == 0)
                        c[k] = 1;
                }
            }
        }
    }
}

