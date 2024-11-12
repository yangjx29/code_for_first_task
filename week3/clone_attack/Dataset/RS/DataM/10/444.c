main () {
    int a [26], b [26];
    int k, i, j, s, Wm23chA4GeMQ, max = 0, m = 1;
    scanf ("%d", &k);
    for (i = 1; k >= i; i = i + 1)
        scanf ("%d", &a[i]);
    b[k] = 1;
    for (i = k - 1; 0 < i; i = i - 1) {
        for (j = i + 1; k >= j; j = j + 1) {
            if (a[i] >= a[j] && b[j] > max)
                max = b[j];
        }
        b[i] = max + 1;
        max = 0;
    }
    {
        Wm23chA4GeMQ = 1;
        while (Wm23chA4GeMQ <= k) {
            if (b[Wm23chA4GeMQ] >= m)
                m = b[Wm23chA4GeMQ];
            Wm23chA4GeMQ++;
        };
    }
    printf ("%d", m);
}

