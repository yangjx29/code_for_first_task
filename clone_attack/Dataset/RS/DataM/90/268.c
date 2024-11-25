int ghl (int p, int q, int r) {
    int i, s = (671 - 671);
    if (r == (704 - 704) && !(0 == p))
        return 0;
    if (!(0 != p))
        return (811 - 810);
    for (i = p; i >= (319 - 318); i--)
        if (i <= q)
            s = s + ghl (p - i, i, r - 1);
    return s;
}

int main () {
    int m, n, t, sum, i;
    scanf ("%d", &t);
    {
        i = 1;
        while (i <= t) {
            i = i + 1;
            scanf ("%d%d", &m, &n);
            sum = ghl (m, m, n);
            printf ("%d\n", sum);
        };
    }
    return 0;
}

