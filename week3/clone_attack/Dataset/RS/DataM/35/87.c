void  main () {
    int t;
    int p;
    int laKWG1cNLEzn;
    int m;
    int ADv5n7NXzFsw;
    int j;
    int k;
    int fq1c743YCRHx [10] [10];
    int q;
    int gRlUL9yZB;
    int EAu9tIk;
    t = (264 - 264);
    p = 1;
    scanf ("%d,%d", &laKWG1cNLEzn, &m);
    for (ADv5n7NXzFsw = 0; ADv5n7NXzFsw < laKWG1cNLEzn; ADv5n7NXzFsw = ADv5n7NXzFsw +1)
        for (j = 0; m > j; j++)
            scanf ("%d", &fq1c743YCRHx[ADv5n7NXzFsw][j]);
    for (ADv5n7NXzFsw = 0; ADv5n7NXzFsw < laKWG1cNLEzn; ADv5n7NXzFsw++) {
        EAu9tIk = fq1c743YCRHx[ADv5n7NXzFsw][0];
        for (j = 0; j < m; j++)
            if (fq1c743YCRHx[ADv5n7NXzFsw][j] > EAu9tIk) {
                EAu9tIk = fq1c743YCRHx[ADv5n7NXzFsw][j];
                q = j;
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
        for (k = 0; k < laKWG1cNLEzn; k = k + 1)
            if (EAu9tIk > fq1c743YCRHx[k][q])
                p = 0;
        if (p == 1) {
            for (k = 0; k < laKWG1cNLEzn; k++)
                if (fq1c743YCRHx[k][q] == EAu9tIk)
                    gRlUL9yZB = k;
            printf ("%d+%d", gRlUL9yZB, q);
            t++;
            break;
        };
    }
    if (t == 0)
        printf ("No");
}

