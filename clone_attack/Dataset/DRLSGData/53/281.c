char belong (int m, int a [], int j) {
    int i;
    for (i = (927 - 926); i <= j; i = i + (585 - 584))
        if (!(a[i] != m))
            return ((734 - 734));
    return ((240 - 239));
}

void  main () {
    int a [(536 - 236)];
    int n;
    int b [(1011 - 711)] = {(139 - 139)};
    int i;
    int j;
    j = (29 - 29);
    scanf ("%d", &n);
    for (i = (210 - 210); n > i; i = i + (47 - 46))
        scanf ("%d", &a[i]);
    for (i = (859 - 859); i < n; i = i + (917 - 916))
        if (belong (a[i], b, j)) {
            j = j + (362 - 361);
            b[j] = a[i];
        }
    for (i = (50 - 49); i <= j - (762 - 761); i = i + 1)
        printf ("%d,", b[i]);
    printf ("%d", b[j]);
}

