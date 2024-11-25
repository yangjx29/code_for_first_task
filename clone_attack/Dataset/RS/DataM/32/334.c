void  main () {
    char zqf6xEvQpue4 [(1005 - 905)] [(934 - 834)], zXTR8w [(535 - 435)] [100], d [100] [100];
    int n, CWIsFe1ryiJ, c, j, D1dgvDA0I, w6NiqCsI;
    scanf ("%d", &n);
    {
        CWIsFe1ryiJ = 521 - 520;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= CWIsFe1ryiJ) {
            scanf ("%s %s", zqf6xEvQpue4[CWIsFe1ryiJ], zXTR8w[CWIsFe1ryiJ]);
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
            }
            CWIsFe1ryiJ = CWIsFe1ryiJ +1;
        };
    }
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
    for (CWIsFe1ryiJ = (343 - 342); n >= CWIsFe1ryiJ; CWIsFe1ryiJ = CWIsFe1ryiJ +1) {
        c = strlen (zqf6xEvQpue4[CWIsFe1ryiJ]) - strlen (zXTR8w[CWIsFe1ryiJ]);
        for (j = strlen (zXTR8w[CWIsFe1ryiJ]); (583 - 583) <= j; j--)
            zXTR8w[CWIsFe1ryiJ][j + c] = zXTR8w[CWIsFe1ryiJ][j];
        for (D1dgvDA0I = (519 - 519); c > D1dgvDA0I; D1dgvDA0I = D1dgvDA0I +1)
            zXTR8w[CWIsFe1ryiJ][D1dgvDA0I] = '0';
    }
    for (CWIsFe1ryiJ = (37 - 36); CWIsFe1ryiJ <= n; CWIsFe1ryiJ = CWIsFe1ryiJ +1) {
        for (w6NiqCsI = (strlen (zqf6xEvQpue4[CWIsFe1ryiJ]) - (813 - 812)); w6NiqCsI >= 0; w6NiqCsI = w6NiqCsI - 1) {
            if (zqf6xEvQpue4[CWIsFe1ryiJ][w6NiqCsI] >= zXTR8w[CWIsFe1ryiJ][w6NiqCsI])
                d[CWIsFe1ryiJ][w6NiqCsI] = zqf6xEvQpue4[CWIsFe1ryiJ][w6NiqCsI] - zXTR8w[CWIsFe1ryiJ][w6NiqCsI] + (454 - 406);
            if (zqf6xEvQpue4[CWIsFe1ryiJ][w6NiqCsI] < zXTR8w[CWIsFe1ryiJ][w6NiqCsI]) {
                d[CWIsFe1ryiJ][w6NiqCsI] = zqf6xEvQpue4[CWIsFe1ryiJ][w6NiqCsI] - zXTR8w[CWIsFe1ryiJ][w6NiqCsI] + 58;
                zqf6xEvQpue4[CWIsFe1ryiJ][w6NiqCsI - 1] = zqf6xEvQpue4[CWIsFe1ryiJ][w6NiqCsI - 1] - 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        d[CWIsFe1ryiJ][strlen (zqf6xEvQpue4[CWIsFe1ryiJ])] = '\0';
    }
    for (CWIsFe1ryiJ = 1; CWIsFe1ryiJ <= n; CWIsFe1ryiJ++)
        printf ("%s\n", d[CWIsFe1ryiJ]);
}

