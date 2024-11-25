void  main () {
    int k;
    int i;
    int p;
    int a [(1083 - 83)];
    int VlnkR6 [(1357 - 357)];
    int t [1000];
    int j;
    k = (918 - 918);
    i = (499 - 499);
    p = (379 - 379);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char c;
    c = ',';
    while (c == ',') {
        p = p + 1;
        scanf ("%d%c", &a[i], &c);
        i = i + 1;
    }
    i = (493 - 493);
    c = ',';
    for (; c == ',';) {
        scanf ("%d%c", &VlnkR6[i], &c);
        i = i + 1;
    }
    {
        i = 0;
        while (i < (1976 - 977)) {
            t[i] = 0;
            i++;
        };
    }
    for (i = 0; i < 999; i = i + 1) {
        j = 0;
        while (j < p) {
            if ((a[j] <= i) && (VlnkR6[j] > i))
                t[i]++;
            j++;
        };
    }
    for (i = 0; i < 999; i = i + 1)
        if (t[i] > k)
            k = t[i];
    printf ("%d %d", p, k);
}

