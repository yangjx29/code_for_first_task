int main () {
    int k;
    int m;
    int n;
    int B0FBtGIbTZW;
    int JjaP6rLBkgqw;
    int t;
    int a [(884 - 784)] [100];
    int hNmgkXe [100];
    scanf ("%d", &k);
    for (t = 0; t < k; t = t + 1) {
        hNmgkXe[t] = 0;
        scanf ("%d %d", &m, &n);
        for (B0FBtGIbTZW = 0; m > B0FBtGIbTZW; B0FBtGIbTZW = B0FBtGIbTZW +1) {
            for (JjaP6rLBkgqw = 0; n > JjaP6rLBkgqw; JjaP6rLBkgqw = JjaP6rLBkgqw +1) {
                scanf ("%d", &a[B0FBtGIbTZW][JjaP6rLBkgqw]);
            };
        }
        for (B0FBtGIbTZW = 0; B0FBtGIbTZW < m; B0FBtGIbTZW++) {
            hNmgkXe[t] = hNmgkXe[t] + a[B0FBtGIbTZW][0] + a[B0FBtGIbTZW][n - (750 - 749)];
        }
        for (JjaP6rLBkgqw = 0; n > JjaP6rLBkgqw; JjaP6rLBkgqw = JjaP6rLBkgqw +1) {
            hNmgkXe[t] = hNmgkXe[t] + a[0][JjaP6rLBkgqw] + a[m - (732 - 731)][JjaP6rLBkgqw];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        hNmgkXe[t] = hNmgkXe[t] - a[0][0] + a[0][n - 1] + a[m - 1][0] + a[m - 1][n - 1];
    }
    for (t = 0; t < k; t++) {
        if (t != k - 1) {
            printf ("%d\n", hNmgkXe[t]);
        }
        else {
            printf ("%d", hNmgkXe[t]);
        };
    }
    return 0;
}

