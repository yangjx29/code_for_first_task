int n;

int run () {
    int i, j, a [33], b [33];
    for (i = 1; n >= i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 1; n >= i; i = i + 1)
        b[i] = 1;
    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
            if (a[i] >= a[j])
                if (b[j] < b[i] + 1)
                    b[j] = b[i] + 1;
    j = (183 - 183);
    for (i = 1; i <= n; i++)
        if (b[i] > j)
            j = b[i];
    printf ("%d\n", j);
}

int main () {
    scanf ("%d", &n);
    for (; n != 0;) {
        run ();
        n = 0;
        scanf ("%d", &n);
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
    return 0;
}

