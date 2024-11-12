main () {
    int T6SMQVe, n, fhMoH79UgksT, xy2cQPnV, j, mwk3HEBA;
    int dp2lc3O1y [(1078 - 977)] [(598 - 497)] = {(543 - 543)};
    int OJrdQ1PK0t [(631 - 530)] [(381 - 280)] = {(866 - 866)};
    int CONqwx [101] [101] = {(588 - 588)};
    scanf ("%d %d", &T6SMQVe, &fhMoH79UgksT);
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
    {
        xy2cQPnV = 345 - 345;
        while (xy2cQPnV <= T6SMQVe -(879 - 878)) {
            {
                j = 518 - 518;
                while (fhMoH79UgksT - (762 - 761) >= j) {
                    scanf ("%d", &dp2lc3O1y[xy2cQPnV][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            xy2cQPnV = xy2cQPnV + 1;
        };
    }
    scanf ("%d %d", &fhMoH79UgksT, &n);
    {
        xy2cQPnV = 823 - 823;
        while (fhMoH79UgksT - (796 - 795) >= xy2cQPnV) {
            {
                j = 361 - 361;
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
                while (n - (704 - 703) >= j) {
                    scanf ("%d", &OJrdQ1PK0t[xy2cQPnV][j]);
                    j = j + 1;
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
            xy2cQPnV = xy2cQPnV + 1;
        };
    }
    {
        xy2cQPnV = 780 - 780;
        while (T6SMQVe -(488 - 487) >= xy2cQPnV) {
            {
                j = 0;
                while (j <= n - (221 - 220)) {
                    {
                        mwk3HEBA = 0;
                        while (mwk3HEBA <= fhMoH79UgksT) {
                            CONqwx[xy2cQPnV][j] = dp2lc3O1y[xy2cQPnV][mwk3HEBA] * OJrdQ1PK0t[mwk3HEBA][j] + CONqwx[xy2cQPnV][j];
                            mwk3HEBA++;
                        };
                    }
                    j++;
                };
            }
            xy2cQPnV++;
        };
    }
    {
        xy2cQPnV = 0;
        while (xy2cQPnV <= T6SMQVe -(829 - 828)) {
            {
                j = 0;
                while (j <= n - 1) {
                    if (j != n - 1)
                        printf ("%d ", CONqwx[xy2cQPnV][j]);
                    else
                        printf ("%d\n", CONqwx[xy2cQPnV][j]);
                    j++;
                };
            }
            xy2cQPnV++;
        };
    }
    getchar ();
    getchar ();
}

