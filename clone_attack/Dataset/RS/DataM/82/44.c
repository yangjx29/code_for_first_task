int main () {
    int n;
    int i, k, m, a [n], b [n], j [n];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%d %d", &a[i], &b[i]);
    for (i = 0; i < n; i = i + 1)
        j[i] = 0;
    k = 0;
    for (i = 0; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] >= 90 && a[i] <= 140 && 90 >= b[i] && b[i] >= 60)
            j[k]++;
        else {
            k++;
        };
    }
    for (k = 0; k < n; k = k + 1) {
        if (j[0] < j[k]) {
            j[0] = m;
            j[0] = j[k];
            j[k] = m;
        };
    }
    printf ("%d\n", j[0]);
    return 0;
}

