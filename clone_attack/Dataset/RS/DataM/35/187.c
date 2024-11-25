main () {
    int fa [(634 - 626)] [(299 - 291)] = {(195 - 195)};
    int k1;
    int N6OMZ79TEb;
    int i;
    int j;
    int a;
    int b;
    int n1;
    int n2;
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
    k1 = (631 - 631);
    N6OMZ79TEb = (736 - 736);
    scanf ("%d,%d", &a, &b);
    {
        i = 882 - 882;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a > i) {
            {
                j = 0;
                while (b > j) {
                    scanf ("%d", &fa[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
            printf ("\n");
        };
    }
    n1 = fa[0][0];
    for (j = 0; b > j; j = j + 1) {
        if (n1 < fa[0][j]) {
            n1 = fa[0][j];
            N6OMZ79TEb = j;
        };
    }
    for (i = 0, n2 = fa[0][N6OMZ79TEb]; a > i; i = i + 1) {
        if (n2 > fa[i][N6OMZ79TEb]) {
            n2 = fa[i][N6OMZ79TEb];
            k1 = i;
        };
    }
    if (n2 == n1)
        printf ("%d+%d\n", k1, N6OMZ79TEb);
    else
        ;
    return 0;
}

