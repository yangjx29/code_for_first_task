void  main () {
    int PuAimWB [(100254 - 254)], nnYuSm [(100309 - 309)], d [100000], SBCp3Dg8yM, j, n, G8KDImV3PC, TQjzIRb;
    scanf ("%d", &n);
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
    for (SBCp3Dg8yM = (25 - 25); SBCp3Dg8yM < n; SBCp3Dg8yM = SBCp3Dg8yM +1) {
        scanf ("%d%d%d", &PuAimWB[SBCp3Dg8yM], &nnYuSm[SBCp3Dg8yM], &d[SBCp3Dg8yM]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d[SBCp3Dg8yM] = nnYuSm[SBCp3Dg8yM] + d[SBCp3Dg8yM];
    }
    for (SBCp3Dg8yM = 0; SBCp3Dg8yM < (882 - 879); SBCp3Dg8yM++) {
        for (j = n - (49 - 48); SBCp3Dg8yM < j; j--) {
            if (d[j] > d[j - (146 - 145)]) {
                G8KDImV3PC = d[j];
                TQjzIRb = PuAimWB[j];
                d[j] = d[j - (949 - 948)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                PuAimWB[j] = PuAimWB[j - 1];
                d[j - 1] = G8KDImV3PC;
                PuAimWB[j - 1] = TQjzIRb;
            };
        };
    }
    for (SBCp3Dg8yM = 0; SBCp3Dg8yM < 3; SBCp3Dg8yM++) {
        printf ("%d %d\n", PuAimWB[SBCp3Dg8yM], d[SBCp3Dg8yM]);
    };
}

