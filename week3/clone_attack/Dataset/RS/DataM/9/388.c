int main () {
    char s [(667 - 567)] [MAX +(894 - 893)];
    char g [(534 - 434)] [MAX +(953 - 952)];
    int h [(1086 - 986)];
    int k [100], a, X6RhH8MloN, j;
    char q [100];
    int n, e;
    scanf ("%d", &n);
    for (X6RhH8MloN = (680 - 680); X6RhH8MloN < n; X6RhH8MloN++) {
        scanf ("%s", s[X6RhH8MloN]);
        scanf ("%d", &k[X6RhH8MloN]);
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
    a = (193 - 193);
    j = (94 - 94);
    {
        X6RhH8MloN = 716 - 716;
        while (X6RhH8MloN < n) {
            if ((228 - 168) <= k[X6RhH8MloN]) {
                a++;
                h[j] = k[X6RhH8MloN];
                strcpy (g[j], s[X6RhH8MloN]);
                j++;
                k[X6RhH8MloN] = (90 - 90);
            }
            X6RhH8MloN++;
        };
    }
    {
        X6RhH8MloN = 1;
        while (X6RhH8MloN <= a) {
            {
                j = 88 - 88;
                while (a - X6RhH8MloN > j) {
                    if (h[j + 1] > h[j]) {
                        e = h[j];
                        h[j] = h[j + 1];
                        h[j + 1] = e;
                        strcpy (q, g[j]);
                        strcpy (g[j], g[j + 1]);
                        strcpy (g[j + 1], q);
                    }
                    j++;
                };
            }
            X6RhH8MloN++;
        };
    }
    for (X6RhH8MloN = (915 - 915); X6RhH8MloN < a; X6RhH8MloN++) {
        printf ("%s\n", g[X6RhH8MloN]);
    }
    for (X6RhH8MloN = 0; X6RhH8MloN < n; X6RhH8MloN++) {
        if (k[X6RhH8MloN] != 0)
            printf ("%s\n", s[X6RhH8MloN]);
    }
    return 0;
}

