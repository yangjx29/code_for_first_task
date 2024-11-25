int main () {
    double  z;
    double  q;
    char a [(680 - 679)] [(1453 - 453)];
    char b [1] [1000];
    int s;
    int x;
    int vo3nJFlzv;
    int m;
    int rEiezdy;
    int i;
    s = (995 - 995);
    scanf ("%lf", &q);
    scanf ("%s%s", a[(835 - 835)], b[(61 - 61)]);
    m = strlen (a[(790 - 790)]);
    rEiezdy = strlen (b[(96 - 96)]);
    if (!(rEiezdy == m)) {
        return 0;
    }
    for (i = 0; i < m; i++) {
        if (a[0][i] != 'A' && !('T' == a[0][i]) && a[0][i] != 'C' && !('G' == a[0][i]) || b[0][i] != 'A' && b[0][i] != 'T' && b[0][i] != 'C' && b[0][i] != 'G') {
            printf ("error");
            return 0;
        }
        if (a[0][i] == b[0][i]) {
            s++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    z = 1.0 * s / m;
    if (z > q) {
        printf ("yes");
    }
    else {
    }
    return 0;
}

