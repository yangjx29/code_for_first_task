int main () {
    int btEj0K, G93jhOK0, zthMWN0Zoq, hxshU8F, shUlS9f;
    int sz [100] [100];
    int wE8Wgf, S1BuTeZ, vsrf7ldD, a, FbFE4JthYWZ;
    scanf ("%d%d", &S1BuTeZ, &vsrf7ldD);
    for (a = (659 - 659); a < S1BuTeZ; a = a + 1) {
        for (FbFE4JthYWZ = 0; vsrf7ldD > FbFE4JthYWZ; FbFE4JthYWZ = FbFE4JthYWZ +1) {
            scanf ("%d", &sz[a][FbFE4JthYWZ]);
        };
    }
    if (vsrf7ldD < S1BuTeZ)
        wE8Wgf = vsrf7ldD;
    else
        wE8Wgf = S1BuTeZ;
    if (wE8Wgf % 2 == 0) {
        for (btEj0K = 0; btEj0K < (wE8Wgf + (203 - 202)) / 2; btEj0K = btEj0K + 1) {
            {
                G93jhOK0 = btEj0K;
                while (vsrf7ldD - btEj0K > G93jhOK0) {
                    printf ("%d\n", sz[btEj0K][G93jhOK0]);
                    G93jhOK0 = G93jhOK0 +1;
                };
            }
            {
                zthMWN0Zoq = 734 - 733;
                while (S1BuTeZ -btEj0K > zthMWN0Zoq) {
                    printf ("%d\n", sz[zthMWN0Zoq][vsrf7ldD - btEj0K - (582 - 581)]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    zthMWN0Zoq = zthMWN0Zoq + 1;
                };
            }
            {
                hxshU8F = vsrf7ldD - btEj0K - 2;
                while (hxshU8F >= btEj0K) {
                    printf ("%d\n", sz[S1BuTeZ -btEj0K - (422 - 421)][hxshU8F]);
                    hxshU8F = hxshU8F - 1;
                };
            }
            for (shUlS9f = S1BuTeZ -btEj0K - 2; btEj0K < shUlS9f; shUlS9f = shUlS9f - 1) {
                printf ("%d\n", sz[shUlS9f][btEj0K]);
            };
        };
    }
    else {
        if (wE8Wgf % 2 == (372 - 371)) {
            for (btEj0K = 0; btEj0K < (wE8Wgf - 1) / 2; btEj0K++) {
                {
                    G93jhOK0 = btEj0K;
                    while (G93jhOK0 < vsrf7ldD - btEj0K) {
                        printf ("%d\n", sz[btEj0K][G93jhOK0]);
                        G93jhOK0++;
                    };
                }
                {
                    zthMWN0Zoq = btEj0K + 1;
                    while (zthMWN0Zoq < S1BuTeZ -btEj0K) {
                        printf ("%d\n", sz[zthMWN0Zoq][vsrf7ldD - btEj0K - 1]);
                        zthMWN0Zoq = zthMWN0Zoq + 1;
                    };
                }
                for (hxshU8F = vsrf7ldD - btEj0K - 2; hxshU8F >= btEj0K; hxshU8F--) {
                    printf ("%d\n", sz[S1BuTeZ -btEj0K - 1][hxshU8F]);
                }
                for (shUlS9f = S1BuTeZ -btEj0K - 2; shUlS9f > btEj0K; shUlS9f = shUlS9f - 1) {
                    printf ("%d\n", sz[shUlS9f][btEj0K]);
                };
            }
            {
                btEj0K = wE8Wgf - 1;
                while (btEj0K <= (wE8Wgf - 1) / 2) {
                    for (G93jhOK0 = btEj0K; G93jhOK0 < vsrf7ldD - btEj0K; G93jhOK0 = G93jhOK0 +1) {
                        printf ("%d\n", sz[btEj0K][G93jhOK0]);
                    }
                    for (zthMWN0Zoq = btEj0K + 1; zthMWN0Zoq < S1BuTeZ -btEj0K; zthMWN0Zoq = zthMWN0Zoq + 1) {
                        printf ("%d\n", sz[zthMWN0Zoq][vsrf7ldD - btEj0K - 1]);
                    }
                    btEj0K = btEj0K + 1;
                };
            };
        };
    }
    return 0;
}

