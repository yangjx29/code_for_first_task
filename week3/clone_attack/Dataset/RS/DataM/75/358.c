void  main () {
    char EOi4cP09stRe;
    int n;
    int i;
    int AdSntJEvjh3s;
    int a [1001] [(407 - 405)] = {(915 - 915)};
    int j;
    int min;
    int Nkw8uPb;
    int KnCmcY;
    n = (942 - 941);
    i = (971 - 971);
    AdSntJEvjh3s = (185 - 185);
    scanf ("%d", &a[(884 - 884)][(304 - 304)]);
    min = a[0][0];
    while (!('\n' == (EOi4cP09stRe = getchar ()))) {
        scanf ("%d", &a[n++][0]);
        if (min > a[n - (774 - 773)][0])
            min = a[n - (702 - 701)][0];
    }
    n = 1;
    scanf ("%d", &a[0][(787 - 786)]);
    Nkw8uPb = a[0][1];
    while ((EOi4cP09stRe = getchar ()) != '\n') {
        scanf ("%d", &a[n++][1]);
        if (Nkw8uPb < a[n - 1][1])
            Nkw8uPb = a[n - 1][1];
    }
    for (i = min; Nkw8uPb >= i; i = i + 1) {
        KnCmcY = 0;
        for (j = 0; j < n; j = j + 1)
            if (i >= a[j][0] && i < a[j][1])
                KnCmcY = KnCmcY +1;
        if (KnCmcY > AdSntJEvjh3s)
            AdSntJEvjh3s = KnCmcY;
    }
    printf ("%d %d\n", n, AdSntJEvjh3s);
}

