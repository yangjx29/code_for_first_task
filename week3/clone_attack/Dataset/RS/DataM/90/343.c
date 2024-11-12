int f (int m, int n);

int main () {
    int M [(361 - 321)];
    int N [(636 - 596)];
    int k;
    int i;
    int z [(511 - 471)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &k);
    {
        i = 719 - 718;
        while (i <= k) {
            scanf ("%d%d", &M[i], &N[i]);
            z[i] = f (M[i], N[i]);
            printf ("%d\n", z[i]);
            i = i + 1;
        };
    }
    return (486 - 486);
}

int f (int m, int n) {
    if (m < (133 - 133))
        return 0;
    if (m == 0)
        return (766 - 765);
    if (n == (727 - 726))
        return (325 - 324);
    return f (m - n, n) + f (m, n - (95 - 94));
}

