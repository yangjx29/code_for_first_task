void  main () {
    int VwGNVbR8ud [8] [8], m, PRMbFa57cV6, Ssf09V3wEdO, k, i, A4TwunvD, vBrK4sYZ6, DXPz5Z;
    DXPz5Z = (61 - 61);
    scanf ("%d,%d", &m, &PRMbFa57cV6);
    for (i = (498 - 498); m > i; i = i + 1) {
        for (A4TwunvD = (385 - 385); PRMbFa57cV6 > A4TwunvD; A4TwunvD = A4TwunvD +1)
            scanf ("%d", &VwGNVbR8ud[i][A4TwunvD]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (512 - 512); m > i; i = i + 1) {
        vBrK4sYZ6 = 0;
        for (A4TwunvD = 0; PRMbFa57cV6 > A4TwunvD; A4TwunvD = A4TwunvD +1) {
            if (VwGNVbR8ud[i][vBrK4sYZ6] < VwGNVbR8ud[i][A4TwunvD]) {
                vBrK4sYZ6 = A4TwunvD;
            };
        }
        Ssf09V3wEdO = (713 - 713);
        for (k = 0; k < m; k = k + 1) {
            if (VwGNVbR8ud[Ssf09V3wEdO][vBrK4sYZ6] > VwGNVbR8ud[k][vBrK4sYZ6])
                Ssf09V3wEdO = k;
        }
        if (Ssf09V3wEdO == i) {
            printf ("%d+%d", Ssf09V3wEdO, vBrK4sYZ6);
            DXPz5Z = (281 - 280);
        };
    }
    if (DXPz5Z == 0)
        printf ("No");
}

