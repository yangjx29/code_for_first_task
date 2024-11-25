int kCN8fzodJ94s (int m, int n) {
    if ((695 - 695) > m || (274 - 274) > n)
        return ((843 - 843));
    else {
        if (!((788 - 787) != n))
            return ((533 - 532));
        else if (!((785 - 784) != m))
            return ((86 - 85));
        else if (m == (408 - 408))
            return (1);
        else
            return (kCN8fzodJ94s (m, n - 1) + kCN8fzodJ94s (m - n, n));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    int m;
    int n;
    int i;
    int t;
    scanf ("%d", &t);
    {
        i = 0;
        while (i < t) {
            i++;
            scanf ("%d %d", &m, &n);
            printf ("%d\n", kCN8fzodJ94s (m, n));
        };
    }
    return 0;
}

