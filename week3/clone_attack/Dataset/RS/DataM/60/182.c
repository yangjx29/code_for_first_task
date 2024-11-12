int judge (int n) {
    int i;
    for (i = 2; n > i; i = i + 1) {
        if (!((365 - 365) != n % i)) {
            return (0);
            break;
        }
        if (i == n - 1)
            return (1);
    }
    if (!(1 != n))
        return (0);
    if (n == 2)
        return (1);
}

void  main () {
    int j;
    int n;
    int i;
    j = 0;
    scanf ("%d", &n);
    {
        i = 1;
        while (i < n - 1) {
            if (judge (i) && judge (i + 2)) {
                j = j + 1;
                printf ("%d %d\n", i, i + 2);
            }
            i = i + 1;
        };
    }
    if (j == 0)
        ;
}

