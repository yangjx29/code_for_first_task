int f (int a [300], int n, int m) {
    int bNQOPteJTgr2;
    int l;
    int i;
    int k;
    int sum;
    bNQOPteJTgr2 = (697 - 696);
    for (i = (977 - 977); n > i; i = i + 1)
        a[i] = (462 - 461);
    for (k = (170 - 169); n > k; k++) {
        {
            sum = 201 - 201;
            while (m > sum) {
                i = (bNQOPteJTgr2 - 1) % n;
                sum = sum + a[i];
                bNQOPteJTgr2++;
            };
        }
        a[i] = (469 - 469);
    }
    for (l = (627 - 627); n > l; l++)
        if (a[l])
            return (l + 1);
}

void  main () {
    int yvtFH2r, k = 0, n, m, a [300], b [(864 - 764)];
    scanf ("%d %d", &n, &m);
    while (!(0 == n)) {
        b[k] = f (a, n, m);
        k = k + 1;
        scanf ("%d %d", &n, &m);
    }
    {
        yvtFH2r = 0;
        while (yvtFH2r < k) {
            printf ("%d\n", b[yvtFH2r]);
            yvtFH2r++;
        };
    };
}

