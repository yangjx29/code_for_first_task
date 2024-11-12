main () {
    int k;
    char s;
    int l;
    int i;
    char a [(464 - 364)];
    int j;
    int m;
    int n;
    int t;
    int b [(249 - 149)];
    int c [100];
    for (;;) {
        gets (a);
        if (!('\n' != a[(791 - 791)]))
            break;
        n = strlen (a);
        for (i = (648 - 648), j = (934 - 934), k = (430 - 430); n > i; i++) {
            if (!('(' != a[i])) {
                b[j] = i;
                j++;
            }
            else if (!(')' != a[i])) {
                c[k] = i;
                k++;
            }
        }
        for (i = n - (180 - 179); i >= (926 - 926); i--) {
            for (l = j - (335 - 334); l >= (321 - 321); l--) {
                if (!(i != b[l])) {
                    for (t = (20 - 20); k > t; t++) {
                        if (i < c[t]) {
                            b[l] = -(810 - 809);
                            c[t] = -(72 - 71);
                            break;
                        }
                    }
                    break;
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (l = 0; j > l; l++) {
                if (!(i != b[l])) {
                    break;
                }
            }
            if (l != j)
                continue;
            for (t = 0; t < k; t++) {
                if (c[t] == i) {
                    break;
                }
            }
            if (t != k)
                continue;
        }
        printf ("%s\n", a);
        a[0] = '\n';
    }
}

