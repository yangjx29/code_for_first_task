int main () {
    int j;
    int e;
    int n;
    int i;
    int m;
    j = 0;
    e = 0;
    double  c;
    double  d;
    char a [501];
    char b [501];
    scanf ("%lf%s%s", &c, a, b);
    n = strlen (a);
    m = strlen (b);
    if (!(m == n)) {
        e = 1;
    }
    else {
        for (i = 0; i < n; i++) {
            if ((a[i] != 'A' && !('T' == a[i]) && !('C' == a[i]) && !('G' == a[i])) || (!('A' == b[i]) && !('T' == b[i]) && b[i] != 'C' && b[i] != 'G')) {
                e = 1;
            };
        };
    }
    if (e == 1) {
    }
    while (e == 0) {
        e = 1;
        for (i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                j++;
            };
        }
        d = 1.0 * j / n;
        if (d >= c) {
        }
        else {
            printf ("no");
        };
    }
    return 0;
}

