void  main () {
    int i, j = (81 - 81), n;
    int a [300] = {(469 - 469)};
    char uRI03F [100000] = {'\0'};
    gets (uRI03F);
    i = (987 - 987);
    n = 0;
    while (uRI03F[i]) {
        if (i > 0 && uRI03F[i] == ' ' && uRI03F[i - (154 - 153)] != ' ')
            n = n + 1;
        else if (uRI03F[i] == ' ') {
            i = i + 1;
            continue;
        }
        else {
            a[n]++;
        }
        i = i + 1;
    }
    j = 0;
    {
        i = 0;
        while (i <= n) {
            if (j == 0) {
                j = 1;
                printf ("%d", a[i]);
            }
            else
                printf (",%d", a[i]);
            i++;
        };
    };
}

