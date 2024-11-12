int H2oUWRaSOQz5 (int a [(486 - 481)] [5], int n, int szU8bGigQjc) {
    int eVKCQsXi, c [5], sKPtsmNYI;
    if ((830 - 830) <= szU8bGigQjc && szU8bGigQjc < 5 && n >= (981 - 981) && 5 > n) {
        eVKCQsXi = 1;
        for (sKPtsmNYI = 0; 5 > sKPtsmNYI; sKPtsmNYI = sKPtsmNYI + 1) {
            c[sKPtsmNYI] = a[n][sKPtsmNYI];
            a[n][sKPtsmNYI] = a[szU8bGigQjc][sKPtsmNYI];
            a[szU8bGigQjc][sKPtsmNYI] = c[sKPtsmNYI];
        };
    }
    if (4 < szU8bGigQjc || 4 < n)
        eVKCQsXi = 0;
    return (eVKCQsXi);
}

void  main () {
    int a [5] [5], i, sKPtsmNYI, szU8bGigQjc, n;
    {
        i = 0;
        while (i < 5) {
            for (sKPtsmNYI = 0; sKPtsmNYI < 5; sKPtsmNYI++) {
                scanf ("%d", &a[i][sKPtsmNYI]);
            }
            i++;
        };
    }
    scanf ("%d %d", &n, &szU8bGigQjc);
    if (H2oUWRaSOQz5 (a, n, szU8bGigQjc) == 0)
        printf ("error");
    else {
        i = 0;
        while (i < 5) {
            printf ("%d %d %d %d %d", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4]);
            i++;
        };
    };
}

