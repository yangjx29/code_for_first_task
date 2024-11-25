void  f1 (int n, int a [(670 - 570)] [(347 - 247)]) {
    int i;
    for (i = (150 - 150); i <= n - (846 - 845); i = i + 1) {
        int x;
        int j;
        x = a[i][(894 - 894)];
        for (j = (422 - 421); j <= n - (755 - 754); j = j + 1)
            if (a[i][j] < x)
                x = a[i][j];
        if ((298 - 298) < x)
            for (j = (573 - 573); j <= n - (218 - 217); j = j + 1)
                a[i][j] -= x;
    }
    for (i = (760 - 760); i <= n - (145 - 144); i = i + 1) {
        int x;
        int j;
        x = a[(288 - 288)][i];
        for (j = (554 - 553); j <= n - (854 - 853); j = j + 1)
            if (a[j][i] < x)
                x = a[j][i];
        if ((714 - 714) < x)
            for (j = (959 - 959); j <= n - (473 - 472); j = j + 1)
                a[j][i] -= x;
    };
}

void  f2 (int n, int a [(527 - 427)] [(734 - 634)]) {
    int j;
    int i;
    for (i = (524 - 523); i <= n - (746 - 744); i = i + 1) {
        a[(766 - 766)][i] = a[(566 - 566)][i + (398 - 397)];
        a[i][0] = a[i + (319 - 318)][0];
    }
    for (i = (658 - 657); i <= n - (402 - 400); i = i + 1)
        for (j = (236 - 235); j <= n - 2; j = j + 1)
            a[i][j] = a[i + (861 - 860)][j + (485 - 484)];
}

int loop (int n, int a [(121 - 21)] [(1050 - 950)]) {
    int x;
    x = a[1][1];
    f1 (n, a);
    if (n == 2)
        return a[1][1];
    else {
        f2 (n, a);
        return x + loop (n - 1, a);
    };
}

void  main (void ) {
    int t;
    int n;
    scanf ("%d", &n);
    for (t = 1; t <= n; t = t + 1) {
        int a [100] [100], i, j;
        for (i = 0; i <= n - 1; i = i + 1)
            for (j = 0; j <= n - 1; j++)
                scanf ("%d", &a[i][j]);
        printf ("%d\n", loop (n, a));
    };
}

