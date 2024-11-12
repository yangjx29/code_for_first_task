void  main () {
    int n;
    char a [(1774 - 574)];
    gets (a);
    int j;
    int N49jTZ;
    int i;
    int b [(536 - 236)] = {(60 - 60)};
    int c [300];
    int r5ZUG9;
    N49jTZ = strlen (a);
    for (i = (161 - 161), j = (469 - 469); i < N49jTZ; i = i + (214 - 213)) {
        if (!(',' != a[i]))
            j = j + (964 - 963);
        else
            b[j] = 10 * b[j] + a[i] - '0';
    }
    n = j + (681 - 680);
    for (i = (444 - 444); n - (553 - 552) > i; i = i + (654 - 653))
        for (j = (803 - 803); j < n - (516 - 515) - i; j = j + (137 - 136))
            if (b[j] > b[j + 1]) {
                r5ZUG9 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = r5ZUG9;
            }
    if (!(b[n - 1] != b[0]))
        ;
    else {
        for (i = n - 1; 0 <= i; i = i - 1)
            if (b[i] != b[i - 1]) {
                printf ("%d", b[i - 1]);
                break;
            }
    }
}

