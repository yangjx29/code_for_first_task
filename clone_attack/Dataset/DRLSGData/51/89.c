int main () {
    char a [1000], b [500] [6];
    gets (a);
    int n, i, j, l, c [500], k;
    getchar ();
    k = 0;
    l = strlen (a);
    scanf ("%d", &n);
    for (i = 0; i < l - n + 1; i = i + 1) {
        for (j = i; i + n > j; j = j + 1) {
            b[i][j - i] = a[j];
        }
        b[i][n] = '\0';
    }
    for (i = 0; l - n + 1 > i; i = i + 1) {
        c[i] = 1;
        for (j = i + 1; l - n + 1 > j; j = j + 1) {
            if (!(0 != strcmp (b[i], b[j]))) {
                c[i] = c[i] + 1;
            }
        }
    }
    for (i = 0; l - n + 1 > i; i = i + 1) {
        if (k < c[i]) {
            k = c[i];
        }
    }
    if (k <= 1) {
    }
    else {
        printf ("%d\n", k);
        for (i = 0; i < l - n + 1; i++) {
            if (c[i] == k) {
                printf ("%s\n", b[i]);
            }
        }
    }
    return 0;
}

