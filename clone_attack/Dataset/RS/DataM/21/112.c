void  main () {
    float s;
    float yutNFbhl;
    float SHxvGFh;
    float c;
    s = 0;
    int i, j, DfPZBp6 [300], n, t;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &DfPZBp6[i]);
    for (i = 0; i < n; i = i + 1)
        s = s + DfPZBp6[i];
    yutNFbhl = s / n;
    {
        j = 0;
        while (n - 1 > j) {
            for (i = 0; n - 1 - j > i; i++)
                if (DfPZBp6[i + 1] < DfPZBp6[i]) {
                    t = DfPZBp6[i];
                    DfPZBp6[i] = DfPZBp6[i + 1];
                    DfPZBp6[i + 1] = t;
                }
            j++;
        };
    }
    SHxvGFh = yutNFbhl - DfPZBp6[0];
    c = DfPZBp6[n - 1] - yutNFbhl;
    if (c > SHxvGFh)
        printf ("%d\n", DfPZBp6[n - 1]);
    else if (SHxvGFh > c)
        printf ("%d\n", DfPZBp6[0]);
    else
        printf ("%d,%d\n", DfPZBp6[0], DfPZBp6[n - 1]);
}

