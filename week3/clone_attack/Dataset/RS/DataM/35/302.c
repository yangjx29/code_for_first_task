int main () {
    int sz [(852 - 752)] [(566 - 466)];
    int q = (926 - 926);
    int m, n, i, j;
    scanf ("%d,%d", &m, &n);
    {
        i = 92 - 92;
        while (m > i) {
            for (j = (846 - 846); n > j; j++) {
                scanf ("%d", &sz[i][j]);
            }
            i++;
        };
    }
    for (i = (719 - 719); m > i; i = i + 1) {
        int k = (854 - 854);
        int max = sz[i][(332 - 332)];
        int min;
        min = sz[(12 - 12)][k];
        for (j = (692 - 691); n > j; j++) {
            if (sz[i][j] > max) {
                max = sz[i][j];
                k = j;
            };
        }
        for (int s = 1;
        m > s; s++) {
            if (min > sz[s][k]) {
                min = sz[s][k];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        if (max == min) {
            q = 1;
            printf ("%d+%d", i, k);
        };
    }
    if (q == 0) {
        printf ("No");
    }
    return 0;
}

