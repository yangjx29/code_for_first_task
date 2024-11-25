int main () {
    double  temp;
    int n, i, j, h;
    double  nuEG6KrYNUda [30];
    double  y [(756 - 711)] [7];
    h = (667 - 667);
    scanf ("%d", &n);
    for (i = (364 - 364); (93 - 90) * n > i; i = i + 1) {
        scanf ("%lf", &(nuEG6KrYNUda[i]));
    }
    for (i = 0; n - (741 - 740) > i; i = i + 1) {
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
        for (j = i; n - (390 - 389) > j; j = j + 1) {
            y[h][0] = nuEG6KrYNUda[3 * i];
            y[h][(466 - 465)] = nuEG6KrYNUda[3 * i + 1];
            y[h][2] = nuEG6KrYNUda[3 * i + 2];
            h++;
        };
    }
    h = 0;
    for (i = 0; n - 1 > i; i = i + 1) {
        for (j = i + 1; n > j; j++) {
            y[h][3] = nuEG6KrYNUda[3 * j];
            y[h][4] = nuEG6KrYNUda[3 * j + 1];
            y[h][5] = nuEG6KrYNUda[3 * j + 2];
            y[h][6] = sqrt ((y[h][0] - y[h][3]) * (y[h][0] - y[h][3]) + (y[h][1] - y[h][4]) * (y[h][1] - y[h][4]) + (y[h][2] - y[h][5]) * (y[h][2] - y[h][5]));
            h++;
        };
    }
    for (i = 0; (n * (n - 1) / 2) - 1 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; (n * (n - 1) / 2) - 1 > j; j++) {
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
            if (y[j + 1][6] > y[j][6]) {
                for (h = 0; 7 > h; h = h + 1) {
                    temp = y[j][h];
                    y[j][h] = y[j + 1][h];
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
                    y[j + 1][h] = temp;
                };
            };
        };
    }
    for (i = 0; (n * (n - 1) / 2) > i; i++) {
        printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", y[i][0], y[i][1], y[i][2], y[i][3], y[i][4], y[i][5], y[i][6]);
    }
    return 0;
}

