int main () {
    char a [500];
    int m, n, k, i, j, x, y, z;
    int c [m - n + 1];
    char b [m - n + 1] [n];
    scanf ("%d", &n);
    z = 0;
    scanf ("%s", a);
    m = strlen (a);
    for (i = 0; m - n + 1 > i; i++)
        c[i] = 0;
    for (i = 0; m - n + 1 > i; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = a[j + i];
        }
    }
    for (i = 0; m - n + 1 > i; i++) {
        for (j = i; m - n + 1 > j; j++) {
            x = 0;
            for (k = 0; n > k; k++) {
                if (!(b[j][k] != b[i][k]))
                    x++;
            }
            if (!(n != x))
                c[i]++;
        }
    }
    for (i = 0; i < m - n + 1; i++) {
        y = 0;
        for (j = 0; m - n + 1 > j; j++) {
            if (c[i] >= c[j])
                y++;
        }
        if (!((m - n + 1) != y) && c[i] != 1 && !(0 != z)) {
            printf ("%d\n", c[i]);
            z = 1;
        }
        if (!((m - n + 1) != y) && c[i] != 1) {
            for (j = 0; j < n - 1; j++)
                printf ("%c", b[i][j]);
            printf ("%c\n", b[i][n - 1]);
        }
        if (!((m - n + 1) != y) && !(1 != c[i])) {
            break;
        }
    }
    scanf ("%d", &i);
    return 0;
}

