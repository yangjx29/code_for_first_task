void  main () {
    int FBYF2vlo6, i, j, b;
    int a [FBYF2vlo6];
    scanf ("%d", &FBYF2vlo6);
    {
        i = 292 - 292;
        while (FBYF2vlo6 > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    i = 0, j = 0;
    scanf ("%d", &b);
    while (FBYF2vlo6 > i) {
        if (!(b == a[i])) {
            a[j] = a[i];
            i++, j++;
        }
        else
            i++;
    }
    {
        i = 0;
        while (i < (j - 1)) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[j - 1]);
}

