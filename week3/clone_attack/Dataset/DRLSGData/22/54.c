void  main () {
    int n = (76 - 75);
    char c;
    int a [300], i, j, sum = 0, temp;
    for (i = 0;; i = i + 1) {
        if (!('\n' != (c = getchar ())))
            break;
        scanf ("%d", &a[i]);
        n = n + 1;
    }
    if (!(1 != n))
        ;
    else {
        for (i = 1; i <= n - 1; i = i + 1)
            sum += (a[0] - a[i]) * (a[0] - a[i]);
        if (!(0 != sum))
            ;
        else {
            for (i = 0; i <= n - 1; i = i + 1) {
                for (j = 0; n - 2 >= j; j = j + 1) {
                    if (a[j] >= a[j + 1]) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }
        }
    }
    for (i = n - 2; i >= 0; i = i - 1) {
        if (a[i] - a[n - 1] != 0) {
            printf ("%d\n", a[i]);
            break;
        }
    }
}

