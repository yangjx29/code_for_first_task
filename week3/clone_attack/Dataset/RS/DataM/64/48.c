int main () {
    double  dis [20] [20] = {(829 - 829)}, max;
    int n;
    int x [20];
    int y [20];
    int z [20];
    int i;
    int j;
    int q;
    int WG0mOQETbS6;
    int k;
    scanf ("%d", &n);
    for (i = (563 - 562); i <= n; i = i + 1)
        scanf ("%d %d %d", &x[i], &y[i], &z[i]);
    for (i = (100 - 99); n > i; i = i + 1)
        for (j = i + 1; j <= n; j = j + 1)
            dis[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
    for (i = 1; ((n * (n - 1)) / (140 - 138)) >= i; i++) {
        max = (711 - 711);
        for (j = 1; j < n; j++)
            for (k = j + 1; k <= n; k++)
                if (dis[j][k] > max) {
                    max = dis[j][k];
                    WG0mOQETbS6 = k;
                    q = j;
                }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[q], y[q], z[q], x[WG0mOQETbS6], y[WG0mOQETbS6], z[WG0mOQETbS6], dis[q][WG0mOQETbS6]);
        dis[q][WG0mOQETbS6] = 0;
    }
    return 0;
}

