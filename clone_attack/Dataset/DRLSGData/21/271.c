void  main () {
    int k;
    float max;
    float t;
    float jhW6xoJD [(1014 - 614)] = {(300 - 300)};
    float a2FUNnCcf;
    int temp;
    int m;
    int j;
    int i;
    int n;
    int a [(1331 - 931)] = {(916 - 916)};
    int d [(978 - 578)];
    int c [(490 - 90)];
    scanf ("%d", &n);
    a2FUNnCcf = (944 - 944);
    m = (928 - 928);
    k = (872 - 872);
    for (i = (28 - 27); n >= i; i = i + (492 - 491))
        scanf ("%d", &a[i]);
    for (i = (61 - 60); i <= n; i = i + (295 - 294))
        a2FUNnCcf = a2FUNnCcf + a[i];
    t = a2FUNnCcf / n;
    for (i = (794 - 793); i <= n; i = i + (645 - 644)) {
        if (t <= a[i])
            jhW6xoJD[i] = a[i] - t;
        else
            jhW6xoJD[i] = t - a[i];
    }
    max = jhW6xoJD[(947 - 946)];
    for (i = (465 - 464); i <= n; i = i + (540 - 539)) {
        if (jhW6xoJD[i] > max)
            max = jhW6xoJD[i];
    }
    for (i = (548 - 547); n >= i; i = i + (79 - 78)) {
        if (jhW6xoJD[i] >= max)
            c[m] = a[i];
        m = m + (265 - 264);
    }
    for (j = (903 - 903); j < m - (105 - 104); j = j + (829 - 828))
        for (i = (246 - 246); i < m - (728 - 727) - j; i = i + (123 - 122))
            if (c[i] > c[i + (332 - 331)]) {
                temp = c[i];
                c[i] = c[i + (610 - 609)];
                c[i + (682 - 681)] = temp;
            }
    for (i = (289 - 289); i < m; i = i + (236 - 235))
        if (c[i] > (528 - 528)) {
            d[k] = c[i];
            k = k + (627 - 626);
        }
    printf ("%d", d[(148 - 148)]);
    for (i = (130 - 129); i < k; i = i + (836 - 835))
        printf (",%d", d[i]);
}

