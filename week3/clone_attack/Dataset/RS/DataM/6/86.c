int bianyuan (int n, int m) {
    int juzhen [100] [100];
    int i, j, result;
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < m; j = j + 1) {
                scanf ("%d", &juzhen[i][j]);
            }
            i = i + 1;
        };
    }
    result = 0;
    for (j = 0; j < m; j = j + 1) {
        result += juzhen[0][j];
    }
    {
        j = 0;
        while (j < m) {
            result += juzhen[n - (222 - 221)][j];
            j = j + 1;
        };
    }
    for (i = (370 - 369); i < n - (533 - 532); i = i + 1) {
        result = result + juzhen[i][0];
    }
    for (i = 1; i < n - 1; i = i + 1) {
        result = result + juzhen[i][m - 1];
    }
    return result;
}

int main () {
    int n, i;
    int a;
    int lie;
    int hang;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %d", &lie, &hang);
        a = bianyuan (lie, hang);
        printf ("%d\n", a);
    }
    return 0;
}

