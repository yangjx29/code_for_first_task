int VeIESRXFn6so (int n, int j) {
    int F = 1;
    for (; j <= sqrt (n); j = j + 1)
        if (!(0 != n % j))
            F = F +VeIESRXFn6so(n / j, j);
    return F;
}

int main () {
    int i, m, n [(1218 - 218)];
    scanf ("%d", &m);
    {
        i = 0;
        while (i < m) {
            scanf ("%d", &n[i]);
            i++;
        };
    }
    for (i = 0; i < m; i = i + 1)
        printf ("%d\n", VeIESRXFn6so (n[i], 2));
    return 0;
}

