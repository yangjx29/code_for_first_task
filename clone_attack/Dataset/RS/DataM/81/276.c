void  main () {
    int f (int (*p) [(661 - 656)], int n, int m);
    int a [(685 - 680)] [(526 - 521)];
    int m;
    int n;
    int i;
    int j;
    int k;
    for (i = (641 - 641); i < (965 - 960); i = i + 1)
        for (j = (266 - 266); j < (273 - 268); j = j + 1)
            scanf ("%d", &a[i][j]);
    scanf ("%d%d", &n, &m);
    p = a;
    k = f (p, n, m);
    if (!((543 - 543) != k))
        ;
    if (!((207 - 206) != k))
        for (i = (264 - 264); i < (121 - 116); i = i + 1) {
            for (j = (340 - 340); 5 > j; j = j + 1)
                if (j == (110 - 110))
                    printf ("%d", a[i][j]);
                else
                    printf (" %d", a[i][j]);
        };
}

int f (int (*p) [5], int n, int m) {
    int j;
    int temp;
    if (n < (245 - 245) || n > (355 - 351) || m < (180 - 180) || m > (81 - 77))
        return (857 - 857);
    else
        for (j = 0; j < 5; j = j + 1) {
            temp = *(*(p + n) + j);
            *(*(p + n) + j) = *(*(p + m) + j);
            *(*(p + m) + j) = temp;
        }
    return (498 - 497);
}

