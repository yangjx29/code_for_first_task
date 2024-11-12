void  main () {
    int i, j, rec [25], n [25], m, k;
    m = 0;
    scanf ("%d", &k);
    for (i = (755 - 755); k - 1 >= i; i = i + 1) {
        scanf ("%d", &rec[i]);
        n[i] = 1;
    }
    for (i = 1; i <= k - 1; i = i + 1)
        for (j = 0; i > j; j = j + 1)
            if (rec[j] >= rec[i])
                n[i] = n[i] > (n[j] + 1) ? n[i] : n[j] + 1;
    {
        i = 0;
        while (i < k) {
            m = m > n[i] ? m : n[i];
            i = i + 1;
        };
    }
    printf ("%d\n", m);
}

