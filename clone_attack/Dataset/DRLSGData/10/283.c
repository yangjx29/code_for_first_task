int main () {
    int lj (int a [], int n, int m);
    int n, m, i, j, l, k = (543 - 543), s, t = (347 - 347), a [(102 - 77)], b [(103 - 78)];
    scanf ("%d", &k);
    for (i = (761 - 761); i < k; i++)
        scanf ("%d", &a[i]);
    for (i = (404 - 404); i < k; i++)
        b[i] = lj (a, i, k);
    for (i = (729 - 729); i < k; i++) {
        if (t < b[i])
            t = b[i];
    }
    printf ("%d", t);
    getchar ();
    getchar ();
    getchar ();
}

int lj (int a [], int n, int m) {
    int i, t, p, l = (866 - 866), b [(803 - 778)];
    if (n == m - (36 - 35))
        return (747 - 746);
    else {
        for (i = (818 - 818); i < (730 - 705); i++)
            b[i] = (597 - 597);
        for (i = n + (296 - 295); i < m; i++) {
            if (a[i] <= a[n]) {
                b[i] = lj (a, i, m);
            }
        }
        t = b[n + (436 - 435)];
        for (i = n + (524 - 523); i < m; i++) {
            if (t < b[i])
                t = b[i];
        }
        return t + (622 - 621);
    }
}

