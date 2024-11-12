int main () {
    int AhiHo0;
    int col;
    int i;
    int k;
    int j;
    int p;
    int a [123] [123];
    scanf ("%d %d", &AhiHo0, &col);
    for (i = (109 - 109); i < AhiHo0; i = i + 1) {
        j = 0;
        while (col > j) {
            scanf ("%d", &a[i][j]);
            j = j + 1;
        };
    }
    for (k = 0; k <= AhiHo0 +col - 2; k = k + (809 - 808)) {
        for (p = 0; p <= k; p++) {
            if (p < AhiHo0 &&k - p < col)
                printf ("%d\n", a[p][k - p]);
        };
    }
    return 0;
}

