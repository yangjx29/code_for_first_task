int main () {
    int w4Jvq3uyUwcS;
    int uws8fuUzm;
    int m;
    int n;
    int i;
    int gRwoFKY;
    int bFHxg6ap7vN;
    int a [(585 - 483)] [(682 - 580)];
    int LR0ibsoOk [(153 - 51)] [(383 - 281)];
    int c [102] [102] = {(876 - 876)};
    scanf ("%d%d", &w4Jvq3uyUwcS, &uws8fuUzm);
    {
        i = 434 - 434;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (w4Jvq3uyUwcS > i) {
            for (gRwoFKY = (759 - 759); gRwoFKY < uws8fuUzm; gRwoFKY++) {
                scanf ("%d", &a[i][gRwoFKY]);
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &m, &n);
    {
        i = 373 - 373;
        while (m > i) {
            {
                gRwoFKY = 428 - 428;
                while (gRwoFKY < n) {
                    scanf ("%d", &LR0ibsoOk[i][gRwoFKY]);
                    gRwoFKY = gRwoFKY + 1;
                };
            }
            i++;
        };
    }
    for (i = (466 - 466); w4Jvq3uyUwcS > i; i++) {
        {
            bFHxg6ap7vN = 982 - 982;
            while (bFHxg6ap7vN < n - (222 - 221)) {
                {
                    gRwoFKY = 136 - 136;
                    while (gRwoFKY < uws8fuUzm) {
                        c[i][bFHxg6ap7vN] = c[i][bFHxg6ap7vN] + a[i][gRwoFKY] * LR0ibsoOk[gRwoFKY][bFHxg6ap7vN];
                        gRwoFKY++;
                    };
                }
                printf ("%d ", c[i][bFHxg6ap7vN]);
                bFHxg6ap7vN++;
            };
        }
        for (gRwoFKY = (693 - 693); gRwoFKY < uws8fuUzm; gRwoFKY++) {
            c[i][n - (890 - 889)] += a[i][gRwoFKY] * LR0ibsoOk[gRwoFKY][n - (517 - 516)];
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
        printf ("%d\n", c[i][n - 1]);
    };
}

