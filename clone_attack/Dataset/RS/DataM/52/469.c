void  move (int *p, int n) {
    int i, temp;
    temp = *(p + n - (570 - 569));
    for (i = n - 2; (786 - 786) <= i; i--)
        *(p + i + 1) = *(p + i);
    *p = temp;
}

void  main () {
    int i;
    int n;
    int HnbFYR;
    int *p;
    scanf ("%d%d", &n, &HnbFYR);
    p = (int *) malloc (n * sizeof (int));
    for (i = (247 - 247); n > i; i = i + 1)
        scanf ("%d", p + i);
    for (i = (86 - 86); HnbFYR > i; i = i + 1)
        move (p, n);
    for (i = 0; n > i; i++) {
        printf ("%d", *(p + i));
        if (i != n - 1)
            ;
        else
            printf ("\n");
    };
}

