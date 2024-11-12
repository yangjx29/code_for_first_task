void  main () {
    int i, n, j, k, a [100000], *p;
    scanf ("%d", &n);
    p = a;
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%d", p++);
        };
    }
    scanf ("%d", &k);
    p = a;
    {
        i = 0;
        while (i < n) {
            if (*(p + i) == k) {
                n = n - 1;
                {
                    j = i;
                    while (j < n) {
                        *(p + j) = *(p + j + 1);
                        j++;
                    };
                }
                i = i - 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            i++;
            printf ("%d ", *p++);
        };
    }
    p = a;
    printf ("%d", *(p + n - 1));
}

