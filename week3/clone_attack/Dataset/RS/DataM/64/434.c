main () {
    double  z [10] [10];
    double  y [(388 - 378)] [(961 - 951)];
    int x [(619 - 609)] [(757 - 754)];
    double  tdv3e8c9G2f;
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
    int a, b, JqkzXS6sQv1, n, m, l, p, bDgHwTUX5B;
    scanf ("%d", &n);
    {
        a = 809 - 809;
        while (a <= (790 - 781)) {
            {
                b = 427 - 427;
                while ((802 - 793) >= b) {
                    y[a][b] = -(415 - 414);
                    b = b + 1;
                };
            }
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
            a = a + 1;
        };
    }
    {
        a = 318 - 318;
        while (a <= n - (46 - 45)) {
            {
                b = 964 - 964;
                while (b <= (550 - 548)) {
                    scanf ("%d", &x[a][b]);
                    b = b + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            a = a + 1;
        };
    }
    {
        a = 524 - 524;
        while (n - (280 - 279) >= a) {
            {
                b = 382 - 381;
                while (b <= n - (692 - 691)) {
                    y[a][b] = sqrt ((x[a][(268 - 268)] - x[b][0]) * (x[a][0] - x[b][0]) + (x[a][(882 - 881)] - x[b][1]) * (x[a][1] - x[b][1]) + (x[a][(659 - 657)] - x[b][(771 - 769)]) * (x[a][2] - x[b][2]));
                    b = b + 1;
                };
            }
            a = a + 1;
        };
    }
    {
        a = 0;
        while (a <= (571 - 562)) {
            {
                b = 0;
                while (b <= 9) {
                    z[a][b] = y[a][b];
                    b = b + 1;
                };
            }
            a = a + 1;
        };
    }
    {
        a = 1;
        while (a <= (((n * n) / 2) - (n / 2))) {
            l = -1;
            m = -1;
            tdv3e8c9G2f = -1;
            {
                b = 0;
                while (b <= n - 1) {
                    {
                        JqkzXS6sQv1 = 0;
                        while (JqkzXS6sQv1 <= n - 1) {
                            if (y[b][JqkzXS6sQv1] > tdv3e8c9G2f) {
                                l = JqkzXS6sQv1;
                                m = b;
                                tdv3e8c9G2f = y[b][JqkzXS6sQv1];
                            }
                            else
                                ;
                            JqkzXS6sQv1 = JqkzXS6sQv1 +1;
                        };
                    }
                    b++;
                };
            }
            y[m][l] = -1;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[m][0], x[m][1], x[m][2], x[l][0], x[l][1], x[l][2], z[m][l]);
            a++;
        };
    };
}

