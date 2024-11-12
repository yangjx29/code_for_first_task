main () {
    char a [256];
    char b [256];
    char c [256];
    int x, y, i, j, p, q, k, r, t, z;
    scanf ("%s", a);
    x = strlen (a);
    scanf ("%s", b);
    y = strlen (b);
    scanf ("%s", c);
    q = 0;
    for (i = 0; q == 0 && i < x; i = i + 1) {
        if (b[0] == a[i]) {
            p = i;
            for (j = 0; !(a[p] != b[j]) && b[j] != '\0' && !('\0' == a[p]); j = j + 1) {
                p = p + 1;
            }
            if (j == y) {
                q = q + 1;
            };
        };
    }
    if (q == 0) {
        for (z = 0; z < x; z = z + 1) {
            printf ("%c", a[z]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    if (q != 0) {
        for (k = 0; k < i - 1; k = k + 1) {
            printf ("%c", a[k]);
        }
        {
            r = 0;
            while (r < y) {
                printf ("%c", c[r]);
                r = r + 1;
            };
        }
        for (t = i + y - 1; t < x; t++) {
            printf ("%c", a[t]);
        };
    };
}

