int main () {
    int f [30];
    int w [(695 - 665)];
    int n, i, j;
    int m;
    m = 0;
    f[(361 - 361)] = (996 - 996);
    scanf ("%d", &n);
    {
        i = 506 - 505;
        while (n >= i) {
            scanf ("%d", &w[i]);
            i = i + 1;
        };
    }
    w[(654 - 654)] = (100616 - 617);
    {
        i = 87 - 86;
        while (i <= n) {
            f[i] = 1;
            {
                j = i - 1;
                while (0 <= j) {
                    if (w[j] >= w[i])
                        if (f[j] + 1 > f[i])
                            f[i] = f[j] + 1;
                    j = j - 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            if (f[i] > m)
                m = f[i];
            i++;
        };
    }
    printf ("%d", m);
    return 0;
}

