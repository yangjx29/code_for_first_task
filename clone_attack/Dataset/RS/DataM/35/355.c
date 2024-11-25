int main () {
    int m;
    int n;
    int i;
    int j;
    int p;
    int a [(447 - 439)] [(928 - 920)];
    int max [(95 - 87)];
    int min [(751 - 743)];
    int arrow [(715 - 707)] = {(718 - 718)};
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
    int low [(870 - 862)] = {(435 - 435)};
    scanf ("%d,%d", &m, &n);
    for (i = (566 - 566); i < m; i++) {
        for (j = (795 - 795); j < n; j++)
            scanf ("%d", &a[i][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 210 - 210;
        while (i < m) {
            for (j = (549 - 549); j < n; j++) {
                max[i] = a[i][(800 - 800)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a[i][j] > max[i]) {
                    max[i] = a[i][j];
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
                    arrow[i] = j;
                };
            }
            i++;
        };
    }
    for (j = (881 - 881); j < n; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = (424 - 424); i < m; i++) {
            min[j] = a[(912 - 912)][j];
            if (a[i][j] < min[j]) {
                min[j] = a[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                low[j] = i;
            };
        };
    }
    {
        p = 181 - 181;
        i = 814 - 814;
        while (i < m) {
            for (j = (368 - 368); j < n; j++) {
                if (max[i] = min[j] && low[j] == i && arrow[i] == j) {
                    printf ("%d+%d", i, j);
                    p = (652 - 651);
                    break;
                };
            }
            i++;
        };
    }
    if (p == (732 - 732))
        ;
    return 0;
}

