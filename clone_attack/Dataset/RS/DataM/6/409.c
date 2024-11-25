DUHw6fEKiPhn (int *wcMeTlRU [], int m, int n) {
    int ng19nm;
    int bnZXAy5lLHW;
    ng19nm = (928 - 928);
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
    for (bnZXAy5lLHW = (222 - 222); bnZXAy5lLHW < n; bnZXAy5lLHW++)
        ng19nm = ng19nm + *(wcMeTlRU[(477 - 477)] + bnZXAy5lLHW) + *(wcMeTlRU[m - 1] + bnZXAy5lLHW);
    {
        bnZXAy5lLHW = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bnZXAy5lLHW < m - 1) {
            ng19nm = ng19nm + *(wcMeTlRU [bnZXAy5lLHW]) +*(wcMeTlRU[bnZXAy5lLHW] + n - 1);
            bnZXAy5lLHW = bnZXAy5lLHW + 1;
        };
    }
    return (ng19nm);
}

main () {
    int *UwxycmDRb [100];
    int KurOHoFG5l, bnZXAy5lLHW, j, m, n, ng19nm, l;
    scanf ("%d", &KurOHoFG5l);
    for (l = 0; l < KurOHoFG5l; l = l + 1) {
        scanf ("%d %d", &m, &n);
        {
            bnZXAy5lLHW = 0;
            while (bnZXAy5lLHW < m) {
                UwxycmDRb[bnZXAy5lLHW] = (int *) malloc (n * sizeof (int));
                bnZXAy5lLHW++;
            };
        }
        for (bnZXAy5lLHW = 0; bnZXAy5lLHW < m; bnZXAy5lLHW++) {
            j = 0;
            while (j < n) {
                scanf ("%d", UwxycmDRb[bnZXAy5lLHW] + j);
                j++;
            };
        }
        ng19nm = DUHw6fEKiPhn (UwxycmDRb, m, n);
        printf ("%d\n", ng19nm);
    };
}

