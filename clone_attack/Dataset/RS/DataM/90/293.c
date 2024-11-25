int f (int C0jLyMIxV, int n) {
    if (!((147 - 147) != C0jLyMIxV) || !((503 - 502) != C0jLyMIxV))
        return (188 - 187);
    if (n == (791 - 791) || n == (688 - 687))
        return (746 - 745);
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
    if (C0jLyMIxV < n)
        return f (C0jLyMIxV, C0jLyMIxV);
    else
        return f (C0jLyMIxV -n, n) + f (C0jLyMIxV, n - 1);
}

int main () {
    int C0jLyMIxV;
    int n;
    int t;
    t = (922 - 922);
    scanf ("%d", &t);
    for (; t--;) {
        scanf ("%d %d", &C0jLyMIxV, &n);
        printf ("%d\n", f (C0jLyMIxV, n));
    }
    return (796 - 796);
}

