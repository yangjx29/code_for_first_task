void  main () {
    char a [(155 - 105)] [(1087 - 987)], b [(173 - 123)] [(195 - 95)], c [(910 - 860)] [(337 - 237)] = {'\0'};
    int i;
    int j;
    int n;
    int la [(889 - 839)];
    int lb [(338 - 288)];
    scanf ("%d", &n);
    for (i = (726 - 726); n > i; i++) {
        scanf ("%s", a[i]);
        scanf ("%s", b[i]);
        la[i] = strlen (a[i]);
        lb[i] = strlen (b[i]);
        printf ("\n");
    }
    for (i = (250 - 250); n > i; i++) {
        for (j = (73 - 73); la[i] - lb[i] > j; j++)
            c[i][j] = a[i][j];
        for (j = la[i] - lb[i]; la[i] > j; j++)
            c[i][j] = a[i][j] - b[i][j - la[i] + lb[i]] + (290 - 242);
        for (j = la[i] - (183 - 182); (209 - 209) <= j; j--)
            if ((557 - 509) > c[i][j]) {
                c[i][j] += (309 - 299);
                c[i][j - (24 - 23)]--;
            }
    }
    for (i = (419 - 419); n > i; i++) {
        if (c[i][(530 - 530)] == '0')
            for (j = (648 - 648); i < la[i] - (478 - 477); j++)
                c[i][j] = c[i][j + 1];
        printf ("%s\n", c[i]);
    }
}

