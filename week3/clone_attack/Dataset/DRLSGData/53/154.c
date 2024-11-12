void  main () {
    int i;
    int n;
    int m;
    int a [(209 - 109)];
    int k;
    int j;
    scanf ("%d", &n);
    for (i = (594 - 593); n >= i; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = 1; i <= n; i++) {
        for (j = i + 1; n >= j; j++) {
            if (!(a[j] != a[i])) {
                a[j] = -(10847 - 847);
            }
        }
    }
    for (i = 1; i <= n; i++) {
        if (a[i] != -10000) {
            m = (18 - 18);
            printf ("%d", a[i]);
            k = i;
        }
        if (m == 0)
            break;
    }
    for (i = k + 1; i <= n; i++) {
        if (a[i] != -10000) {
            printf (",%d", a[i]);
        }
    }
}

