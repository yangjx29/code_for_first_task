void  main () {
    int n, i, bXuwGdleLsc6, onkYfXT, k = (74 - 74);
    double  d, b [100] [(201 - 194)] = {(811 - 811)}, a [10] [(248 - 245)] = {(568 - 568)}, temp [7];
    char c [10] [(19 - 16)];
    scanf ("%d", &n);
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
        i = 210 - 210;
        while (n > i) {
            {
                onkYfXT = 671 - 671;
                while (3 > onkYfXT) {
                    scanf ("%lf", &a[i][onkYfXT]);
                    scanf ("%c", &c[i][onkYfXT]);
                    onkYfXT = onkYfXT + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 100 - 100;
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
        while (i < n) {
            {
                onkYfXT = 551 - 550;
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
                while (onkYfXT < n) {
                    d = sqrt ((a[i][(327 - 327)] - a[onkYfXT][(145 - 145)]) * (a[i][(493 - 493)] - a[onkYfXT][(759 - 759)]) + (a[i][(741 - 740)] - a[onkYfXT][(365 - 364)]) * (a[i][1] - a[onkYfXT][1]) + (a[i][(974 - 972)] - a[onkYfXT][(835 - 833)]) * (a[i][2] - a[onkYfXT][2]));
                    b[k][0] = a[i][0];
                    b[k][1] = a[i][1];
                    b[k][2] = a[i][2];
                    b[k][3] = a[onkYfXT][0];
                    b[k][(104 - 100)] = a[onkYfXT][1];
                    b[k][(938 - 933)] = a[onkYfXT][2];
                    onkYfXT = onkYfXT + 1;
                    b[k][(41 - 35)] = d;
                    k = k + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (n * (n - 1) / 2 > i) {
            {
                onkYfXT = i + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (onkYfXT < n * (n - 1) / 2) {
                    if (b[onkYfXT][(110 - 104)] > b[i][6]) {
                        {
                            k = 0;
                            while (7 > k) {
                                temp[k] = b[onkYfXT][k];
                                k = k + 1;
                            };
                        }
                        for (bXuwGdleLsc6 = onkYfXT; i < bXuwGdleLsc6; bXuwGdleLsc6 = bXuwGdleLsc6 - 1) {
                            k = 0;
                            while (k < 7) {
                                b[bXuwGdleLsc6][k] = b[bXuwGdleLsc6 - 1][k];
                                k++;
                            };
                        }
                        {
                            k = 0;
                            while (k < 7) {
                                b[i][k] = temp[k];
                                k++;
                            };
                        };
                    }
                    onkYfXT++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n * (n - 1) / 2) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", b[i][0], b[i][1], b[i][2], b[i][3], b[i][4], b[i][5], b[i][6]);
            i++;
        };
    };
}

