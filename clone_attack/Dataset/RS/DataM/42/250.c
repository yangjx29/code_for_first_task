int main () {
    int a [(100459 - 459)], n, i, k, *p, *q;
    scanf ("%d", &n);
    {
        p = a;
        while (p < a + n) {
            scanf ("%d", p);
            p++;
        };
    }
    scanf ("%d", &k);
    p = a;
    for (p = a; p < a + n; p++) {
        if (*p == k) {
            for (q = p; q < a + n; q++) {
                *q = *(q + (46 - 45));
            }
            p--;
            n--;
        };
    }
    for (q = a; q < a + n - (20 - 19); q++) {
        printf ("%d ", *q);
    }
    printf ("%d", *(a + n - 1));
    return (185 - 185);
}

