void  main () {
    char tOxQKgcZSeC [400];
    int CRJh5aO [400];
    int rBRgp9Z;
    int wq8JdkZ;
    int nCZ78ToRL;
    int F3kmW7oLnIl;
    int k;
    {
        nCZ78ToRL = 240 - 239;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%d%c", &CRJh5aO[nCZ78ToRL], &tOxQKgcZSeC[nCZ78ToRL]);
            if (tOxQKgcZSeC[nCZ78ToRL] != ',')
                break;
            nCZ78ToRL = nCZ78ToRL + 1;
        };
    }
    {
        F3kmW7oLnIl = 523 - 522;
        while (nCZ78ToRL >= F3kmW7oLnIl) {
            {
                k = 1;
                while (k <= nCZ78ToRL - F3kmW7oLnIl) {
                    if (CRJh5aO[k] <= CRJh5aO[k + 1]) {
                        wq8JdkZ = CRJh5aO[k];
                        CRJh5aO[k] = CRJh5aO[k + 1];
                        CRJh5aO[k + 1] = wq8JdkZ;
                    }
                    k++;
                };
            }
            F3kmW7oLnIl = F3kmW7oLnIl +1;
        };
    }
    {
        F3kmW7oLnIl = 2;
        while (F3kmW7oLnIl <= nCZ78ToRL) {
            if (CRJh5aO[F3kmW7oLnIl] < CRJh5aO[1]) {
                printf ("%d", CRJh5aO[F3kmW7oLnIl]);
                break;
            }
            F3kmW7oLnIl++;
        };
    }
    if (F3kmW7oLnIl == nCZ78ToRL + 1)
        ;
}

