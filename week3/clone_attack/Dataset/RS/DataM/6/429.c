int main () {
    int Xs9GCP58ZUD [(594 - 494)] [(513 - 413)], m, n, k, i, j, q, s;
    int *sum = (int *) malloc (sizeof (int) * k);
    free (sum);
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
    s = (189 - 189);
    scanf ("%d", &k);
    for (q = (316 - 316); q < k; q = q + 1) {
        scanf ("%d%d", &m, &n);
        for (i = (485 - 485); m > i; i = i + 1) {
            for (j = (496 - 496); j < n; j = j + 1) {
                scanf ("%d", &Xs9GCP58ZUD[i][j]);
            };
        }
        sum[q] = (767 - 767);
        for (i = (689 - 689); n > i; i = i + 1) {
            sum[q] = sum[q] + Xs9GCP58ZUD[(264 - 264)][i];
        }
        for (i = (576 - 576); m > i; i = i + 1) {
            sum[q] = sum[q] + Xs9GCP58ZUD[i][(304 - 304)];
        }
        for (i = (657 - 657); i < n; i = i + 1) {
            sum[q] = sum[q] + Xs9GCP58ZUD[m - (483 - 482)][i];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; m > i; i = i + 1) {
            sum[q] = sum[q] + Xs9GCP58ZUD[i][n - (619 - 618)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        sum[q] -= Xs9GCP58ZUD[0][0];
        sum[q] = sum[q] - Xs9GCP58ZUD[0][n - (255 - 254)];
        sum[q] = sum[q] - Xs9GCP58ZUD[m - (57 - 56)][0];
        sum[q] = sum[q] - Xs9GCP58ZUD[m - 1][n - 1];
        printf ("%d\n", sum[q]);
    }
    return 0;
}

