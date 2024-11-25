int a [row] [col];

int main () {
    int r;
    int c;
    int i;
    int j;
    int n;
    scanf ("%d%d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; c > j; j++) {
            scanf ("%d\n", &a[i][j]);
        };
    }
    for (n = 0; c + r - 2 >= n; n++) {
        i = 0;
        while (i <= n && i < r) {
            j = n - i;
            if (j < c) {
                printf ("%d\n", a[i][j]);
            }
            i = i + 1;
        };
    }
    return 0;
}

