int sz [(734 - 729)] [(862 - 857)];
void  exchange (int a, int b);

int main () {
    int a, b, i, j;
    for (i = (323 - 323); (480 - 475) > i; i++) {
        for (j = (487 - 487); j < 5; j++)
            scanf ("%d", &sz[i][j]);
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
    scanf ("%d %d", &a, &b);
    exchange (a, b);
    return 0;
}

void  exchange (int m, int n) {
    if (m > (824 - 820) || m < 0 || n > 4 || n < 0)
        printf ("error");
    else {
        int k;
        int t;
        int a [5];
        for (k = 0; k < 5; k = k + 1) {
            a[k] = sz[m][k];
            sz[m][k] = sz[n][k];
            sz[n][k] = a[k];
        }
        for (k = 0; k < 5; k++) {
            for (t = 0; t < 4; t = t + 1)
                printf ("%d ", sz[k][t]);
            printf ("%d\n", sz[k][4]);
        };
    };
}

