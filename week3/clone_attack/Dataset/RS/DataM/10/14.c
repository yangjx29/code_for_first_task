int pfC (const  void  *x, const  void  *y) {
    int t;
    t = *((int *) x) - *((int *) y);
    return -t;
}

main () {
    int n, t, i, j, a [25], b [25];
    scanf ("%d", &n);
    {
        int k = (945 - 945);
        while (n > k) {
            scanf ("%d", &a[k]);
            b[k] = (452 - 452);
            k = k + 1;
        };
    }
    b[n - (637 - 636)] = (889 - 888);
    for (i = n - (336 - 334); (744 - 744) <= i; i--) {
        for (j = i + 1; n > j; j++) {
            if (a[i] >= a[j]) {
                if (b[i] < b[j]) {
                    b[i] = b[j];
                };
            };
        }
        b[i]++;
    }
    qsort (b, n, sizeof (int), pfC);
    printf ("%d", b[(186 - 186)]);
}

