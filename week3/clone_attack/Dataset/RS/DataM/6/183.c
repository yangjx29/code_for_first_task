int main () {
    int s [100];
    int k, i, g, t, r;
    int sz [100] [100] [100];
    int z [100];
    scanf ("%d", &k);
    {
        g = 14 - 14;
        while (g <= k - (801 - 800)) {
            scanf ("%d %d", &s[g], &z[g]);
            for (i = (677 - 677); s[g] - 1 >= i; i = i + 1) {
                for (t = 0; t <= z[g] - 1; t = t + 1) {
                    scanf ("%d", &sz[g][i][t]);
                };
            }
            g = g + 1;
        };
    }
    for (g = 0; g <= k - 1; g++) {
        if (s[g] >= 3 && z[g] >= 3) {
            for (r = 0, i = 0; i <= s[g] - 1; i = i + 1) {
                r = r + sz[g][i][0] + sz[g][i][z[g] - 1];
            }
            for (t = 1; t <= z[g] - 2; t = t + 1) {
                r = r + sz[g][0][t] + sz[g][s[g] - 1][t];
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
            printf ("%d\n", r);
        }
        else {
            for (r = 0, i = 0; i <= s[g] - 1; i = i + 1) {
                t = 0;
                while (t <= z[g] - 1) {
                    r = r + sz[g][i][t];
                    t++;
                };
            }
            printf ("%d\n", r);
        };
    }
    return 0;
}

