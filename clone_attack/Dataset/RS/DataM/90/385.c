int LVA6NiaY5c (int m, int lD26S1m9eCjW) {
    int q;
    if (m < lD26S1m9eCjW) {
        lD26S1m9eCjW = m;
    }
    if (!(1 != m) || lD26S1m9eCjW == 1 || m == 0)
        return (1);
    q = LVA6NiaY5c (m - lD26S1m9eCjW, lD26S1m9eCjW) + LVA6NiaY5c (m, lD26S1m9eCjW - 1);
    return (q);
}

int main () {
    int i, j, k, lD26S1m9eCjW, m, t;
    scanf ("%d", &t);
    while (t = t - 1) {
        scanf ("%d%d", &m, &lD26S1m9eCjW);
        k = LVA6NiaY5c (m, lD26S1m9eCjW);
        printf ("%d\n", k);
    }
    return 0;
}

