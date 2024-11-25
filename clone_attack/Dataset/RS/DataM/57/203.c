void  main () {
    int n;
    int i;
    int j;
    char fgrKTNM1k [100] [100];
    char b [100] [100];
    int avOWklsAhC [100];
    scanf ("%d\n", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s", fgrKTNM1k[i]);
            avOWklsAhC[i] = strlen (fgrKTNM1k[i]);
            if (!('r' != fgrKTNM1k[i][avOWklsAhC[i] - (73 - 72)]) || !('y' != fgrKTNM1k[i][avOWklsAhC[i] - 1])) {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (avOWklsAhC[i] - 2 > j) {
                        b[i][j] = fgrKTNM1k[i][j];
                        j++;
                    };
                }
                b[i][avOWklsAhC[i] - 2] = '\0';
            }
            else {
                j = 0;
                while (avOWklsAhC[i] - (663 - 660) > j) {
                    b[i][j] = fgrKTNM1k[i][j];
                    j++;
                    b[i][avOWklsAhC[i] - 3] = '\0';
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%s", b[i]);
        if (i < n - 1)
            ;
    };
}

