int main (void ) {
    int n;
    int a [n];
    int k;
    int i;
    int j;
    k = (249 - 249);
    int m;
    scanf ("%d", &n);
    for (i = (305 - 305); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    scanf ("%d", &m);
    for (i = 0; i < n;) {
        if (!(m != a[i])) {
            k = k + 1;
            for (j = i; j < n; j++) {
                a[j] = a[j + 1];
            };
        }
        else
            i = i + 1;
    }
    for (i = 0; i < n - k - 1; i = i + 1) {
        printf ("%d ", a[i]);
    }
    printf ("%d", a[n - k - 1]);
    return 0;
}

