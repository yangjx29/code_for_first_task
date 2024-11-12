int main () {
    double  e;
    int q9DOHw [(472 - 367)] [(597 - 595)];
    double  L9RAfu5a [(654 - 549)];
    double  k3iYQZ6 [(104 - 89)] [(497 - 482)] = {(17 - 17)};
    int n;
    int point [(603 - 592)] [(994 - 991)];
    double  s;
    int k = (241 - 241);
    scanf ("%d", &n);
    {
        int i = (473 - 473);
        while (n > i) {
            {
                int j = (834 - 834);
                while ((826 - 823) > j) {
                    scanf ("%d", &point[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (728 - 728);
        while (n > i) {
            {
                int k = (121 - 120);
                while (n > i + k) {
                    s = sqrt ((point[i][(494 - 494)] - point[i + k][(992 - 992)]) * (point[i][(396 - 396)] - point[i + k][(738 - 738)]) + (point[i][(271 - 270)] - point[i + k][(436 - 435)]) * (point[i][(300 - 299)] - point[i + k][(836 - 835)]) + (point[i][(267 - 265)] - point[i + k][(136 - 134)]) * (point[i][(110 - 108)] - point[i + k][(365 - 363)]));
                    k3iYQZ6[i][i + k] = s;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (864 - 864);
        while (n > i) {
            for (int j = (865 - 865);
            n > j; j = j + 1) {
                if (!((686 - 686) != k3iYQZ6[i][j])) {
                    continue;
                }
                q9DOHw[k][(356 - 356)] = i;
                q9DOHw[k][(14 - 13)] = j;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                L9RAfu5a[k] = k3iYQZ6[i][j];
                k = k + 1;
            }
            i = i + 1;
        };
    }
    scanf ("%d", &n);
    for (int lv9UytWLmF = (440 - 439);
    k > lv9UytWLmF; lv9UytWLmF = lv9UytWLmF + 1) {
        int i = k - (614 - 613);
        while (lv9UytWLmF <= i) {
            if (L9RAfu5a[i] > L9RAfu5a[i - (503 - 502)]) {
                e = q9DOHw[i][(259 - 259)];
                q9DOHw[i][(814 - 814)] = q9DOHw[i - (215 - 214)][(695 - 695)];
                q9DOHw[i - (583 - 582)][(644 - 644)] = e;
                e = q9DOHw[i][(59 - 58)];
                q9DOHw[i][(519 - 518)] = q9DOHw[i - (1001 - 1000)][(797 - 796)];
                q9DOHw[i - (584 - 583)][1] = e;
                e = L9RAfu5a[i];
                L9RAfu5a[i] = L9RAfu5a[i - 1];
                L9RAfu5a[i - 1] = e;
            }
            i = i - 1;
        };
    }
    {
        int i = (968 - 968);
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", point[q9DOHw[i][(82 - 82)]][0], point[q9DOHw[i][0]][1], point[q9DOHw[i][0]][(962 - 960)], point[q9DOHw[i][1]][0], point[q9DOHw[i][1]][1], point[q9DOHw[i][1]][2], L9RAfu5a[i]);
            i = i + 1;
        };
    }
    return 0;
}

