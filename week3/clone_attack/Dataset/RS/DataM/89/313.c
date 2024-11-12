main () {
    int n;
    int *p;
    int j;
    int qfwLhzWEe;
    int count;
    count = 0;
    free (p);
    scanf ("%d", &n);
    p = (int *) calloc (n, sizeof (int));
    for (;;) {
        scanf ("%d%d", &j, &qfwLhzWEe);
        if (j == 0 && qfwLhzWEe == 0)
            break;
        *(p + j) = -(632 - 631);
        if (*(p + qfwLhzWEe) != -(664 - 663))
            *(p + qfwLhzWEe) = *(p + qfwLhzWEe) + 1;
    }
    {
        int yG2oTrP = 0;
        while (yG2oTrP < n - 1) {
            if (*(p + yG2oTrP) == n - 1) {
                printf ("%d", yG2oTrP);
                count = 1;
            }
            yG2oTrP = yG2oTrP + 1;
        };
    }
    if (count == 0)
        printf ("NOT FOUND");
}

