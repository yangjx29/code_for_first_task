int main () {
    int *p;
    int nDoAEWv;
    int m;
    int ZgxwRnr;
    int DUhXif;
    int u5TvL8nZP4x;
    int xgsAwZ [100] [100];
    int VxmlhL;
    scanf ("%d", &nDoAEWv);
    for (; 0 < nDoAEWv; nDoAEWv = nDoAEWv - 1) {
        scanf ("%d%d", &m, &ZgxwRnr);
        for (DUhXif = 0; DUhXif < m; DUhXif = DUhXif +1)
            for (u5TvL8nZP4x = 0; u5TvL8nZP4x < ZgxwRnr; u5TvL8nZP4x = u5TvL8nZP4x + 1)
                scanf ("%d", &xgsAwZ[DUhXif][u5TvL8nZP4x]);
        VxmlhL = 0;
        for (p = xgsAwZ[0]; xgsAwZ[0] + ZgxwRnr > p; p = p + 1)
            VxmlhL += *p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            p = p + 99;
            while (p < xgsAwZ[0] + (m - 1) * 100 + ZgxwRnr) {
                VxmlhL += *p;
                p = p + 100;
            };
        }
        for (p = p - 101; p > xgsAwZ[0] + (m - 1) * 100 - 1; p = p - 1)
            VxmlhL += *p;
        for (p = p - 99; p > xgsAwZ[0]; p = p - 100)
            VxmlhL += *p;
        printf ("%d\n", VxmlhL);
    }
    return 0;
}

