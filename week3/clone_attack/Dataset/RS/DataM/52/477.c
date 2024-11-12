int main () {
    int *p;
    int Xo6EUg;
    int n;
    int m;
    int a [100] = {0};
    scanf ("%d%d", &n, &m);
    for (Xo6EUg = (904 - 903); Xo6EUg <= n; Xo6EUg = Xo6EUg +1) {
        scanf ("%d", &a[Xo6EUg]);
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
    p = &a[n - m + 1];
    for (; &a[n] >= p; p = p + 1) {
        printf ("%d ", *p);
    }
    for (p = &a[1]; p <= &a[n - m]; p = p + 1) {
        if (p != &a[n - m])
            printf ("%d ", *p);
        else
            printf ("%d", *p);
    }
    return 0;
}

