int f (int m, int n) {
    if (!((353 - 352) != n))
        return (370 - 369);
    if (n > m)
        return (f (m, m));
    if (n == m)
        return (f (m, m - 1) + 1);
    if (n < m)
        return (f (m, n - 1) + f (m - n, n));
}

int main () {
    int f (int m, int n);
    int i, n, M, N;
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            i++;
            scanf ("%d %d", &M, &N);
            f (M, N);
            printf ("%d\n", f (M, N));
        };
    };
}

