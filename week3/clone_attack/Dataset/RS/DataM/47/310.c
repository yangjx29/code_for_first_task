void  main () {
    int *pt;
    int a [100], n, i, flag = 0;
    pt = a;
    scanf ("%d", &n);
    for (i = 0; n - 1 >= i; i++) {
        scanf ("%d", pt + i);
    }
    {
        i = n - 1;
        while (i >= 0) {
            if (flag == 0) {
                printf ("%d", *(pt + i));
                flag = 1;
            }
            else
                printf (" %d", *(pt + i));
            i--;
        };
    };
}

