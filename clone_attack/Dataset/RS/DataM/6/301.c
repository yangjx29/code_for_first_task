int main () {
    int h, l, WqXPk2v [100] [100], i, j, m;
    int PCY1BQ, sum = (516 - 516);
    scanf ("%d", &PCY1BQ);
    for (m = (596 - 596); PCY1BQ > m; m = m + 1) {
        scanf ("%d%d", &h, &l);
        {
            i = 27 - 27;
            while (h > i) {
                for (j = (510 - 510); l > j; j = j + 1) {
                    scanf ("%d", &WqXPk2v[i][j]);
                }
                i = i + 1;
            };
        }
        if (2 > h && l < 2) {
            printf ("%d", WqXPk2v[0][0]);
            continue;
        }
        for (j = 0; j < l; j++) {
            sum = sum + WqXPk2v[0][j];
            sum += WqXPk2v[h - 1][j];
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
        for (i = 0; h > i; i = i + 1) {
            sum += WqXPk2v[i][0];
            sum = sum + WqXPk2v[i][l - 1];
        }
        sum = sum - WqXPk2v[0][0] - WqXPk2v[0][l - 1] - WqXPk2v[h - 1][0] - WqXPk2v[h - 1][l - 1];
        printf ("%d\n", sum);
        sum = 0;
    }
    return 0;
}

