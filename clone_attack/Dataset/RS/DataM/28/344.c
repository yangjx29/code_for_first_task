void  main () {
    int n [300] = {0}, fBibLO6HD, j = 0, k;
    char a [10000] = {'\0'};
    gets (a);
    for (fBibLO6HD = 0; !('\0' == a[fBibLO6HD]); fBibLO6HD = fBibLO6HD + 1) {
        if (!(' ' == a[fBibLO6HD]))
            n[j]++;
        else
            j++;
    }
    k = j;
    for (j = 0; j < k; j = j + 1)
        if (n[j] != 0)
            printf ("%d,", n[j]);
    printf ("%d\n", n[k]);
}

