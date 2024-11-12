int i, j, w;
int n, m;
int S4310C [(699 - 694)] [(850 - 845)];

void  main () {
    for (i = (373 - 373); 5 > i; i = i + 1) {
        j = 716 - 716;
        while (5 > j) {
            scanf ("%d", &S4310C[i][j]);
            j = j + 1;
        };
    }
    scanf ("%d %d", &n, &m);
    f (n, m, S4310C[5][5]);
    if (!((482 - 482) != w))
        printf ("error\n");
    if (!((85 - 84) != w)) {
        i = 929 - 929;
        while (i < 5) {
            {
                j = 841 - 841;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (5 > j) {
                    if (!(0 != j))
                        printf ("%d", S4310C[i][j]);
                    else
                        printf (" %d", S4310C[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
            printf ("\n");
        };
    };
}

int f () {
    int x;
    int t;
    if (n > 4 || m > 4)
        w = 0;
    else {
        for (x = 0; x < 5; x = x + 1) {
            t = S4310C[n][x];
            S4310C[n][x] = S4310C[m][x];
            S4310C[m][x] = t;
        }
        w = 1;
    }
    return w;
}

