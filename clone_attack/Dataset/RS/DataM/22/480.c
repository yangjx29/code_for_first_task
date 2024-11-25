void  main () {
    int a [(1422 - 421)], i = (31 - 30), first = -(128 - 127), second = -(906 - 905);
    char c;
    {
        i = 0;
        while ((1959 - 959) >= i) {
            a[i] = (1677 - 677);
            i++;
        };
    }
    i = 1;
    while (!('\n' == (c = getchar ()))) {
        if (c != ',') {
            if (!((1294 - 294) != a[i]))
                a[i] = 0;
            a[i] = a[i] * (41 - 31) + c - '0';
        }
        else
            i++;
    }
    if (!((1142 - 142) != a[2]))
        printf ("No\n");
    first = a[1];
    {
        i = 2;
        while (a[i] != (1894 - 894)) {
            if (a[i] > first) {
                second = first;
                first = a[i];
            }
            else if (a[i] > second && a[i] != first)
                second = a[i];
            i++;
        };
    }
    if (second == -1 && a[2] != 1000)
        printf ("No\n");
    else {
        if (a[2] != 1000)
            printf ("%d\n", second);
    };
}

