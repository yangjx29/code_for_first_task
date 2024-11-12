int a [20];

main () {
    void  run (int x, int y);
    void  ping (int x, int y);
    int n;
    int i;
    int j;
    int k;
    int year;
    int y;
    int r;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d%d%d", &year, &y, &r);
        if (!(0 != year % 400) || (!(0 != year % 4) && year % 100 != 0))
            run (y, r);
        else
            ping (y, r);
    };
}

void  run (int x, int y) {
    int k;
    int m;
    int n;
    int i;
    int j;
    k = 0;
    m = y < x ? x : y;
    n = y > x ? x : y;
    a[1] = a[3] = a[5] = a[7] = a[8] = a[10] = a[12] = 31;
    a[4] = a[6] = a[9] = a[11] = 30;
    a[2] = 29;
    for (i = n; m > i; i++)
        k = k + a[i];
    if (k % 7 == 0)
        ;
    else
        ;
}

void  ping (int x, int y) {
    int k;
    int m;
    int n;
    int i;
    int j;
    k = 0;
    m = x > y ? x : y;
    n = x < y ? x : y;
    a[1] = a[3] = a[5] = a[7] = a[8] = a[10] = a[12] = 31;
    a[2] = 28;
    a[4] = a[6] = a[9] = a[11] = 30;
    for (i = n; i < m; i++)
        k = k + a[i];
    if (k % 7 == 0)
        printf ("YES\n");
    else
        ;
}

