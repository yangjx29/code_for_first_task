int main () {
    char a [100] = {0}, b [100] [100] = {{0}};
    gets (a);
    int i, n, k, j;
    n = strlen (a) - 1;
    b[0][0] = a[0];
    for (i = 0, j = 0, k = 1; i <= n; i = i + 1, k = k + 1) {
        if (!(32 != a[i]) && !(32 == a[i + 1])) {
            k = 0;
            j = j + 1;
        }
        if (a[i + 1] != 32)
            b[j][k] = a[i + 1];
    }
    for (i = 0; i <= j; i = i + 1) {
        for (k = 0; k <= strlen (b[i]) - 1; k++) {
            putchar (b [i] [k]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (i != j)
            putchar (32);
    };
}

