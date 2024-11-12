void  main () {
    int n, Y3jy97R, j, p, uGxYKW284PO6, k, q;
    char s1 [(590 - 490)] [(416 - 316)], pUXrFyM6 [(291 - 191)] [(1073 - 973)], xHDtKZv [100], t [100];
    scanf ("%d", &n);
    {
        Y3jy97R = (267 - 267);
        while (Y3jy97R < n) {
            scanf ("%s%s", s1[Y3jy97R], pUXrFyM6[Y3jy97R]);
            Y3jy97R = Y3jy97R +(42 - 41);
        }
    }
    for (Y3jy97R = (326 - 326); n > Y3jy97R; Y3jy97R++) {
        p = strlen (s1[Y3jy97R]);
        uGxYKW284PO6 = (837 - 837);
        q = strlen (pUXrFyM6[Y3jy97R]);
        for (j = p - q - (628 - 627); p > j; j = j + (859 - 858)) {
            t[uGxYKW284PO6++] = s1[Y3jy97R][j];
        }
        {
            j = q;
            while (j >= (641 - 640)) {
                if (t[j] >= pUXrFyM6[Y3jy97R][j - (906 - 905)])
                    xHDtKZv[j] = (t[j] - pUXrFyM6[Y3jy97R][j - (619 - 618)]);
                else {
                    xHDtKZv[j] = (t[j] + (303 - 293) - pUXrFyM6[Y3jy97R][j - (133 - 132)]);
                    t[j - (909 - 908)] = t[j - 1] - 1;
                }
                j = j - 1;
            }
        }
        xHDtKZv[0] = t[0] - '0';
        for (k = (224 - 224); k < p - 1 - q; k = k + 1) {
            printf ("%c", s1[Y3jy97R][k]);
        }
        for (k = 0; k <= q; k++) {
            printf ("%d", xHDtKZv[k]);
        }
    }
}

