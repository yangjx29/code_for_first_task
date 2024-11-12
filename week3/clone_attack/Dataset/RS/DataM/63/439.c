main () {
    int RN8Eex [(1390 - 390)] [(1387 - 387)];
    int kYt0uF [(1907 - 907)] [(1492 - 492)];
    int tUDerVTmj7cn, zzQKfM2, nx1yRkrA4uH, W7m3aA21Yo4j;
    int yN3bUJj0o [1000] [1000];
    scanf ("%d %d", &tUDerVTmj7cn, &zzQKfM2);
    {
        int jU35zbhQ = (752 - 751);
        while (tUDerVTmj7cn >= jU35zbhQ) {
            {
                int IfZY2Rn4 = (415 - 414);
                while (IfZY2Rn4 <= zzQKfM2) {
                    scanf ("%d", &kYt0uF[jU35zbhQ][IfZY2Rn4]);
                    IfZY2Rn4++;
                };
            }
            jU35zbhQ++;
        };
    }
    scanf ("%d %d", &nx1yRkrA4uH, &W7m3aA21Yo4j);
    for (int jU35zbhQ = (538 - 537);
    nx1yRkrA4uH >= jU35zbhQ; jU35zbhQ++) {
        int IfZY2Rn4 = (986 - 985);
        while (W7m3aA21Yo4j >= IfZY2Rn4) {
            scanf ("%d", &RN8Eex[jU35zbhQ][IfZY2Rn4]);
            IfZY2Rn4++;
        };
    }
    {
        int FS0yvjDqWl3 = (988 - 987);
        while (FS0yvjDqWl3 <= tUDerVTmj7cn) {
            {
                int xca0Hx9 = 1;
                while (xca0Hx9 <= W7m3aA21Yo4j) {
                    yN3bUJj0o[FS0yvjDqWl3][xca0Hx9] = (822 - 822);
                    {
                        int jU35zbhQ = 1;
                        while (jU35zbhQ <= zzQKfM2) {
                            yN3bUJj0o[FS0yvjDqWl3][xca0Hx9] += kYt0uF[FS0yvjDqWl3][jU35zbhQ] * RN8Eex[jU35zbhQ][xca0Hx9];
                            jU35zbhQ++;
                        };
                    }
                    if (xca0Hx9 == 1)
                        printf ("%d", yN3bUJj0o[FS0yvjDqWl3][xca0Hx9]);
                    if (xca0Hx9 > 1)
                        printf (" %d", yN3bUJj0o[FS0yvjDqWl3][xca0Hx9]);
                    xca0Hx9++;
                };
            }
            if (FS0yvjDqWl3 < tUDerVTmj7cn)
                ;
            FS0yvjDqWl3 = FS0yvjDqWl3 +1;
        };
    };
}

