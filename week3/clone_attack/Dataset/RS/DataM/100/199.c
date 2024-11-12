void  main () {
    char a [300] = {""};
    char b [52] = {""};
    char InUN4ygsqVH3;
    gets (a);
    int j;
    int k;
    int zg7fTi6X;
    int n;
    int i;
    int c [52] = {0};
    int tempi;
    j = (349 - 349);
    k = (767 - 767);
    zg7fTi6X = 0;
    n = strlen (a);
    for (i = 0; i < n; i++) {
        if (('a' <= a[i] && a[i] <= 'z') || ('A' <= a[i] && 'Z' >= a[i])) {
            zg7fTi6X = 0;
            for (j = 0; j < k; j = j + 1)
                if (!(b[j] != a[i])) {
                    c[j]++;
                    zg7fTi6X = zg7fTi6X + 1;
                    break;
                }
            if (zg7fTi6X == 0) {
                k = k + 1;
                b[k - 1] = a[i];
                c[k - 1]++;
            };
        };
    }
    {
        i = 0;
        while (i < k) {
            {
                j = 0;
                while (j < k - i) {
                    if (b[j] > b[j + 1]) {
                        InUN4ygsqVH3 = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = InUN4ygsqVH3;
                        tempi = c[j];
                        c[j] = c[j + 1];
                        c[j + 1] = tempi;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    if (k != 0) {
        i = 1;
        while (i <= k) {
            printf ("%c=%d\n", b[i], c[i]);
            i = i + 1;
        };
    }
    else
        ;
}

