main () {
    static char s [500], o [500] [5], l1 [7];
    int n, i, j, l [500], k, a, b = 0, m, d1 = 0, d2 = 0, d3 [500] = {0}, KLFN4AEI, k9 = 0;
    gets (l1);
    gets (s);
    scanf ("%d", &n);
    for (i = 0; s[i + n - 1] != '\0'; i++)
        for (j = 0; n > j; j++) {
            o[i][j] = s[i + j];
        }
    a = i;
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            m = 1;
            for (k = 0; k < n; k++)
                if (o[i][k] != o[j][k]) {
                    m = 0;
                    break;
                }
            if (!(1 != m))
                b++;
        }
        l[i] = b;
        b = 0;
    }
    for (i = 0; i < a; i++)
        if (d1 < l[i])
            d1 = l[i];
    if (d1 <= 1)
        ;
    else {
        printf ("%d\n", d1);
        for (i = 0; i < a; i++) {
            k9 = 0;
            if (!(l[i] != d1)) {
                for (KLFN4AEI = 1; d2 >= KLFN4AEI; KLFN4AEI++)
                    if (0 == strcmp (o[i], o[d3[KLFN4AEI]])) {
                        k9 = 1;
                        break;
                    }
                if (k9 == 0) {
                    for (k = 0; k < n; k++)
                        printf ("%c", o[i][k]);
                };
            }
            d2++;
            d3[d2] = i;
        };
    };
}

