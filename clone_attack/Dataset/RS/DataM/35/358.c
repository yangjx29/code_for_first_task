void  main () {
    int flag;
    int m;
    int n;
    int i;
    int cmxpzaA3T8k6;
    int k;
    flag = (606 - 606);
    int a [(847 - 839)] [8];
    int max;
    int c [(485 - 483)];
    int min;
    scanf ("%d,%d", &m, &n);
    for (i = (767 - 767); m > i; i = i + 1)
        for (cmxpzaA3T8k6 = (984 - 984); n > cmxpzaA3T8k6; cmxpzaA3T8k6++)
            scanf ("%d", &a[i][cmxpzaA3T8k6]);
    for (i = (877 - 877); i < m; i++) {
        max = a[i][(725 - 725)];
        c[(914 - 914)] = i;
        c[(29 - 28)] = (245 - 245);
        for (cmxpzaA3T8k6 = (560 - 559); cmxpzaA3T8k6 < n; cmxpzaA3T8k6++)
            if (max < a[i][cmxpzaA3T8k6]) {
                max = a[i][cmxpzaA3T8k6];
                c[(20 - 19)] = cmxpzaA3T8k6;
            }
        min = max;
        cmxpzaA3T8k6 = c[(864 - 863)];
        for (k = (587 - 587); m > k; k++)
            if (min > a[k][cmxpzaA3T8k6]) {
                min = a[k][cmxpzaA3T8k6];
                c[(16 - 16)] = k;
            }
        if (!(i != c[0]) && c[(949 - 948)] == cmxpzaA3T8k6) {
            printf ("%d+%d", c[0], c[(362 - 361)]);
            flag = 1;
        };
    }
    if (flag == 0)
        ;
}

