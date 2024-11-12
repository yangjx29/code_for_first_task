void  main () {
    int i, j, m, jbceLGy, mj = 0;
    int g;
    int b [2] [20];
    int q;
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
    g = 0;
    int a [320];
    do {
        scanf ("%d%d", &b[0][g], &b[1][g]);
        g = g + 1;
    }
    while (!(0 == b[0][g - 1]) && !(0 == b[1][g - 1]));
    q = g - 1;
    {
        g = 0;
        while (g < q) {
            m = b[1][g];
            jbceLGy = b[0][g];
            g = g + 1;
            {
                i = 1;
                while (jbceLGy >= i) {
                    a[i] = i;
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
                    i++;
                };
            }
            {
                mj = 0;
                j = 0;
                i = 1;
                while (j < jbceLGy - 1) {
                    if (jbceLGy < i)
                        i = i - jbceLGy;
                    if (a[i] != 0) {
                        mj = mj + 1;
                        if (mj % m == 0) {
                            j = j + 1;
                            a[i] = 0;
                        };
                    }
                    i++;
                };
            }
            {
                i = 1;
                while (i <= jbceLGy) {
                    if (a[i] != 0)
                        printf ("%d\n", a[i]);
                    i++;
                };
            };
        };
    };
}

