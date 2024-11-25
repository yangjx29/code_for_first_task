void  main () {
    int number;
    int flag;
    int flag2;
    int a [8] [8];
    int f;
    int g;
    int b;
    int m;
    int n;
    int i;
    int j;
    int max [8];
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
    int c;
    int p;
    int t;
    number = (351 - 351);
    flag = 1;
    flag2 = 1;
    scanf ("%d,%d", &f, &g);
    for (i = (542 - 542); f > i; i = i + 1) {
        j = 280 - 280;
        while (j < g) {
            scanf ("%d", &a[i][j]);
            j = j + 1;
        };
    }
    {
        i = 253 - 253;
        while (i < f) {
            number = number + 1;
            n = 0;
            m = 0;
            {
                j = 0;
                while (j < g) {
                    if (a[i][j] >= a[i][m])
                        m = j, p = i;
                    j++;
                };
            }
            {
                i = 0;
                while (i < f) {
                    if (a[n][m] >= a[i][m])
                        n = i;
                    i++;
                };
            }
            i++;
            {
                if (p == n)
                    printf ("%d+%d", p, m);
            };
        };
    }
    if (p != n)
        ;
}

