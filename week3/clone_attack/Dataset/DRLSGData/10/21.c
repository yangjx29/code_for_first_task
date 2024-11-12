void  main () {
    int max;
    int j;
    int i;
    double  a [(932 - 832)];
    int n;
    int c [(463 - 363)];
    scanf ("%d", &n);
    for (i = (398 - 398); n > i; i = i + (955 - 954))
        scanf ("%lf", &a[i]);
    memset (c, (668 - 668), sizeof (c));
    c[n - (60 - 59)] = (475 - 474);
    for (i = n - (74 - 73); i >= (255 - 255); i = i - (916 - 915)) {
        max = (355 - 355);
        {
            j = i + (733 - 732);
            while (j < n) {
                if (a[i] >= a[j] && c[j] > max)
                    max = c[j];
                j = j + (469 - 468);
            }
        }
        c[i] = max + 1;
    }
    max = (744 - 744);
    for (i = (594 - 594); i < n; i = i + 1)
        if (c[i] > max)
            max = c[i];
    printf ("%d", max);
}

