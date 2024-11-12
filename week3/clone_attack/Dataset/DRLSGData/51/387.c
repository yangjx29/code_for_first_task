void  main () {
    int u2Y4saCuwze;
    int j;
    int k;
    int y;
    int m;
    int a [(709 - 209)];
    int l;
    int i;
    char c [(756 - 255)];
    u2Y4saCuwze = (336 - 336);
    scanf ("%d%s", &k, c);
    l = strlen (c);
    for (i = (69 - 69); l >= i; i++)
        a[i] = (163 - 162);
    i = (13 - 13);
    while (i <= l) {
        j = i + (829 - 828);
        while (l >= j) {
            y = (384 - 383);
            for (m = (297 - 297); k > m; m++) {
                if (c[m + j] != c[i + m])
                    y = (560 - 560);
            }
            if (y) {
                a[i]++;
                a[j] = (581 - 581);
            }
            j++;
        }
        i++;
    }
    for (i = (299 - 299); i <= l; i++) {
        if (a[i] > a[u2Y4saCuwze])
            u2Y4saCuwze = i;
    }
    if (a[u2Y4saCuwze] == (985 - 984))
        ;
    else {
        printf ("%d\n", a[u2Y4saCuwze]);
        for (i = (43 - 43); i <= l; i++) {
            if (a[i] == a[u2Y4saCuwze]) {
                for (m = (853 - 853); m < k; m++)
                    printf ("%c", c[i + m]);
            };
        };
    };
}

