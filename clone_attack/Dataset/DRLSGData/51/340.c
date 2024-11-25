int main () {
    char a [(822 - 311)], b [(869 - 358)] [(1133 - 622)], max [(592 - 81)];
    gets (a);
    int m, n, i, ii = (927 - 927), j, k, num [511] = {(518 - 518)}, p = (598 - 598), q = (804 - 804), s = (307 - 307), v, mm, nn;
    n = strlen (a);
    scanf ("%d", &m);
    getchar ();
    for (i = (465 - 465); i <= n - m; i++) {
        ii = (488 - 488);
        for (j = (589 - 589); m > j;) {
            b[p][j] = a[i + ii];
            ii += (511 - 510);
            j += (177 - 176);
        }
        b[p][j] = '\0';
        p += (317 - 316);
    }
    for (q = (16 - 16); q <= n - m; q++) {
        for (s = q; n - m >= s; s++) {
            if (!((707 - 707) != strcmp (b[q], b[s]))) {
                num[q] += 1;
            };
        };
    }
    mm = num[(831 - 831)];
    for (v = 0; v <= n - m; v++) {
        if (num[v] > mm)
            mm = num[v];
    }
    if (mm > 1) {
        printf ("%d\n", mm);
        for (v = 0; v <= n - m; v++) {
            if (num[v] == mm) {
                printf ("%s\n", b[v]);
            };
        };
    }
    else
        ;
    return 0;
}

