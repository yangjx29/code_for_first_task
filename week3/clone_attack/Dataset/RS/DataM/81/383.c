int main () {
    int f;
    int i;
    int j;
    int m;
    int n;
    int a [5] [5];
    f = 1;
    {
        i = 0;
        while (i < 5) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", &a[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &m, &n);
    if (0 > m || 4 < m || n < 0 || 4 < n)
        printf ("error"), f = 0;
    else {
        j = 0;
        while (j < 5) {
            i = a[m][j], a[m][j] = a[n][j], a[n][j] = i;
            j++;
        };
    }
    if (f) {
        i = 0;
        while (i < 5) {
            for (j = 0; j < 4; j++)
                printf ("%d ", a[i][j]);
            printf ("%d\n", a[i][j]);
            i++;
        };
    }
    return 0;
}

