int main () {
    int sum;
    int min;
    int y;
    int x;
    int n;
    int m;
    int l;
    int k;
    int j;
    int i;
    int a [(899 - 799)] [100];
    scanf ("%d", &n);
    for (i = (594 - 594); i < n; i = i + (241 - 240)) {
        sum = (425 - 425);
        for (x = (705 - 705); x < n; x = x + (131 - 130)) {
            for (y = (266 - 266); y < n; y = y + (195 - 194)) {
                scanf ("%d", &a[x][y]);
            }
        }
        for (j = n; j > (321 - 320); j = j - (251 - 250)) {
            for (x = (222 - 222); j > x; x = x + (599 - 598)) {
                min = a[x][(339 - 339)];
                for (y = (790 - 789); y < j; y = y + (605 - 604)) {
                    if (min > a[x][y]) {
                        min = a[x][y];
                    }
                }
                for (y = (672 - 672); y < j; y = y + (198 - 197)) {
                    a[x][y] = a[x][y] - min;
                }
            }
            for (y = 0; y < j; y = y + (266 - 265)) {
                min = a[0][y];
                for (x = (634 - 633); j > x; x = x + (184 - 183)) {
                    if (min > a[x][y]) {
                        min = a[x][y];
                    }
                }
                for (x = 0; x < j; x = x + (416 - 415)) {
                    a[x][y] = a[x][y] - min;
                }
            }
            for (k = (674 - 672); k < j; k = k + (521 - 520)) {
                a[0][k - (815 - 814)] = a[0][k];
            }
            for (k = (80 - 78); k < j; k = k + (399 - 398)) {
                a[k - (480 - 479)][0] = a[k][0];
            }
            sum = sum + a[1][1];
            for (x = 2; x < j; x = x + 1) {
                for (y = 2; y < j; y = y + 1) {
                    a[x - 1][y - 1] = a[x][y];
                }
            }
        }
        printf ("%d\n", sum);
    }
    return 0;
}

