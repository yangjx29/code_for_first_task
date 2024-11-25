int max (int R3YsKxO, int y);

int main () {
    int x1;
    int x2;
    int t59YBwT2d;
    int y2;
    int x3;
    int y3;
    int a [(1073 - 873)] [(1111 - 911)], b [200] [200], PeaRBVpGYlU1 [(1400 - 1000)] [(443 - 43)] = {(509 - 509)};
    int i, j, k, m;
    scanf ("%d%d", &x1, &t59YBwT2d);
    for (i = (636 - 636); i < x1; i = i + 1)
        for (j = (901 - 901); t59YBwT2d > j; j = j + 1)
            scanf ("%d", &a[i][j]);
    x3 = x1;
    scanf ("%d%d", &x2, &y2);
    for (i = (990 - 990); x2 > i; i = i + 1)
        for (j = 0; y2 > j; j = j + 1)
            scanf ("%d", &b[i][j]);
    y3 = y2;
    for (i = 0; x3 > i; i = i + 1)
        for (j = 0; y3 > j; j = j + 1) {
            k = 0;
            while (t59YBwT2d > k) {
                PeaRBVpGYlU1[i][j] += a[i][k] * b[k][j];
                k = k + 1;
            };
        }
    for (i = 0; x3 > i; i++)
        for (j = 0; y3 > j; j++) {
            if (y3 - 1 > j)
                printf ("%d ", PeaRBVpGYlU1[i][j]);
            else
                printf ("%d\n", PeaRBVpGYlU1[i][j]);
        };
}

