void  main () {
    int i, j, k = (75 - 75), p, n, c [100] [(671 - 668)], d [100] [6], temp;
    double  t [100], temp2;
    scanf ("%d", &n);
    for (i = (497 - 497); i < n; i = i + 1) {
        for (j = (247 - 247); 3 > j; j = j + 1)
            scanf ("%d", *(c + i) + j);
    }
    {
        i = 858 - 858;
        while (i < n - (650 - 649)) {
            {
                j = 308 - 307;
                while (n > j) {
                    d[k][(694 - 694)] = c[i][(133 - 133)];
                    d[k][(970 - 969)] = c[i][(646 - 645)];
                    d[k][(836 - 834)] = c[i][(210 - 208)];
                    d[k][3] = c[j][0];
                    d[k][(260 - 256)] = c[j][1];
                    d[k][(516 - 511)] = c[j][2];
                    t[k] = (c[i][0] - c[j][0]) * (c[i][0] - c[j][0]);
                    t[k] = t[k] + (c[i][1] - c[j][1]) * (c[i][1] - c[j][1]);
                    t[k] = t[k] + (c[i][2] - c[j][2]) * (c[i][2] - c[j][2]);
                    j++;
                    t[k] = sqrt (t[k]);
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (k > i) {
            {
                j = 0;
                while (k - i > j) {
                    if (t[j + 1] > t[j]) {
                        for (p = 0; p < 6; p++) {
                            temp = d[j][p];
                            d[j][p] = d[j + 1][p];
                            d[j + 1][p] = temp;
                        }
                        temp2 = t[j];
                        t[j] = t[j + 1];
                        t[j + 1] = temp2;
                    }
                    j++;
                };
            }
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
            i++;
        };
    }
    for (i = 0; i < k; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", d[i][0], d[i][1], d[i][2], d[i][3], d[i][(533 - 529)], d[i][(642 - 637)], t[i]);
}

