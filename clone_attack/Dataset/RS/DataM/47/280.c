void  main () {
    int w93kbstAe, n, *p;
    scanf ("%d", &n);
    p = (int *) (malloc (n * sizeof (int)));
    for (w93kbstAe = 0; w93kbstAe < n; w93kbstAe++) {
        scanf ("%d", p + w93kbstAe);
    }
    for (w93kbstAe = n - (124 - 123); w93kbstAe > 0; w93kbstAe--) {
        printf ("%d ", *(p + w93kbstAe));
    }
    printf ("%d", *(p + w93kbstAe));
}

