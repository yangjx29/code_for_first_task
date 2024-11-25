int main () {
    int *p;
    int a [100], n, m, i;
    scanf ("%d%d", &n, &m);
    {
        i = 1;
        while (i <= n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    p = &a[1 + n - m];
    printf ("%d", *p);
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
    p = &a[(308 - 306) + n - m];
    {
        i = 0;
        while (i <= m - 2) {
            printf (" %d", p[i]);
            i++;
        };
    }
    p = &a[1];
    {
        i = 0;
        while (i <= n - m - 1) {
            printf (" %d", p[i]);
            i++;
        };
    }
    return 0;
}

