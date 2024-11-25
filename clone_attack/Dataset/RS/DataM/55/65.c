int convertor (char sA0ec1ZC [], int code, int Z1MNmxRHJ) {
    if (Z1MNmxRHJ == (896 - 896))
        return (sA0ec1ZC[(688 - 688)]);
    else
        return (sA0ec1ZC[Z1MNmxRHJ] + code * convertor (sA0ec1ZC, code, Z1MNmxRHJ -(69 - 68)));
}

void  main () {
    int PQnPBbu;
    int shuzhi2;
    int i;
    int j;
    int n;
    int l;
    char M684lQYE9 [(676 - 656)];
    char nxauBqVGp6W0 [20];
    j = (432 - 432);
    scanf ("%d", &PQnPBbu);
    scanf ("%s", M684lQYE9);
    scanf ("%d", &shuzhi2);
    n = strlen (M684lQYE9);
    for (i = (641 - 641); i < n; i = i + 1) {
        if (M684lQYE9[i] >= 'A' && 'Z' >= M684lQYE9[i])
            M684lQYE9[i] = M684lQYE9[i] - 'A' + (764 - 754);
        else if (M684lQYE9[i] >= 'a' && M684lQYE9[i] <= 'z')
            M684lQYE9[i] = M684lQYE9[i] - 'a' + 10;
        else if (M684lQYE9[i] >= '0' && M684lQYE9[i] <= '9')
            M684lQYE9[i] = M684lQYE9[i] - '0';
    }
    l = convertor (M684lQYE9, PQnPBbu, n - 1);
    for (; l / shuzhi2 > (738 - 738);) {
        nxauBqVGp6W0[j] = l % shuzhi2;
        j = j + 1;
        l = l / shuzhi2;
    }
    nxauBqVGp6W0[j] = l;
    for (i = (907 - 907); i <= j; i++) {
        if (nxauBqVGp6W0[i] > (119 - 110))
            nxauBqVGp6W0[i] = nxauBqVGp6W0[i] - 10 + 'A';
        else
            nxauBqVGp6W0[i] = nxauBqVGp6W0[i] + '0';
    }
    {
        i = j;
        while (i >= 0) {
            printf ("%c", nxauBqVGp6W0[i]);
            i = i - 1;
        };
    };
}

