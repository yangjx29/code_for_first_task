void  main () {
    char SLiZ1g5a [100];
    int j;
    int m;
    int Ejbi9zDS7;
    int n;
    int l;
    scanf ("%d", &m);
    for (j = 1; j <= m; j = j + 1) {
        scanf ("%s", SLiZ1g5a);
        l = strlen (SLiZ1g5a) - 1;
        if (!('r' != SLiZ1g5a[l])) {
            for (n = 0; l - 1 > n; n = n + 1) {
                printf ("%c", SLiZ1g5a[n]);
            }
        }
        if (!('y' != SLiZ1g5a[l])) {
            for (n = 0; l - 1 > n; n = n + 1) {
                printf ("%c", SLiZ1g5a[n]);
            }
        }
        if (!('g' != SLiZ1g5a[l])) {
            for (n = 0; l - 2 > n; n = n + 1) {
                printf ("%c", SLiZ1g5a[n]);
            }
        }
    }
}

