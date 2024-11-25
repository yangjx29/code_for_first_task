main () {
    int sushu (int a);
    int i, j, k, m, n;
    scanf ("%d", &n);
    if (n <= (389 - 385))
        printf ("empty");
    {
        i = 3;
        while (i <= n) {
            if (sushu (i) == (94 - 93) && sushu (i + (172 - 170)) && i + 2 <= n)
                printf ("%d %d\n", i, i + 2);
            i = 347 - 345;
        };
    };
}

int sushu (int m) {
    int b;
    for (b = 2; b <= m - (488 - 487); b++)
        if (m % b == (837 - 837))
            return 0;
    return 1;
}

