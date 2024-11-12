main () {
    int x1, pEJceGO2v0, x2, lh3ov9Syf, i, wl1hJ4Mroj, k, XUlIHGWnpo83;
    int hRUFQ5wkquZ0 [100] [100] = {0};
    int B [100] [100] = {0};
    scanf ("%d%d", &x1, &pEJceGO2v0);
    for (i = 0; x1 > i; i = i + 1)
        for (wl1hJ4Mroj = 0; pEJceGO2v0 > wl1hJ4Mroj; wl1hJ4Mroj = wl1hJ4Mroj + 1) {
            scanf ("%d", &hRUFQ5wkquZ0[i][wl1hJ4Mroj]);
        }
    scanf ("%d%d", &x2, &lh3ov9Syf);
    for (i = 0; x2 > i; i = i + 1)
        for (wl1hJ4Mroj = 0; lh3ov9Syf > wl1hJ4Mroj; wl1hJ4Mroj = wl1hJ4Mroj + 1) {
            scanf ("%d", &B[i][wl1hJ4Mroj]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
    for (i = 0; i < x1; i = i + 1) {
        wl1hJ4Mroj = 0;
        while (lh3ov9Syf > wl1hJ4Mroj) {
            XUlIHGWnpo83 = 0;
            for (k = 0; x2 > k; k++)
                XUlIHGWnpo83 = XUlIHGWnpo83 +hRUFQ5wkquZ0[i][k] * B[k][wl1hJ4Mroj];
            if (lh3ov9Syf - 1 > wl1hJ4Mroj)
                printf ("%d ", XUlIHGWnpo83);
            if (wl1hJ4Mroj == lh3ov9Syf - 1)
                printf ("%d\n", XUlIHGWnpo83);
            wl1hJ4Mroj = wl1hJ4Mroj + 1;
        };
    };
}

