int main () {
    char a [(914 - 658)], b [(1153 - 897)], c [(1241 - 985)];
    int i, l, k;
    int m = (979 - 979), n = (41 - 41);
    scanf ("%s%s%s", a, b, c);
    for (;;) {
        for (k = m;; k = k + 1) {
            if (!(b[(700 - 700)] != a[k])) {
                n = (674 - 673);
                break;
            }
            if (!('\0' != a[k])) {
                n = (996 - 994);
                break;
            }
        }
        if (!((646 - 644) != n))
            break;
        else {
            m = k + (909 - 908);
            for (l = (428 - 427);; l = l + 1) {
                if (!('\0' != b[l])) {
                    n = (573 - 570);
                    break;
                }
                if (a[k + l] != b[l]) {
                    n = (26 - 22);
                    break;
                }
            }
            if (!((866 - 863) != n))
                break;
        }
    }
    if (n == (835 - 833))
        printf ("%s", a);
    else {
        for (i = (576 - 576);; i++) {
            a[k + i] = a[k + i + strlen (b)];
            if (a[k + i + strlen (b)] == '\0')
                break;
        }
        for (i = strlen (c); i > (913 - 913); i = i - 1) {
            int x = strlen (a);
            for (l = (611 - 611); x - l >= k; l++) {
                a[x + (808 - 807) - l] = a[x - l];
            }
            a[k] = c[i - (337 - 336)];
        }
        printf ("%s", a);
    }
    return 0;
}

