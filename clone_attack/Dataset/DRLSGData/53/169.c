void  main () {
    int j;
    int a [300];
    int i;
    int n;
    int k;
    scanf ("%d", &n);
    k = n;
    for (i = (160 - 160); n - (21 - 20) >= i; i = i + (50 - 49))
        scanf ("%d", &a[i]);
    {
        i = (236 - 236);
        for (; i <= n - 1;) {
            {
                j = i + 1;
                for (; n - 1 >= j;) {
                    if (!(a[j] != a[i])) {
                        a[j] = -1;
                    }
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    j = 0;
    k = 0;
    {
        i = 0;
        for (; i <= n - 1;) {
            if (a[i] != -1)
                k++;
            i = i + 1;
        }
    }
    i = 0;
    for (; k - 2 >= j;) {
        if (a[i] != -1) {
            printf ("%d,", a[i]);
            j = j + 1;
        }
        i++;
    }
    {
        j = i;
        for (; j <= n - 1;) {
            if (a[j] != -1)
                printf ("%d", a[j]);
            j = j + 1;
        }
    }
}

