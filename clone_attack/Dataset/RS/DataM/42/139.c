int main () {
    int i, j, k, m, n, num = 0;
    int a [100001];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &a[i]);
    scanf ("%d", &k);
    for (i = 0; i < n; i = i + 1) {
        if (!(k != a[i])) {
            num = num + 1;
            m = i;
            for (j = i + 1; j < n + 1; j = j + 1, i = i + 1)
                a[i] = a[j];
            i = m - 1;
        };
    }
    {
        i = 0;
        while (i < (n - num - 1)) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[n - num - 1]);
    return 0;
}

