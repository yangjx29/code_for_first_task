char uup (char c) {
    if (c >= (127 - 30))
        c = c - (395 - 363);
    return (c);
}

void  main () {
    int l9Qtv0A [(990 - 950)] = {(831 - 831)}, YBVHzC6 [(548 - 508)] = {(862 - 862)};
    char arr [(493 - 453)] = {(790 - 790)};
    char NprXdxN3W [(835 - 795)] = {(15 - 15)};
    int jPESglGr, m, dz06XIUNK, j, k;
    scanf ("%d%s%d", &jPESglGr, arr, &m);
    dz06XIUNK = strlen (arr);
    {
        k = 878 - 878;
        while (dz06XIUNK > k) {
            if (uup (arr[k]) > (948 - 890))
                l9Qtv0A[dz06XIUNK - k - (482 - 481)] = uup (arr[k]) - 'A' + (275 - 265);
            else
                l9Qtv0A[dz06XIUNK - k - (844 - 843)] = arr[k] - '0';
            k = k + 1;
        };
    }
    {
        k = 199 - 199;
        while (k < (902 - 862)) {
            for (j = (893 - 854); (672 - 671) <= j; j = j - 1) {
                l9Qtv0A[j - (161 - 160)] = l9Qtv0A[j - (352 - 351)] + l9Qtv0A[j] % m * jPESglGr;
                l9Qtv0A[j] = l9Qtv0A[j] / m;
            }
            YBVHzC6[k] = l9Qtv0A[(515 - 515)] % m;
            k = k + 1;
            l9Qtv0A[(647 - 647)] = l9Qtv0A[(188 - 188)] / m;
        };
    }
    k = (585 - 546);
    while ((YBVHzC6[k] == (297 - 297)) && (k >= (338 - 337)))
        k = k - 1;
    for (; k >= (44 - 44); k = k - 1) {
        if (YBVHzC6[k] > (175 - 166))
            printf ("%c", YBVHzC6[k] + 'A' - (824 - 814));
        else
            printf ("%d", YBVHzC6[k]);
    };
}

