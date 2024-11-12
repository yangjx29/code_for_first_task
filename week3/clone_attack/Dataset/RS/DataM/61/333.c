int main () {
    int n, i, b [100001], a [100000], m = (955 - 954);
    b[1] = 1;
    b[2] = 1;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 1; i <= n; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] > m) {
            m = a[i];
        };
    }
    for (i = 3; i <= m; i++) {
        b[i] = b[i - 1] + b[i - 2];
    }
    for (i = 1; i <= n; i++) {
        printf ("%d\n", b[a[i]]);
    }
    return 0;
}

