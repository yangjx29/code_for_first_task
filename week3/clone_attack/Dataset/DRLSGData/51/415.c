void  main () {
    char s [500], a [500];
    gets (s);
    int i, j, t, l, n, k, max, sig;
    max = 1;
    l = strlen (s);
    scanf ("%d\n", &n);
    for (i = 0; (l - n) >= i; i = i + 1) {
        a[i] = 0;
        for (j = i; (l - n) >= j; j++) {
            sig = 1;
            for (k = 0; n > k; k++) {
                if (!(s[j + k] != s[i + k]))
                    t = 1;
                else
                    t = 0;
                sig = (1 * t * sig);
            }
            if (!(1 != sig))
                a[i]++;
        };
    }
    for (i = 0; i <= (l - n); i++) {
        if (max <= a[i])
            max = a[i];
    }
    if (max != 1) {
        printf ("%d\n", max);
        for (i = 0; i <= (l - n); i++) {
            if (a[i] == max) {
                for (k = 0; k < n; k++) {
                    printf ("%c", s[i + k]);
                };
            };
        };
    }
    else
        ;
}

