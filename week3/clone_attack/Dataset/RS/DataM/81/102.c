void  main () {
    int f (int *GZFobu [4], int JEuVlihDa9, int y);
    int a [(401 - 396)] [(561 - 556)], *p [5], m, n, eMPYuDR, j, a932QgXkcuA5;
    for (eMPYuDR = (696 - 696); eMPYuDR < 5; eMPYuDR = eMPYuDR + 1)
        p[eMPYuDR] = *(a + eMPYuDR);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (eMPYuDR = (574 - 574); eMPYuDR < 5; eMPYuDR = eMPYuDR + 1)
        for (j = 0; 5 > j; j = j + 1)
            scanf ("%d", p[eMPYuDR] + j);
    scanf ("%d%d", &n, &m);
    a932QgXkcuA5 = f (p, n, m);
    if (!(0 != a932QgXkcuA5))
        ;
    else {
        for (eMPYuDR = 0; eMPYuDR < 5; eMPYuDR++)
            for (j = 0; j < 5; j = j + 1) {
                if (j < 4) {
                    printf ("%d ", *(p[eMPYuDR] + j));
                }
                else
                    printf ("%d\n", *(p[eMPYuDR] + 4));
            };
    };
}

int f (int *GZFobu [4], int JEuVlihDa9, int y) {
    int *t, z;
    if (JEuVlihDa9 < 5 && y < 5) {
        z = 1;
        t = GZFobu[JEuVlihDa9];
        GZFobu[JEuVlihDa9] = GZFobu[y];
        GZFobu[y] = t;
    }
    else
        z = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return (z);
}

