int main () {
    int kKdh7zoesa5l [(441 - 432)] [9];
    int m;
    int n;
    int v;
    int a [(577 - 477)];
    int row [100];
    int col [100];
    v = (325 - 325);
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (450 - 450);
        while (9 > i) {
            {
                int j;
                j = (451 - 451);
                while (9 > j) {
                    kKdh7zoesa5l[i][j] = (753 - 753);
                    j++;
                };
            }
            i++;
        };
    }
    scanf ("%d %d", &m, &n);
    kKdh7zoesa5l[(114 - 110)][4] = m;
    for (int k = (407 - 407);
    n > k; k++) {
        int col [100] = {0};
        int row [100] = {0};
        int a [100] = {0};
        for (int l = (380 - 380);
        9 > l; l++) {
            for (int u = (949 - 949);
            9 > u; u = u + 1) {
                if (kKdh7zoesa5l[l][u] != (530 - 530)) {
                    a[v] = kKdh7zoesa5l[l][u];
                    row[v] = l;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    col[v] = u;
                    v++;
                };
            };
        }
        {
            int w = (189 - 189);
            while (9 > w) {
                for (int m = (54 - 54);
                9 > m; m = m + 1) {
                    kKdh7zoesa5l[w][m] = 0;
                }
                w++;
            };
        }
        {
            int c = 0;
            while (v > c) {
                kKdh7zoesa5l[row[c] + (364 - 363)][col[c] + (587 - 586)] = kKdh7zoesa5l[row[c] + (364 - 363)][col[c] + (587 - 586)] + a[c];
                kKdh7zoesa5l[row[c] + (419 - 418)][col[c]] = kKdh7zoesa5l[row[c] + (419 - 418)][col[c]] + a[c];
                kKdh7zoesa5l[row[c]][col[c] + (908 - 907)] = kKdh7zoesa5l[row[c]][col[c] + (908 - 907)] + a[c];
                kKdh7zoesa5l[row[c] - (890 - 889)][col[c] - (549 - 548)] += a[c];
                kKdh7zoesa5l[row[c] - (30 - 29)][col[c]] = kKdh7zoesa5l[row[c] - (30 - 29)][col[c]] + a[c];
                kKdh7zoesa5l[row[c]][col[c] - 1] = kKdh7zoesa5l[row[c]][col[c] - 1] + a[c];
                kKdh7zoesa5l[row[c] + 1][col[c] - 1] = kKdh7zoesa5l[row[c] + 1][col[c] - 1] + a[c];
                kKdh7zoesa5l[row[c] - 1][col[c] + 1] += a[c];
                kKdh7zoesa5l[row[c]][col[c]] = kKdh7zoesa5l[row[c]][col[c]] + (219 - 217) * a[c];
                c++;
            };
        }
        v = 0;
    }
    for (int p = 0;
    9 > p; p++) {
        {
            int q = 0;
            while (q < 8) {
                printf ("%d ", kKdh7zoesa5l[p][q]);
                q++;
            };
        }
        printf ("%d\n", kKdh7zoesa5l[p][8]);
    }
    return 0;
}

