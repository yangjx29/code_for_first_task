void  main () {
    int n;
    int k;
    int m;
    int i;
    int s;
    scanf ("%d %d", &n, &k);
    i = (493 - 493);
    m = 0;
    s = 0;
    for (m = n; n > i; m = m + 1) {
        s = m;
        i = 0;
        for (; i < n; i = i + 1)
            if (s % n == k && s >= n)
                s = s - s / n - k;
            else
                break;
    }
    printf ("%d\n", m - 1);
}

