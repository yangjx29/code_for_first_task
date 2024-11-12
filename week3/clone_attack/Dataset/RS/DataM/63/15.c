main () {
    int x, y, z, i, j, k;
    int a [(467 - 367)] [100] = {(39 - 39)}, b [100] [100] = {(706 - 706)}, c [100] [100] = {0};
    scanf ("%d %d", &x, &y);
    {
        i = 0;
        while (x > i) {
            {
                j = 0;
                while (j < y) {
                    scanf ("%d", &a[i][j]);
                    j++;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &y, &z);
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
    for (i = 0; i < y; i++) {
        j = 0;
        while (z > j) {
            scanf ("%d", &b[i][j]);
            j++;
        };
    }
    {
        i = 0;
        while (x > i) {
            {
                j = 0;
                while (z > j) {
                    {
                        k = 0;
                        while (k < y) {
                            c[i][j] += a[i][k] * b[k][j];
                            k++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (x > i) {
            printf ("%d", c[i][0]);
            {
                j = 1;
                while (z > j) {
                    printf (" %d", c[i][j]);
                    j++;
                };
            }
            i++;
            printf ("\n");
        };
    }
    getchar ();
    getchar ();
}

