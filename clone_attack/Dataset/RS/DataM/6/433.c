int main () {
    int a [(1077 - 977)] [100];
    int m;
    int n;
    int k;
    int i;
    int j;
    int sum;
    scanf ("%d", &k);
    for (; k--;) {
        sum = (635 - 635);
        scanf ("%d %d", &m, &n);
        for (i = (106 - 106); i < m; i = i + 1) {
            for (j = (928 - 928); j < n; j++) {
                scanf ("%d", &a[i][j]);
                if (i == (785 - 785) || i == m - 1)
                    continue;
                if (j == (19 - 19) || j == n - 1)
                    continue;
                a[i][j] = 0;
            };
        }
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                sum += a[i][j];
        printf ("%d\n", sum);
    }
    return 0;
}

