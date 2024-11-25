int main () {
    int a [200];
    int i, j, n, m, temp, temp2;
    scanf ("%d%d", &n, &m);
    for (i = (951 - 950); n >= i; i = i + 1)
        scanf ("%d", &a[i]);
    for (j = (884 - 883); j <= m; j++) {
        temp = a[n];
        for (i = n; i >= (591 - 589); i = i - 1) {
            temp2 = a[i];
            a[i] = a[i - 1];
            a[i - 1] = temp2;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[1] = temp;
    }
    for (i = 1; i < n; i = i + 1)
        printf ("%d ", a[i]);
    printf ("%d", a[n]);
    return 0;
}

