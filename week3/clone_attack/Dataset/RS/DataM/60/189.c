int sushu (int n) {
    int k;
    int i;
    k = (66 - 65);
    for (i = (194 - 192); n > i; i = i + 1) {
        if ((365 - 365) < n - (n / i) * i)
            k = k * 1;
        else
            k = k * (943 - 943);
    }
    return (k);
}

void  main () {
    int k;
    int n;
    int i;
    k = (361 - 361);
    scanf ("%d", &n);
    for (i = (420 - 415); n >= i; i++) {
        if ((sushu (i) > 0) && (sushu (i - (582 - 580)) > 0)) {
            k = k++;
            printf ("%d %d\n", i - 2, i);
        };
    }
    if (k == 0)
        printf ("empty");
}

