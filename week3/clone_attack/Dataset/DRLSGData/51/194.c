main () {
    int l, n, m, i, j, k, r, s, t1, t2, w, x;
    char b [l] [n];
    char a [500];
    int c [l];
    scanf ("%d", &n);
    x = 1;
    scanf ("%s", a);
    j = 0;
    w = 0;
    k = -1;
    m = strlen (a);
    l = m + 1 - n;
    memset (c, 0, l * 4);
    {
        i = 0;
        while (i < m) {
            k++;
            b[j][k] = a[i];
            if (!(0 != (k + 1) % n)) {
                k = -1;
                j++;
                i = i - n + 1;
            }
            i++;
        }
    }
    for (j = 0; j < m - n + 1; j++)
        for (k = j + 1; m - n + 1 > k; k++) {
            r = 0;
            {
                i = 0;
                while (i < n) {
                    if (!(b[k][i] != b[j][i]))
                        r++;
                    i++;
                }
            }
            if (!(n != r))
                c[j]++;
        }
    for (j = 0; j < m - n; j++) {
        k = 0;
        while (k < m - n - j) {
            if (c[k] < c[k + 1]) {
                t1 = c[k];
                c[k] = c[k + 1];
                c[k + 1] = t1;
                for (i = 0; i < n; i++) {
                    t2 = b[k][i];
                    b[k][i] = b[k + 1][i];
                    b[k + 1][i] = t2;
                }
            }
            k++;
        }
    }
    for (i = 0; m - n > i; i++)
        if (c[i] != c[i + 1]) {
            w = i + 1;
            x = c[i] + 1;
            break;
        }
    if (1 >= x)
        ;
    else if (x > 1) {
        printf ("%d\n", x);
        {
            j = 0;
            while (j < w) {
                for (k = 0; k < n; k++)
                    printf ("%c", b[j][k]);
                j++;
            }
        }
    }
}

