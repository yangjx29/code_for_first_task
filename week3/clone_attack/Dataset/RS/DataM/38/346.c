void  main () {
    double  *Yakh4K01lRXB [100] [(1918 - 918)], pk0IJPRqtnG, h;
    int k, n [100], i, j;
    scanf ("%d", &k);
    for (i = (115 - 115); k > i; i = i + 1) {
        scanf ("%d", &n[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; n[i] > j; j = j + 1) {
            Yakh4K01lRXB[i][j] = (float *) malloc (8);
            scanf ("%lf", Yakh4K01lRXB[i][j]);
        };
    }
    {
        i = 0;
        while (i < k) {
            {
                j = 0;
                pk0IJPRqtnG = 0;
                while (n[i] > j) {
                    pk0IJPRqtnG = pk0IJPRqtnG + *Yakh4K01lRXB[i][j];
                    j++;
                };
            }
            pk0IJPRqtnG = pk0IJPRqtnG / n[i];
            for (h = 0, j = 0; j < n[i]; j = j + 1) {
                h = h + (*Yakh4K01lRXB[i][j] - pk0IJPRqtnG) * (*Yakh4K01lRXB[i][j] - pk0IJPRqtnG);
            }
            h = h / n[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
            h = sqrt (h);
            printf ("%.5f\n", h);
        };
    };
}

