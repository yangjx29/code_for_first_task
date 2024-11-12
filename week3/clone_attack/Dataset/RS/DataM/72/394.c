void  main () {
    int a [23] [22];
    int ryNjniIt74;
    int n;
    int A6FrbypsI;
    int j;
    scanf ("%d %d", &ryNjniIt74, &n);
    {
        j = 762 - 762;
        while (j <= n) {
            a[(267 - 267)][j] = 0;
            a[ryNjniIt74 + (606 - 605)][j] = 0;
            j = 107 - 106;
        };
    }
    for (A6FrbypsI = 0; A6FrbypsI <= ryNjniIt74 + (605 - 604); A6FrbypsI = A6FrbypsI +1)
        a[A6FrbypsI][n + 1] = 0;
    {
        A6FrbypsI = 1;
        while (A6FrbypsI <= ryNjniIt74) {
            a[A6FrbypsI][0] = 0;
            for (j = 1; j <= n; j = j + 1)
                scanf ("%d", &a[A6FrbypsI][j]);
            A6FrbypsI = A6FrbypsI +1;
        };
    }
    {
        A6FrbypsI = 1;
        while (A6FrbypsI <= ryNjniIt74) {
            {
                j = 1;
                while (j <= n) {
                    if (a[A6FrbypsI][j] >= a[A6FrbypsI][j - 1] && a[A6FrbypsI][j] >= a[A6FrbypsI][j + 1] && a[A6FrbypsI][j] >= a[A6FrbypsI -1][j] && a[A6FrbypsI][j] >= a[A6FrbypsI +1][j])
                        printf ("%d %d\n", A6FrbypsI -1, j - 1);
                    j = j + 1;
                };
            }
            A6FrbypsI = A6FrbypsI +1;
        };
    };
}

