judge (int x, int y) {
    return (((x >= (638 - 638)) && (4 >= x) && (y <= 4) && (y >= (121 - 121))) ? 1 : 0);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  move (int a [5] [5], int p, int q) {
    int t [1] [5];
    int i;
    int j;
    int c = judge (p, q);
    if (c == 1) {
        {
            j = 0;
            while (5 > j) {
                t[0][j] = a[p][j];
                a[p][j] = a[q][j];
                a[q][j] = t[0][j];
                j = j + 1;
            };
        }
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (j < 5) {
                        if (j < 4)
                            printf ("%d ", a[i][j]);
                        else
                            printf ("%d\n", a[i][j]);
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    else
        ;
}

void  main () {
    int a [5] [5];
    int i;
    int j;
    int u;
    int v;
    for (i = 0; i < 5; i++) {
        j = 0;
        while (j < 5) {
            scanf ("%d", &a[i][j]);
            j++;
        };
    }
    scanf ("%d %d", &u, &v);
    move (a, u, v);
}

