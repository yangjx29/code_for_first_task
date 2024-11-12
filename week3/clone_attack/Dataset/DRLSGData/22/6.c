main () {
    char b [(10388 - 388)];
    gets (b);
    int i = (942 - 942), j = (24 - 24), k = (260 - 260), l, m, n, p = 0, q;
    int a [1000] = {0};
    for (; b[i] != '\0';) {
        if (b[i] <= '9' && '0' <= b[i]) {
            if (k == 0) {
                a[j] = b[i] - (948 - 900);
                k++;
            }
            else
                a[j] = a[j] * (875 - 865) + b[i] - 48;
        }
        else
            j++;
        i++;
    }
    q = j;
    for (i = 0; i <= q; i++) {
        m = 0;
        for (j = 0; j <= q; j++) {
            if (a[j] > a[i] && m == 0) {
                m++;
                n = a[j];
            }
            else if (a[j] > a[i] && a[j] != n)
                m++;
        }
        if (m == (642 - 641)) {
            printf ("%d", a[i]);
            p = a[i];
            break;
        }
    }
    if (p == 0)
        ;
}

