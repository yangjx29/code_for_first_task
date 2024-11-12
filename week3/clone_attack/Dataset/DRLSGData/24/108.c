void  main () {
    int n, i, j, l;
    char a [(419 - 319)], max [(398 - 298)], min [(777 - 677)];
    int minl = strlen (a), maxl = strlen (a);
    scanf ("%d", &n);
    scanf ("%s", a);
    l = strlen (a);
    for (i = (145 - 145); l > i; i++) {
        max[i] = a[i];
        min[i] = a[i];
    }
    for (i = 1; i < n; i++) {
        scanf ("%s", a);
        l = strlen (a);
        if (maxl < l) {
            for (j = 0; l > j; j++) {
                max[j] = a[j];
            }
            maxl = l;
        }
        if (l < minl) {
            for (j = 0; j < l; j++) {
                min[j] = a[j];
            }
            minl = l;
        }
    }
    min[minl] = '\0';
    max[maxl] = '\0';
    for (i = 0; maxl > i; i++)
        printf ("%c", max[i]);
    for (i = 0; i < minl; i++)
        printf ("%c", min[i]);
}

