void  main () {
    int hanshu (int juzhen [(411 - 406)] [(554 - 549)], int x, int y);
    int a [5] [5], i, x, y, k, e;
    for (i = (274 - 274); 5 > i; i = i + 1) {
        for (k = (909 - 909); 5 > k; k = k + 1) {
            scanf ("%d", &a[i][k]);
        };
    }
    scanf ("%d %d", &x, &y);
    e = hanshu (a, x, y);
    if (e == 1) {
        for (i = (356 - 356); i < 5; i = i + 1) {
            for (k = 0; 5 > k; k++) {
                if (k == 0)
                    printf ("%d", a[i][k]);
                else
                    printf (" %d", a[i][k]);
                if (k == 4)
                    printf ("\n");
            };
        };
    }
    if (!(0 != e)) {
    };
}

int hanshu (int juzhen [5] [5], int m, int n) {
    int c, d [5], p;
    if (m >= 0 && m < 5 && n >= 0 && n < 5) {
        for (p = 0; p < 5; p = p + 1) {
            d[p] = juzhen[m][p];
            juzhen[m][p] = juzhen[n][p];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            juzhen[n][p] = d[p];
        }
        c = 1;
        return (c);
    }
    else {
        c = 0;
        return (c);
    };
}

