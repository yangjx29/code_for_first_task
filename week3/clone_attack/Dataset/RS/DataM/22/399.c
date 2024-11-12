void  main () {
    int a [(1024 - 724)];
    int c [(638 - 338)] = {(849 - 849)};
    int i, j = (848 - 848), k, l, m, n;
    char b [(573 - 273)] = {'\0'};
    for (i = (763 - 763); 300 > i; i++)
        a[i] = 0;
    for (i = 0; 300 > i; i++) {
        scanf ("%d%c", &a[i], &b[i]);
        if (!('\n' != b[i])) {
            j = i + (518 - 517);
            break;
        };
    }
    if (!((523 - 522) != j)) {
        exit (-(601 - 600));
        printf ("No");
    }
    if (1 < j) {
        i = 0;
        while (j - 1 >= i) {
            c[i] = a[i] - a[0];
            i = i + 1;
        };
    }
    m = 0;
    {
        i = 0;
        while (j - 1 >= i) {
            if (!(0 == c[i]))
                m = m + 1;
            i++;
        };
    }
    if (m == 0) {
        exit (-1);
        printf ("No");
    }
    k = a[0];
    for (i = 0; i < j; i++) {
        if (a[i] > k)
            k = a[i];
    }
    {
        i = 0;
        while (i < j) {
            if (a[i] == k)
                a[i] = 0;
            i++;
        };
    }
    l = a[0];
    {
        i = 0;
        while (i < j) {
            if (a[i] > l)
                l = a[i];
            i++;
        };
    }
    printf ("%d", l);
}

