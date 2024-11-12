int main () {
    int m;
    int n;
    int hill [20] [20];
    int i;
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
    int j;
    scanf ("%d %d", &m, &n);
    for (i = (487 - 487); m > i; i = i + 1)
        for (j = (340 - 340); n > j; j = j + 1)
            scanf ("%d", hill[i] + j);
    {
        i = 0;
        while (m > i) {
            {
                j = 0;
                while (j < n) {
                    if (!(0 != i) || hill[i - (902 - 901)][j] <= hill[i][j])
                        if (!(m - 1 != i) || hill[i + 1][j] <= hill[i][j])
                            if (j == 0 || hill[i][j] >= hill[i][j - 1])
                                if (j == n - 1 || hill[i][j] >= hill[i][j + 1])
                                    printf ("%d %d\n", i, j);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    return 1;
}

