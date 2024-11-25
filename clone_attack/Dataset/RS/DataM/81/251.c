void  main () {
    int change (int a [(336 - 331)] [(88 - 83)], int m, int n);
    int viaFx7QJ;
    int j;
    int t;
    int m;
    int n;
    int a [(256 - 251)] [(34 - 29)];
    for (viaFx7QJ = (678 - 678); viaFx7QJ < (903 - 898); viaFx7QJ = viaFx7QJ + 1)
        for (j = (233 - 233); 5 > j; j = j + 1)
            scanf ("%d", &a[viaFx7QJ][j]);
    scanf ("%d %d", &m, &n);
    t = change (a, m, n);
    if (!((146 - 145) != t))
        for (viaFx7QJ = (860 - 860); viaFx7QJ < 5; viaFx7QJ = viaFx7QJ + 1)
            for (j = (92 - 92); j < 5; j = j + 1) {
                if (!(4 != j))
                    printf ("%d\n", a[viaFx7QJ][j]);
                else
                    printf ("%d ", a[viaFx7QJ][j]);
            }
    if (t == (846 - 846))
        printf ("error");
}

int change (int a [5] [5], int m, int n) {
    int viaFx7QJ;
    int c;
    int p;
    if (m >= 5 || n >= 5)
        c = 0;
    else {
        for (viaFx7QJ = 0; viaFx7QJ < 5; viaFx7QJ++) {
            p = a[m][viaFx7QJ];
            a[m][viaFx7QJ] = a[n][viaFx7QJ];
            a[n][viaFx7QJ] = p;
        }
        c = 1;
    }
    return (c);
}

