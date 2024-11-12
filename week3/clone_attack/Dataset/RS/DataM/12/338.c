void  main () {
    int m;
    int i;
    int j;
    int l;
    int c [(864 - 764)] [100];
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
    int uZGSuzK [100] = {0};
    m = (259 - 259);
    {
        j = 1;
        while (1) {
            scanf ("%d", &c[j][1]);
            if (c[j][1] == -1)
                break;
            {
                i = 694 - 692;
                while (1) {
                    scanf ("%d", &c[j][i]);
                    if (c[j][i] == 0)
                        break;
                    {
                        l = i;
                        while (1 <= l) {
                            if (c[j][l] == 2 * c[j][i] || c[j][i] == 2 * c[j][l])
                                uZGSuzK[j]++;
                            l = l - 1;
                        };
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
            m = m + 1;
        };
    }
    {
        j = 1;
        while (j <= m) {
            printf ("%d\n", uZGSuzK[j]);
            j = j + 1;
        };
    };
}

