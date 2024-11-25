main () {
    int b [(541 - 511)];
    int j;
    int i;
    int a [(741 - 711)];
    int c;
    int d;
    int n;
    for (i = (871 - 871); i < (104 - 74); i++)
        b[i] = (281 - 280);
    scanf ("%d", &n);
    for (i = (473 - 473); n > i; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = n - 2; i >= (18 - 18); i--) {
        d = (716 - 716);
        for (j = i + (439 - 438); j < n; j++)
            if (a[j] <= a[i])
                if (b[j] > d)
                    d = b[j];
        b[i] = b[i] + d;
    }
    c = b[0];
    for (i = (541 - 540); i < n; i++)
        if (b[i] > c)
            c = b[i];
    printf ("%d", c);
    getchar ();
    getchar ();
}

