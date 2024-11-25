int jb6m9qjWvy (int a, int CfU4Vb) {
    int DeDynqm41;
    DeDynqm41 = a > CfU4Vb ? a : CfU4Vb;
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
    return DeDynqm41;
}

int min (int a, int CfU4Vb) {
    int DeDynqm41;
    DeDynqm41 = CfU4Vb > a ? a : CfU4Vb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return DeDynqm41;
}

main () {
    int a [(229 - 224)] [(323 - 318)];
    int CfU4Vb [(536 - 531)];
    int DugVtU4kOB [(141 - 136)];
    int z06FOWMEj;
    int i;
    int isDnqjH26;
    z06FOWMEj = (35 - 35);
    {
        i = 583 - 583;
        while ((594 - 589) > i) {
            for (isDnqjH26 = (234 - 234); isDnqjH26 < (774 - 769); isDnqjH26++)
                scanf ("%d", &a[i][isDnqjH26]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 224 - 224;
        while (i < (27 - 22)) {
            CfU4Vb[i] = jb6m9qjWvy (a[i][(281 - 281)], jb6m9qjWvy (a[i][(78 - 77)], jb6m9qjWvy (a[i][(248 - 246)], jb6m9qjWvy (a[i][(768 - 765)], a[i][(224 - 220)]))));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        isDnqjH26 = 290 - 290;
        while (isDnqjH26 < (361 - 356)) {
            DugVtU4kOB[isDnqjH26] = min (a[(804 - 804)][isDnqjH26], min (a[(796 - 795)][isDnqjH26], min (a[(562 - 560)][isDnqjH26], min (a[(246 - 243)][isDnqjH26], a[(957 - 953)][isDnqjH26]))));
            isDnqjH26 = isDnqjH26 + 1;
        };
    }
    {
        i = 479 - 479;
        while (i < (193 - 188)) {
            {
                isDnqjH26 = 0;
                while (isDnqjH26 < (254 - 249)) {
                    if (CfU4Vb[i] == DugVtU4kOB[isDnqjH26]) {
                        printf ("%d %d %d", i + (601 - 600), isDnqjH26 + (456 - 455), CfU4Vb[i]);
                        z06FOWMEj = 1;
                    }
                    isDnqjH26++;
                };
            }
            i++;
        };
    }
    if (z06FOWMEj == 0)
        printf ("not found");
    printf ("\n");
}

