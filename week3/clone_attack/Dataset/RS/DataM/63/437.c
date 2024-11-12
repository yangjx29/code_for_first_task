main () {
    int x1;
    int zn8qCktpK1D;
    int x2;
    int y2;
    int oSEH0fbq, j, k;
    int g8BlTu [(138 - 38)] [100];
    int b [100] [100];
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
    int c [100] [100];
    scanf ("%d %d", &x1, &zn8qCktpK1D);
    for (oSEH0fbq = (444 - 444); x1 > oSEH0fbq; oSEH0fbq = oSEH0fbq + 1)
        for (j = 0; zn8qCktpK1D > j; j = j + 1)
            scanf ("%d", &g8BlTu[oSEH0fbq][j]);
    scanf ("%d %d", &x2, &y2);
    for (oSEH0fbq = 0; x2 > oSEH0fbq; oSEH0fbq++)
        for (j = 0; y2 > j; j = j + 1)
            scanf ("%d", &b[oSEH0fbq][j]);
    {
        oSEH0fbq = 0;
        while (oSEH0fbq < x1) {
            for (j = 0; j < y2; j++) {
                c[oSEH0fbq][j] = 0;
                for (k = 0; x2 > k; k = k + 1)
                    c[oSEH0fbq][j] = c[oSEH0fbq][j] + g8BlTu[oSEH0fbq][k] * b[k][j];
                if ((y2 - 1) > j)
                    printf ("%d ", c[oSEH0fbq][j]);
                else
                    printf ("%d\n", c[oSEH0fbq][j]);
            }
            oSEH0fbq = oSEH0fbq + 1;
        };
    }
    return 0;
}

