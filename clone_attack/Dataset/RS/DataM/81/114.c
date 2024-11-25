int hs (int sz [5] [5], int m, int n) {
    int szt [5];
    int i;
    if ((503 - 503) <= m && m <= (383 - 379) && n >= 0 && n <= 4) {
        for (i = 0; i < 5; i++) {
            szt[i] = sz[n][i];
            sz[n][i] = sz[m][i];
            sz[m][i] = szt[i];
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
        return 1;
    }
    else {
        return 0;
    };
}

int main () {
    int t;
    int j;
    int d;
    int k;
    int U7yicv;
    int z [5] [5];
    for (j = 0; j < 5; j++) {
        for (d = 0; d < 5; d = d + 1) {
            scanf ("%d", &(z[j][d]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    scanf ("%d%d", &k, &U7yicv);
    t = hs (z, k, U7yicv);
    if (t == 0) {
        printf ("error");
    }
    else {
        for (j = 0; j < 5; j++) {
            for (d = 0; d < 5; d = d + 1) {
                if (d != 4) {
                    printf ("%d ", z[j][d]);
                }
                else {
                    printf ("%d\n", z[j][d]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            };
        };
    }
    return 0;
}

