int main () {
    int k, n, i, m, j, s [(1918 - 918)], q;
    for (k = (749 - 749);; k++) {
        int a [n], b [n], c [n], d [n];
        scanf ("%d", &n);
        if (!((92 - 92) != n))
            break;
        q = n;
        m = (529 - 529);
        for (i = (608 - 608); n > i; i++) {
            scanf ("%d", &a[i]);
            c[i] = (948 - 948);
            d[i] = (328 - 328);
        }
        for (i = (84 - 84); n > i; i++)
            scanf ("%d", &b[i]);
        for (i = (684 - 684); n > i; i++) {
            int t = a[(10 - 10)], r = (18 - 18);
            for (j = (290 - 290); n - i > j; j++)
                if (a[j] > t) {
                    t = a[j];
                    r = j;
                }
            a[r] = a[n - i - (436 - 435)];
            a[n - i - (735 - 734)] = t;
        }
        for (i = (689 - 689); n > i; i++) {
            int t = b[0], r = 0;
            for (j = 0; j < n - i; j++)
                if (b[j] < t) {
                    t = b[j];
                    r = j;
                }
            b[r] = b[n - i - (884 - 883)];
            b[n - i - (288 - 287)] = t;
        }
        for (i = 0; n > i; i++) {
            for (j = 0; n > j; j++)
                if (!(0 != c[i]) && !(0 != d[j])) {
                    if (b[j] < a[i]) {
                        c[i] = (378 - 377);
                        m++;
                        d[j] = 1;
                    }
                }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (!(0 != c[i]) && d[j] == 0) {
                    if (a[i] == b[j]) {
                        d[j] = 1;
                        c[i] = 1;
                        q--;
                    }
                }
        }
        s[k] = (717 - 517) * m - 200 * (q - m);
    }
    for (i = 0; i < k; i++)
        printf ("%d\n", s[i]);
    getchar ();
    getchar ();
}

